#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class BSLeafAnimNode;
	class BSTreeNode;

	class BSFadeNode : public NiNode
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSFadeNode;
		inline static constexpr auto Ni_RTTI = NiRTTI_BSFadeNode;
		inline static constexpr auto VTABLE = VTABLE_BSFadeNode;

		~BSFadeNode() override;  // 00

		// override (NiNode)
		const NiRTTI* GetRTTI() const override;                                                         // 02
		BSFadeNode*   AsFadeNode() override;                                                            // 05 - { return this; }
		NiObject*     CreateClone(NiCloningProcess& a_cloning) override;                                // 17
		void          LoadBinary(NiStream& a_stream) override;                                          // 18
		void          LinkObject(NiStream& a_stream) override;                                          // 19
		bool          RegisterStreamables(NiStream& a_stream) override;                                 // 1A
		void          SaveBinary(NiStream& a_stream) override;                                          // 1B
		bool          IsEqual(NiObject* a_object) override;                                             // 1C
		void          UpdateSelectedDownwardPass(NiUpdateData& a_data, std::uint32_t a_arg2) override;  // 2D
		void          OnVisible(NiCullingProcess& a_process) override;                                  // 34

		// add
		virtual BSTreeNode*     AsTreeNode();      // 3E - { return 0; }
		virtual BSLeafAnimNode* AsLeafAnimNode();  // 3F - { return 0; }

		// members
#ifndef SKYRIMVR
		float         unk128;       // 128
		float         unk12C;       // 12C
		float         currentFade;  // 130
		std::uint32_t unk134;       // 134
		std::uint32_t unk138;       // 138
		std::uint32_t unk13C;       // 13C
		float         unk140;       // 140
		std::uint32_t unk144;       // 144
		std::uint32_t unk148;       // 148
		float         unk14C;       // 14C
		std::uint16_t unk150;       // 150
		std::uint8_t  unk152;       // 152
		std::uint8_t  unk153;       // 153
		std::uint8_t  unk154;       // 154
		std::uint8_t  unk155;       // 155
		std::uint16_t unk156;       // 156
#else
		float         unk150;       // 150
		float         unk154;       // 154
		float         currentFade;  // 158
		std::uint32_t unk15C;       // 15C
		std::uint32_t unk160;       // 160
		std::uint32_t unk164;       // 164
		float         unk168;       // 168
		std::uint32_t unk16C;       // 16C
		std::uint32_t unk170;       // 170
		float         unk174;       // 174
		std::uint16_t unk176;       // 176
		std::uint8_t  unk177;       // 177
		std::uint8_t  unk178;       // 178
		std::uint8_t  unk179;       // 179
		std::int8_t   unk17A;       // 17A
		std::uint16_t unk17C;       // 17C
#endif
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BSFadeNode) == 0x158);
#else
	static_assert(sizeof(BSFadeNode) == 0x180);
#endif
}
