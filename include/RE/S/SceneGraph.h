#pragma once

#include "RE/B/BSSceneGraph.h"

namespace RE
{
	class SceneGraph : public BSSceneGraph
	{
	public:
		inline static constexpr auto RTTI = RTTI_SceneGraph;
		inline static constexpr auto Ni_RTTI = NiRTTI_SceneGraph;

		~SceneGraph() override;  // 00

		// override (BSSceneGraph)
		const NiRTTI* GetRTTI() const override;    // 02
		float         GetFarDistance() override;   // 3E
		float         GetNearDistance() override;  // 3F

		// members
		float         customNearDistance;  // 140
		float         customFarDistance;   // 144
		bool          useCustomNear;       // 148
		bool          useCustomFar;        // 149
		std::uint16_t pad14A;              // 14A
		std::uint32_t pad14C;              // 14C
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(SceneGraph) == 0x150);
#else
	static_assert(sizeof(SceneGraph) == 0x178);
#endif
}
