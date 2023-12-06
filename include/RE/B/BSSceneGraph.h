#pragma once

#include "RE/N/NiNode.h"

namespace RE
{
	class NiCamera;

	class BSSceneGraph : public NiNode
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSSceneGraph;
		inline static constexpr auto Ni_RTTI = NiRTTI_BSSceneGraph;

		~BSSceneGraph() override;  // 00

		// override (NiNode)
		const NiRTTI* GetRTTI() const override;  // 02

		// add
		virtual float GetFarDistance();                                    // 3E
		virtual float GetNearDistance();                                   // 3F - { return fNearDistance:Display; }
		virtual void  SetViewDistanceBasedOnFrameRate(float a_frameRate);  // 40

		// members
		NiPointer<NiCamera> camera;     // 128
		std::uint64_t       unk130;     // 130 - 0x18
		bool                unk138;     // 138
		std::uint8_t        pad139;     // 139
		std::uint16_t       pad13A;     // 13A
		float               cameraFOV;  // 13C
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BSSceneGraph) == 0x140);
#else
	static_assert(sizeof(BSSceneGraph) == 0x168);
#endif
}
