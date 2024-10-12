#pragma once

#include "RE/B/BSAtomic.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSingleton.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESCamera.h"

namespace RE
{
	class bhkRigidBody;
	class bhkSimpleShapePhantom;
	class NiRefObject;
	class TESCameraState;

	struct CameraStates
	{
		enum CameraState : std::uint32_t
		{
			kFirstPerson = 0,
			kAutoVanity,
			kVATS,
			kFree,
			kIronSights,
			kFurniture,
			kPCTransition,
			kTween,
			kAnimated,
			kThirdPerson,
			kMount,
			kBleedout,
			kDragon,
#ifdef SKYRIMVR
			kVR,  // ".?AVVrCameraState@@"? by memory address it's after bleedout and before tween
#endif
			kTotal
		};
	};
	using CameraState = CameraStates::CameraState;

	class PlayerCamera :
		public TESCamera,                     // 000
		public BSTSingletonSDM<PlayerCamera>  // 038
	{
	public:
		inline static constexpr auto RTTI = RTTI_PlayerCamera;
		inline static constexpr auto VTABLE = VTABLE_PlayerCamera;

		struct Unk120
		{
			NiPointer<bhkSimpleShapePhantom*> unk00;  // 00
			NiPointer<bhkSimpleShapePhantom*> unk08;  // 08
		};
		static_assert(sizeof(Unk120) == 0x10);

		~PlayerCamera() override;  // 00

		// override (TESCamera)
		void SetCameraRoot(NiPointer<NiNode> a_root) override;  // 01

		static PlayerCamera* GetSingleton();

		void ForceFirstPerson();
		void ForceThirdPerson();
		bool IsInBleedoutMode() const;
		bool IsInFirstPerson() const;
		bool IsInFreeCameraMode() const;
		bool IsInThirdPerson() const;
		void PushCameraState(CameraState a_state);
		void ToggleFreeCameraMode(bool a_freezeTime);
		void UpdateThirdPerson(bool a_weaponDrawn);

		// members
		std::uint8_t                                         pad039;                              // 039
		std::uint16_t                                        pad03A;                              // 03A
		ActorHandle                                          cameraTarget;                        // 03C
		BSTSmallArray<TESCameraState*, CameraStates::kTotal> tempReturnStates;                    // 040
		BSTSmartPointer<TESCameraState>                      cameraStates[CameraStates::kTotal];  // 0B8, VR 0C0
#ifndef SKYRIMVR
		Unk120* unk120;  // 120 - ?
#endif
		NiPointer<bhkRigidBody> rigidBody;         // 128, VR 130 - ?
		RefHandle               objectFadeHandle;  // 130, VR 138 - ?
		mutable BSSpinLock      lock;              // 134, VR 13C
#ifdef SKYRIMVR
		char VRpad140[20];  // VR 140
#endif
		float         worldFOV;             // 13C, VR 158
		float         firstPersonFOV;       // 140, VR 15C
		NiPoint3      pos;                  // 144, VR 160 - ?
		float         idleTimer;            // 150, VR 16C - ?
		float         yaw;                  // 154, VR 170 - ? - in radians
		std::uint32_t unk158;               // 158, VR 174 - ?
		std::uint32_t unk15C;               // 15C, VR 178 - ?
		bool          allowAutoVanityMode;  // 160, VR 17C
		bool          bowZoomedIn;          // 161, VR 17D
		bool          isWeapSheathed;       // 162, VR 17E - ?
		bool          isProcessed;          // 163, VR 17F - ?
		std::uint8_t  unk164;               // 164, VR 180
		std::uint8_t  unk165;               // 165, VR 181
		std::uint16_t pad166;               // 166, VR 182

	private:
		bool QCameraEquals(CameraState a_cameraState) const;
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(PlayerCamera) == 0x168);
#else
	static_assert(offsetof(PlayerCamera, cameraStates) == 0xc0);
	static_assert(offsetof(PlayerCamera, rigidBody) == 0x130);
	static_assert(offsetof(PlayerCamera, lock) == 0x13c);
	static_assert(offsetof(PlayerCamera, pos) == 0x160);
	static_assert(offsetof(PlayerCamera, yaw) == 0x170);
	static_assert(offsetof(PlayerCamera, allowAutoVanityMode) == 0x17c);
	static_assert(sizeof(PlayerCamera) == 0x188);
#endif
}
