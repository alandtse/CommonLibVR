#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/E/ExtraDataTypes.h"

namespace RE
{
	class BGSScene;

	class ExtraSceneData : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraSceneData;
		inline static constexpr auto VTABLE = VTABLE_ExtraSceneData;
		inline static constexpr auto EXTRADATATYPE = ExtraDataType::kSceneData;

		~ExtraSceneData() override;  // 00

		// override (BSExtraData)
		ExtraDataType GetType() const override;                             // 01 - { return kSceneData; }
		bool          IsNotEqual(const BSExtraData* a_rhs) const override;  // 02 - { return unk10 != a_rhs->unk10; }

		// members
		BGSScene* scene;  // 10
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(ExtraSceneData) == 0x18);
}
