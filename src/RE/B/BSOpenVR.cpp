#pragma once

#include "RE/B/BSOpenVR.h"

namespace RE
{
#ifdef SKYRIMVR
	BSOpenVR* BSOpenVR::GetSingleton()
	{
		REL::Relocation<BSOpenVR**> singleton{ Offset::BSOpenVR::Singleton };
		return *singleton;
	}
#endif
}
