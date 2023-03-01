#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BSVRInterface.h"
#include "RE/N/NiNode.h"

namespace RE
{
#ifdef SKYRIMVR
	class BSOpenVR : public BSVRInterface
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSOpenVR;

		struct Unk238
		{
			// members
			std::uint64_t unk00;  // 00
			std::uint64_t unk08;  // 08
			std::uint64_t unk10;  // 10
			std::uint64_t unk18;  // 18
			std::uint64_t unk20;  // 20
			std::uint64_t unk28;  // 28
			std::uint64_t unk30;  // 30
			std::uint64_t unk38;  // 38
		};
		static_assert(sizeof(Unk238) == 0x40);

		// override
		void Unk_00(void) override;  // 00
		void Unk_01(void) override;  // 01
		void Unk_02(void) override;  // 02
		void Unk_03(void) override;  // 03
		void Unk_04(void) override;  // 04
		void Unk_05(void) override;  // 05
		void Unk_06(void) override;  // 06
		void Unk_07(void) override;  // 07
		void Unk_08(void) override;  // 08
		void Unk_09(void) override;  // 09
		void Unk_0A(void) override;  // 0A
		void Unk_0B(void) override;  // 0B
		void Unk_0C(void) override;  // 0C
		void Unk_0D(void) override;  // 0D
		void Unk_0E(void) override;  // 0E
		void Unk_0F(void) override;  // 0F
		void Unk_10(void) override;  // 10
		void Unk_11(void) override;  // 11
		void Unk_12(void) override;  // 12
		void Unk_13(void) override;  // 13
		void Unk_14(void) override;  // 14
		void Unk_15(void) override;  // 15
		void Unk_16(void) override;  // 16
		void Unk_17(void) override;  // 17

		static BSOpenVR* GetSingleton();

		// members
		std::uint64_t    unk208;     // 208 - Gets set to HookVRSystem, outside of SkyrimVR
		std::uint64_t    unk210;     // 210
		std::uint64_t    unk218;     // 218
		std::uint64_t    unk220;     // 220
		std::uint64_t    unk228;     // 228
		NiSourceTexture* unk230;     // 230
		Unk238           unk238[4];  // 238
		std::uint64_t    unk338;     // 380
		std::uint64_t    unk340[9];  // 340
		NiNode*          unk388;     // 388
		NiNode*          unk390;     // 390
		std::uint64_t    unk398;     // 398
		std::uint64_t    unk3A0;     // 3A0
		std::uint64_t    unk3A8;     // 3A8
		std::uint64_t    unk3B0;     // 3B0
		std::uint64_t    unk3B8;     // 3B8
		std::uint64_t    unk3C0;     // 3C0
		std::uint64_t    unk3C8;     // 3C8
		std::uint64_t    unk3D0;     // 3D0
		std::uint64_t    unk3D8;     // 3D8
		std::uint64_t    unk3E0;     // 3E0
		std::uint64_t    unk3E8;     // 3E8
		std::uint64_t    unk3F0;     // 3F0
		std::uint64_t    unk3F8;     // 3F8
		std::uint64_t    unk400;     // 400
	};
	static_assert(sizeof(BSOpenVR) == 0x408);
#endif
}
