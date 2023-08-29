#pragma once

#include "RE/I/IDEvent.h"

namespace RE
{
	class VRWandEvent : public IDEvent
	{
	public:
		std::int32_t  unkVR28;  // 28 - same as BSOpenVRControllerDevice+0x124
		std::uint32_t padVR2C;  // 2C
    private:
         KEEP_FOR_RE()
    };
	static_assert(sizeof(VRWandEvent) == 0x30);
}
