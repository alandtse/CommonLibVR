#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiSmartPointer.h"

namespace RE
{
	class bhkRigidBody;
	class bhkSimpleShapePhantom;

	struct VRGrabHand
	{
		enum : std::uint32_t
		{
			kLeft,
			kRight,
			kHeadset,  // Can be kGamepad when in gamepad mode

			kTotal
		};
	};

	class CrosshairPickData
	{
	public:
		static CrosshairPickData* GetSingleton()
		{
			REL::Relocation<CrosshairPickData**> singleton{ RELOCATION_ID(515446, 401585) };
			return *singleton;
		}

		// members
#ifndef SKYRIMVR
		std::uint32_t                    pad00;           // 00
		ObjectRefHandle                  target;          // 04
		ObjectRefHandle                  targetActor;     // 08
		ObjectRefHandle                  unk0C;           // 0C
		NiPoint3                         collisionPoint;  // 10
		std::uint32_t                    pad1C;           // 1C
		bhkRigidBody*                    targetCollider;  // 20
		NiPointer<bhkSimpleShapePhantom> pickCollider;    // 28
		std::uint32_t                    collisionInfo;   // 30
		std::uint8_t                     unk34;           // 34
		std::uint8_t                     unk35;           // 35
		std::uint16_t                    unk36;           // 36
#else
		std::uint32_t                    pad00;                               // 00
		ObjectRefHandle                  target[VRGrabHand::kTotal];          // 04
		ObjectRefHandle                  targetActor[VRGrabHand::kTotal];     // 10
		ObjectRefHandle                  unk1C[VRGrabHand::kTotal];           // 1C
		NiPoint3                         collisionPoint[VRGrabHand::kTotal];  // 28
		std::uint32_t                    pad4C;                               // 4C
		std::uint64_t                    unk50[VRGrabHand::kTotal];           // 50
		float                            unk68;                               // 68
		float                            unk6C;                               // 68
		std::uint32_t                    unk70;                               // 70
		std::uint32_t                    unk74;                               // 74
		NiPointer<bhkSimpleShapePhantom> unk78;                               // 78
		std::uint32_t                    unk80;                               // 80
		std::uint16_t                    unk84;                               // 84
		std::byte                        unk86;                               // 86
#endif
	};
#ifndef SKYRIMVR
	static_assert(sizeof(CrosshairPickData) == 0x38);
#else
	static_assert(sizeof(CrosshairPickData) == 0x88);
#endif
}
