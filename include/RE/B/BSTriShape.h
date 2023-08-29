#pragma once

#include "RE/B/BSGeometry.h"

namespace RE
{
	class BSTriShape : public BSGeometry
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSTriShape;
		inline static constexpr auto Ni_RTTI = NiRTTI_BSTriShape;

		~BSTriShape() override;  // 00

		// override (BSGeometry)
		const NiRTTI* GetRTTI() const override;                           // 02
		BSTriShape*   AsTriShape() override;                              // 09
		NiObject*     CreateClone(NiCloningProcess& a_cloning) override;  // 17
		void          LoadBinary(NiStream& a_stream) override;            // 18
		void          LinkObject(NiStream& a_stream) override;            // 19 - { BSGeometry::LinkObject(a_stream); }
		bool          RegisterStreamables(NiStream& a_stream) override;   // 1A - { return BSGeometry::RegisterStreamables(a_stream); }
		void          SaveBinary(NiStream& a_stream) override;            // 1B
		bool          IsEqual(NiObject* a_object) override;               // 1C - { return false; }

		// members
		std::uint16_t triangleCount;  // 158 VR 198
		std::uint16_t vertexCount;    // 15A VR 19A
		std::uint32_t pad15C;         // 15C VR 19C
    private:
         KEEP_FOR_RE()
    };
#ifndef SKYRIMVR
	static_assert(sizeof(BSTriShape) == 0x160);
#else
	static_assert(sizeof(BSTriShape) == 0x1A0);
#endif
}
