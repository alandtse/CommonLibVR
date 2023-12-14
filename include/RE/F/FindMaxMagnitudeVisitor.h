#pragma once

#include "RE/M/MagicTarget.h"

namespace RE
{
    class ActiveEffect;

    class FindMaxMagnitudeVisitor :
        public MagicTarget::ForEachActiveEffectVisitor
    {
    public:
        inline static constexpr auto RTTI = RTTI_FindMaxMagnitudeVisitor;
        inline static constexpr auto VTABLE = VTABLE_FindMaxMagnitudeVisitor;

        virtual ~FindMaxMagnitudeVisitor(){};  // 00

        // add
        virtual BSContainer::ForEachResult Accept(ActiveEffect* a_effect) override;  // 01

		// Member variables
		ActiveEffect* activeEffect{ nullptr }; // 8
		float         maxMagnitude{ -1.0F }; // 10
    };
    static_assert(sizeof(FindMaxMagnitudeVisitor) == 0x18);
    
    
} // namespace RE
