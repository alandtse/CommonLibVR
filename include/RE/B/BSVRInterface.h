#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
#ifdef SKYRIMVR
	struct VROverlayChange;
	struct VRDeviceConnetionChange;
	struct VRResetHMDHeight;

	class BSVRInterface :
		public BSTEventSource<VROverlayChange>,          // 08
		public BSTEventSource<VRDeviceConnetionChange>,  // 60
		public BSTEventSource<VRResetHMDHeight>          // B8
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSVRInterface;

		// add
		virtual void Unk_00(void);  // 00
		virtual void Unk_01(void);  // 01
		virtual void Unk_02(void);  // 02
		virtual void Unk_03(void);  // 03
		virtual void Unk_04(void);  // 04
		virtual void Unk_05(void);  // 05
		virtual void Unk_06(void);  // 06
		virtual void Unk_07(void);  // 07
		virtual void Unk_08(void);  // 08
		virtual void Unk_09(void);  // 09
		virtual void Unk_0A(void);  // 0A
		virtual void Unk_0B(void);  // 0B
		virtual void Unk_0C(void);  // 0C
		virtual void Unk_0D(void);  // 0D
		virtual void Unk_0E(void);  // 0E
		virtual void Unk_0F(void);  // 0F
		virtual void Unk_10(void);  // 10
		virtual void Unk_11(void);  // 11
		virtual void Unk_12(void);  // 12
		virtual void Unk_13(void);  // 13
		virtual void Unk_14(void);  // 14
		virtual void Unk_15(void);  // 15
		virtual void Unk_16(void);  // 16
		virtual void Unk_17(void);  // 17

		// members
		std::uint8_t  unk110;     // 110
		std::uint64_t unk118;     // 118
		std::uint64_t unk120;     // 120
		std::uint64_t unk128[2];  // 128
		std::uint64_t unk138[2];  // 138
		std::uint32_t unk148;     // 148
		std::uint32_t unk14C[4];  // 14C
		std::uint32_t unk15C[4];  // 15C
		std::uint32_t unk16C[4];  // 16C
		std::uint32_t unk17C;     // 17C
		std::uint64_t unk180[2];  // 180
		std::uint64_t unk190;     // 190
		std::uint64_t unk198;     // 198
		std::uint64_t unk1A0;     // 1A0
		std::uint64_t unk1A8;     // 1A8
		std::uint64_t unk1B0;     // 1B0
		std::uint64_t unk1B8;     // 1B8
		std::uint64_t unk1C0;     // 1C0
		std::uint64_t unk1C8;     // 1C8
		std::uint64_t unk1D0;     // 1D0
		std::uint64_t unk1D8;     // 1D8
		std::uint64_t unk1E0;     // 1E0
		std::uint64_t unk1E8;     // 1E8
		std::uint64_t unk1F0;     // 1F0
		std::uint64_t unk1F8;     // 1F8
		std::uint64_t unk200;     // 200
	};
	static_assert(sizeof(BSVRInterface) == 0x208);
#endif
}
