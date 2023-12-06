#pragma once

#include "RE/B/BSShaderRenderTargets.h"
#include "RE/N/NiTexture.h"
#include "RE/R/RenderTargetData.h"
#include "RE/T/TextureFileFormat.h"

struct ID3D11Device;
struct ID3D11DeviceContext;
struct IDXGISwapChain;
struct ID3D11RenderTargetView1;
struct ID3D11ShaderResourceView1;

namespace RE
{
	namespace BSGraphics
	{
		struct RendererWindow
		{
		public:
			// members
			SKSE::WinAPI::HWND         hWnd;                   // 00
			std::int32_t               windowX;                // 08
			std::int32_t               windowY;                // 0C
			std::int32_t               windowWidth;            // 10
			std::int32_t               windowHeight;           // 14
			IDXGISwapChain*            swapChain;              // 18
			RENDER_TARGET              swapChainRenderTarget;  // 20
			std::uint32_t              unk24;                  // 24
			std::uint64_t              unk28;                  // 28
			ID3D11RenderTargetView1*   renderView;             // 30
			ID3D11ShaderResourceView1* resourceView;           // 38
			std::uint64_t              unk40;                  // 40
			std::uint64_t              unk48;                  // 48
		};
		static_assert(sizeof(RendererWindow) == 0x50);

		struct RendererData
		{
		public:
			// members
			std::uint32_t                     uiAdapter;                  // 0000
			DirectX::DXGI_RATIONAL            desiredRefreshRate;         // 0004 - refreshRate?
			DirectX::DXGI_RATIONAL            actualRefreshRate;          // 000C
			DirectX::DXGI_MODE_SCALING        scaleMode;                  // 0014
			DirectX::DXGI_MODE_SCANLINE_ORDER scanlineOrdering;           // 0018
			std::uint32_t                     isNotWindowed;              // 001C
			bool                              fullScreen;                 // 0020
			bool                              borderlessDisplay;          // 0021
			bool                              readOnlyDepth;              // 0022
			bool                              instantiated;               // 0023
			bool                              requestedWindowSizeChange;  // 0024
			std::uint32_t                     newWidth;                   // 0028
			std::uint32_t                     newHeight;                  // 002C
			std::uint32_t                     presentInterval;            // 0030
			ID3D11Device*                     forwarder;                  // 0038
			ID3D11DeviceContext*              context;                    // 0040
			RendererWindow                    renderWindows[32];          // 0048
#ifndef SKYRIMVR
			RenderTargetData renderTargets[RENDER_TARGET::kTOTAL];               // 0A48
			DepthStencilData depthStencils[RENDER_TARGET_DEPTHSTENCIL::kTOTAL];  // 1FA8
#else
			RenderTargetData renderTargets[RENDER_TARGET::kVRTOTAL];               // 0A48
			DepthStencilData depthStencils[RENDER_TARGET_DEPTHSTENCIL::kVRTOTAL];  // 1FA8, VR 0x21B8
#endif
			CubemapRenderTargetData        cubemapRenderTargets[RENDER_TARGET_CUBEMAP::kTOTAL];  // 26C8, VR 0x2E48
			Texture3DTargetData            texture3DRenderTargets[RENDER_TARGET_3D::kTOTAL];     // 2708
			float                          clearColor[4];                                        // 2768
			std::uint8_t                   clearStencil;                                         // 2778
			SKSE::WinAPI::CRITICAL_SECTION lock;                                                 // 2780, VR 0x2F00
			const char*                    className;                                            // 27A8
			SKSE::WinAPI::HINSTANCE        hInstance;                                            // 27B0
		};
#ifndef SKYRIMVR
		static_assert(offsetof(RendererData, renderWindows) == 0x2780);
		static_assert(offsetof(RendererData, lock) == 0x2780);
#else
		static_assert(offsetof(RendererData, renderWindows) == 0x48);
		static_assert(offsetof(RendererData, renderTargets) == 0xA48);
		static_assert(offsetof(RendererData, depthStencils) == 0x21B8);
		static_assert(offsetof(RendererData, cubemapRenderTargets) == 0x2E30);
		static_assert(offsetof(RendererData, lock) == 0x2EE8);
#endif

		struct RendererInitOSData
		{
			WinAPI::HWND      hwnd;                // 00
			WinAPI::HINSTANCE instance;            // 08
			WinAPI::WNDPROC   windowProcFunction;  // 10
			WinAPI::HICON     icon;                // 18
			const char*       className;           // 20
			uint32_t          adapter;             // 28
			uint32_t          unk2C;               // 2C
		};
		static_assert(sizeof(RendererInitOSData) == 0x30);

		struct ScreenSize
		{
			uint32_t width;   // 00
			uint32_t height;  // 04
		};
		static_assert(sizeof(ScreenSize) == 0x8);

		struct ApplicationWindowProperties
		{
			ScreenSize screenSize;        // 00
			int        windowX;           // 08
			int        windowY;           // 0C
			int        refreshRate;       // 10
			int        presentInterval;   // 14
			bool       appFullScreen;     // 18
			bool       borderlessWindow;  // 19
			bool       vsync;             // 1A
		};
		static_assert(sizeof(ApplicationWindowProperties) == 0x1C);

		class Renderer
		{
		public:
			[[nodiscard]] static Renderer* GetSingleton() noexcept;

			void CreateSwapChain(WinAPI::HWND* window, bool setCurrent);
			void KillWindow(std::uint32_t windowID);
			void Lock();
			void Unlock();
			void ResizeWindow(std::uint32_t windowID, std::uint32_t width, std::uint32_t height, bool fullscreen, bool borderless);
			void RequestWindowResize(std::uint32_t width, std::uint32_t height);
			void SetWindowPosition(std::uint32_t windowID, std::int32_t x, std::int32_t y);
			void SetWindowActiveState(bool show);
			void WindowSizeChanged(std::uint32_t windowID);
			void ResetWindow(std::uint32_t windowID);
			void UpdateViewPort(std::uint32_t a_unk, std::uint32_t b_unk, bool c_unk);

			[[nodiscard]] NiTexture::RendererData* CreateRenderTexture(std::uint32_t a_width, std::uint32_t a_height);
			void                                   SaveRenderTargetToFile(RENDER_TARGET a_renderTarget, const char* a_filePath, TextureFileFormat a_textureFileFormat);

			[[nodiscard]] static RendererData*   GetRendererData();
			[[nodiscard]] static ScreenSize      GetScreenSize();
			[[nodiscard]] static ID3D11Device*   GetDevice();
			[[nodiscard]] static RendererWindow* GetCurrentRenderWindow();

		private:
			void Begin(std::uint32_t windowID);
			void Init(RendererInitOSData* a_data, ApplicationWindowProperties* windowProps, WinAPI::HWND window);
			void End();
			void Shutdown();

		public:
			// members
			std::uint64_t unk00;  // 00
			std::uint64_t unk08;  // 08
#ifdef SKYRIMVR
			std::uint64_t unk010;  // 0010
#endif
			RendererData data;  // 10, VR 18
		};
	}
}
