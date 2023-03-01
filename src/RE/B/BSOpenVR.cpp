#pragma once

#include "RE/B/BSOpenVR.h"

namespace RE
{
	BSOpenVR* BSOpenVR::GetSingleton()
	{
		REL::Relocation<BSOpenVR**> singleton{ Offset::BSOpenVR::Singleton };
		return *singleton;
	}
}
