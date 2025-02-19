#pragma once

#include "RE/B/BSShadowLight.h"

namespace RE
{
	class BSShadowFrustumLight : public BSShadowLight
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSShadowFrustumLight;
		inline static constexpr auto VTABLE = VTABLE_BSShadowFrustumLight;

		~BSShadowFrustumLight() override;  // 00

		// override (BSShadowLight)
		void Unk_04() override;                                                                                                                       // 04
		bool GetIsFrustumLight() override;                                                                                                            // 05
		void Accumulate(std::uint32_t& a_globalShadowLightCount, std::uint32_t& a_shadowMaskChannel, NiPointer<NiAVObject> a_cullingScene) override;  // 09
		void Render() override;                                                                                                                       // 0A
		bool UpdateCamera(const NiCamera* a_viewCamera) override;                                                                                     // 10

		// members
		float xFOV;          // 560, VR 5C0
		float yFOV;          // 564, VR 5C4
		float falloff;       // 568, VR 5C8
		float nearDistance;  // 56C, VR 5CC
		float farDistance;   // 570, VR 5D0
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BSShadowFrustumLight) == 0x578);
#else
	static_assert(sizeof(BSShadowFrustumLight) == 0x5D8);
#endif
}
