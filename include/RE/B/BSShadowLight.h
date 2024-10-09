#pragma once

#include "RE/B/BSLight.h"
#include "RE/B/BSShaderRenderTargets.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiRect.h"

#include "REX/W32/D3D.h"

namespace RE
{
	class BSShaderAccumulator;
	class NiCamera;

	class BSShadowLight : public BSLight
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSShadowLight;
		inline static constexpr auto VTABLE = VTABLE_BSShadowLight;

		struct ShadowmapDescriptor
		{
#define SHADOWMAPDESCRIPTOR_CONTENT                                           \
	REX::W32::XMFLOAT4X4           lightTransform;    /* 00 */                \
	NiPointer<NiCamera>            camera;            /* 40 */                \
	NiPointer<BSShaderAccumulator> shaderAccumulator; /* 48, VR 50 */         \
	uint32_t                       unk50;             /* 50, VR 60 = -1 */    \
	RENDER_TARGET_DEPTHSTENCIL     renderTarget;      /* 54, VR 64 */         \
	uint32_t                       shadowmapIndex;    /* 58, VR D0 - guess */ \
	NiPlane                        planes[6];         /* 5C, VR 70 */         \
	uint32_t                       unkBC;             /* BC, VR D4 */         \
	uint32_t                       unkC0;             /* C0, VR D8 */         \
	float                          unkC4;             /* C4, VR DC */         \
	float                          unkC8;             /* C8, VR E0 */         \
	float                          unkCC;             /* CC */                \
	NiRect<int32_t>                port;              /* D0, VR E8 */         \
	BSCullingProcess*              cullingProcess;    /* E0, VR F8 */         \
	uint16_t                       flags;             /* E8, VR 100 */
            SHADOWMAPDESCRIPTOR_CONTENT;
		};
		static_assert(sizeof(ShadowmapDescriptor) == 0xF0);
		static_assert(offsetof(ShadowmapDescriptor, shaderAccumulator) == 0x48);
		static_assert(offsetof(ShadowmapDescriptor, renderTarget) == 0x54);
		static_assert(offsetof(ShadowmapDescriptor, planes) == 0x5C);
		static_assert(offsetof(ShadowmapDescriptor, shadowmapIndex) == 0x58);
		static_assert(offsetof(ShadowmapDescriptor, port) == 0xD0);
		static_assert(offsetof(ShadowmapDescriptor, cullingProcess) == 0xE0);
		static_assert(offsetof(ShadowmapDescriptor, flags) == 0xE8);

		struct ShadowmapDescriptorVR
		{
#define SHADOWMAPDESCRIPTOR_CONTENT_VR                                         \
	REX::W32::XMFLOAT4X4           lightTransform;    /* 00 */                 \
	NiPointer<NiCamera>            camera;            /* 40 */                 \
	uint64_t                       unkVR48;           /* VR 48 */              \
	NiPointer<BSShaderAccumulator> shaderAccumulator; /* 48, VR 50 */          \
	uint64_t                       unkVR58;           /* VR 58 */              \
	uint32_t                       unk50;             /* 50, VR 60 = -1 */     \
	RENDER_TARGET_DEPTHSTENCIL     renderTarget;      /* 54, VR 64 */          \
	uint64_t                       unkVR68;           /* VR 68 = -1 */         \
	NiPlane                        planes[6];         /* 5C, VR 70 */          \
	uint32_t                       shadowmapIndex;    /* 58, VR D0 -  guess */ \
	uint32_t                       unkBC;             /* BC, VR D4 */          \
	uint32_t                       unkC0;             /* C0, VR D8 */          \
	float                          unkC4;             /* C4, VR DC */          \
	float                          unkC8;             /* C8, VR E0 */          \
	float                          unkCC;             /* CC, VR E4 */          \
	NiRect<int32_t>                port;              /* D0, VR E8 */          \
	BSCullingProcess*              cullingProcess;    /* E0, VR F8 */          \
	uint16_t                       flags;             /* E8, VR 100 */

			SHADOWMAPDESCRIPTOR_CONTENT_VR;
		};
		static_assert(sizeof(ShadowmapDescriptorVR) == 0x108);
		static_assert(offsetof(ShadowmapDescriptorVR, shaderAccumulator) == 0x50);
		static_assert(offsetof(ShadowmapDescriptorVR, unkVR58) == 0x58);
		static_assert(offsetof(ShadowmapDescriptorVR, unk50) == 0x60);
		static_assert(offsetof(ShadowmapDescriptorVR, renderTarget) == 0x64);
		static_assert(offsetof(ShadowmapDescriptorVR, planes) == 0x70);
		static_assert(offsetof(ShadowmapDescriptorVR, shadowmapIndex) == 0xD0);
		static_assert(offsetof(ShadowmapDescriptorVR, port) == 0xE8);
		static_assert(offsetof(ShadowmapDescriptorVR, cullingProcess) == 0xF8);
		static_assert(offsetof(ShadowmapDescriptorVR, flags) == 0x100);

