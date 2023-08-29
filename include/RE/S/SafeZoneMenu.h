#pragma once

#include "RE/I/IMenu.h"

namespace RE
{
	// menuDepth = 11
	// flags = kNone
	// context = kNone
	class SafeZoneMenu : public IMenu
	{
	public:
		inline static constexpr auto      RTTI = RTTI_SafeZoneMenu;
		constexpr static std::string_view MENU_NAME = "SafeZoneMenu";

		~SafeZoneMenu() override;  // 00
    private:
         KEEP_FOR_RE()
    };
#ifndef SKYRIMVR
	static_assert(sizeof(SafeZoneMenu) == 0x30);
#else
	static_assert(sizeof(SafeZoneMenu) == 0x40);
#endif
}
