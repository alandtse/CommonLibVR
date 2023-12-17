#pragma once

#include "RE/B/BSTSingleton.h"

namespace RE
{
	class MenuCursor : public BSTSingletonSDM<MenuCursor>
	{
	public:
		static MenuCursor* GetSingleton();

		void SetCursorVisibility(bool a_visible);

		// members
		std::uint8_t  pad01;  // 01
		std::uint16_t pad02;  // 02
#ifdef SKYRIMVR
		float unkVR04;
#endif
		float        cursorXPosition;     // 04
		float        cursorYPosition;     // 08
		float        cursorXMin;          // 0C
		float        cursorYMin;          // 10
		float        cursorXMax;          // 14
		float        cursorYMax;          // 18
		float        cursorSensitivity;   // 1C
		float        unk20;               // 20
		float        unk24;               // 24
		float        logicalWidth;        // 28
		std::int32_t cursorDisplayCount;  // 2C
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(MenuCursor) == 0x30);
#else
	static_assert(sizeof(MenuCursor) == 0x34);
#endif
}