		struct RUNTIME_DATA
		{
#define RUNTIME_DATA_CONTENT                                                        \
	BSTArray<ShadowmapDescriptor>   shadowmapDescriptors;         /* 148 */         \
	ShadowmapDescriptor             focusShadowmapDescriptors[4]; /* 160 */         \
	uint32_t                        shadowLightIndex;             /* 520, VR 580 */ \
	uint32_t                        unk524;                       /* 524, VR 584 */ \
	BSTArray<NiPointer<NiAVObject>> cullingObjects;               /* 528, VR 588 */ \
	float                           shadowBiasScale;              /* 540, VR 5A0 */ \
	NiRect<int32_t>                 port;                         /* 544, VR 5A4 */ \
	uint32_t                        shadowSceneNodeIndex;         /* 554, VR 5B4 */ \
	bool                            drawFocusShadows;             /* 558, VR 5B8  */
            RUNTIME_DATA_CONTENT
		};
#if defined(EXCLUSIVE_SKYRIM_FLAT)
		static_assert(sizeof(RUNTIME_DATA) == 0x418);
		static_assert(offsetof(RUNTIME_DATA, shadowLightIndex) == 0x3D8);
		static_assert(offsetof(RUNTIME_DATA, unk524) == 0x3DC);
		static_assert(offsetof(RUNTIME_DATA, cullingObjects) == 0x3E0);
		static_assert(offsetof(RUNTIME_DATA, shadowBiasScale) == 0x3F8);
		static_assert(offsetof(RUNTIME_DATA, port) == 0x3FC);
		static_assert(offsetof(RUNTIME_DATA, shadowSceneNodeIndex) == 0x40C);
		static_assert(offsetof(RUNTIME_DATA, drawFocusShadows) == 0x410);
#endif

		struct RUNTIME_DATA_VR
		{
#define RUNTIME_DATA_CONTENT_VR                                                     \
	BSTArray<ShadowmapDescriptorVR> shadowmapDescriptors;         /* 148 */         \
	ShadowmapDescriptorVR           focusShadowmapDescriptors[4]; /* 160 */         \
	uint32_t                        shadowLightIndex;             /* 520, VR 580 */ \
	uint32_t                        unk524;                       /* 524, VR 584 */ \
	BSTArray<NiPointer<NiAVObject>> cullingObjects;               /* 528, VR 588 */ \
	float                           shadowBiasScale;              /* 540, VR 5A0 */ \
	NiRect<int32_t>                 port;                         /* 544, VR 5A4 */ \
	uint32_t                        shadowSceneNodeIndex;         /* 554, VR 5B4 */ \
	bool                            drawFocusShadows;             /* 558, VR 5B8  */
            RUNTIME_DATA_CONTENT_VR
		};
#if defined(EXCLUSIVE_SKYRIM_VR)
		static_assert(sizeof(RUNTIME_DATA_VR) == 0x478);
		static_assert(offsetof(RUNTIME_DATA_VR, shadowLightIndex) == 0x438);
		static_assert(offsetof(RUNTIME_DATA_VR, unk524) == 0x43C);
		static_assert(offsetof(RUNTIME_DATA_VR, cullingObjects) == 0x440);
		static_assert(offsetof(RUNTIME_DATA_VR, shadowBiasScale) == 0x458);
		static_assert(offsetof(RUNTIME_DATA_VR, port) == 0x45C);
		static_assert(offsetof(RUNTIME_DATA_VR, shadowSceneNodeIndex) == 0x46C);
		static_assert(offsetof(RUNTIME_DATA_VR, drawFocusShadows) == 0x470);
#endif

		~BSShadowLight() override;  // 00

		// add
		virtual bool AreFocusShadowsSupported();                                                                                  // 04
		virtual bool IsSpotLight();                                                                                               // 05
		virtual bool IsDirectionalLight();                                                                                        // 06
		virtual bool IsParabolicLight();                                                                                          // 07
		virtual bool IsOmnidirectionalLight();                                                                                    // 08
		virtual void Cull(uint32_t& globalShadowLightCount, uint32_t shadowMaskChannel, NiPointer<NiAVObject> cullingScene) = 0;  // 09
		virtual void RenderShadowmaps() = 0;                                                                                      // 0A
		virtual void SetShadowmapCount(uint32_t shadowmapCount);                                                                  // 0B
		virtual void Reset();                                                                                                     // 0C
		virtual void Unk_0D();                                                                                                    // 0D
		virtual bool Unk_0E();                                                                                                    // 0E
		virtual void Unk_0F();                                                                                                    // 0F
		virtual bool SetFrameCamera(const NiCamera& frameCamera) = 0;                                                             // 10

		[[nodiscard]] inline RUNTIME_DATA& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA>(this, 0x148, 0x148);
		}

		[[nodiscard]] inline const RUNTIME_DATA& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA>(this, 0x148, 0x148);
		}

		[[nodiscard]] inline RUNTIME_DATA_VR& GetVRRuntimeData() noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA_VR>(this, 0x148, 0x148);
		}

		[[nodiscard]] inline const RUNTIME_DATA_VR& GetVRRuntimeData() const noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA_VR>(this, 0x148, 0x148);
		}

		// members
		uint32_t shadowMapCount;  // 140
		uint32_t unk144;          // 144
#if defined(EXCLUSIVE_SKYRIM_FLAT)
		RUNTIME_DATA_CONTENT;  // 148, VR 148
#elif defined(EXCLUSIVE_SKYRIM_VR)
		RUNTIME_DATA_CONTENT_VR;  // 148, VR 148
#endif
	private:
		KEEP_FOR_RE()
	};
#if defined(EXCLUSIVE_SKYRIM_FLAT)
	static_assert(sizeof(BSShadowLight) == 0x560);
#elif defined(EXCLUSIVE_SKYRIM_VR)
	static_assert(sizeof(BSShadowLight) == 0x5C0);
#else
	static_assert(sizeof(BSShadowLight) == 0x148);
#endif
}
#undef SHADOWMAPDESCRIPTOR_CONTENT
#undef SHADOWMAPDESCRIPTOR_CONTENT_VR
#undef RUNTIME_DATA_CONTENT
#undef RUNTIME_DATA_CONTENT_VR
