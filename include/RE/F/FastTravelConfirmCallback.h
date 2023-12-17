#pragma once

#include "RE/I/IMessageBoxCallback.h"

namespace RE
{
	class MapMenu;

	class FastTravelConfirmCallback : public IMessageBoxCallback
	{
	public:
		inline static constexpr auto RTTI = RTTI___FastTravelConfirmCallback;
		inline static constexpr auto VTABLE = VTABLE___FastTravelConfirmCallback;

		~FastTravelConfirmCallback() override;  // 00

		// override (IMessageBoxCallback)
		void Run(Message a_msg) override;  //01

		//members
		MapMenu*     mapMenu;     // 10
		std::int32_t cursorPosX;  // 18
		std::int32_t cursorPosY;  // 1C
#ifdef SKYRIMVR
		RE::NiPoint3  coords;  // 20
		std::uint16_t unk2c;   // 2c
#endif
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(FastTravelConfirmCallback) ==
#ifndef SKYRIMVR
				  0x20
#else
				  0x30
#endif
	);
}
