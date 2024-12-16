#pragma once

#include "RE/I/IMenu.h"
#include "RE/I/IMessageBoxCallback.h"

namespace RE
{
	// menuDepth = 3
	// flags = kPausesGame | kModal | kDisablePauseMenu
	// kUsesCursor is gamepad is disabled
	// context = kMenuMode
	class LevelUpMenu : public IMenu
	{
	public:
		inline static constexpr auto      RTTI = RTTI_LevelUpMenu;
		constexpr static std::string_view MENU_NAME = "LevelUp Menu";

		class ConfirmLevelUpAttributeCallback : public IMessageBoxCallback
		{
		public:
#ifndef SKYRIMVR
			inline static constexpr auto RTTI = RTTI___ConfirmLevelUpAttributeCallback;
#endif
			inline static constexpr auto VTABLE = VTABLE___ConfirmLevelUpAttributeCallback;

			~ConfirmLevelUpAttributeCallback() override;  // 00

			// override (IMessageBoxCallback)
			void Run(Message a_msg) override;  // 01

			// members
			LevelUpMenu*   menu;        // 10
			RE::ActorValue actorValue;  // 18
		};
		static_assert(sizeof(ConfirmLevelUpAttributeCallback) == 0x20);

		~LevelUpMenu() override;  // 00

		// override (IMenu)
		void Accept(CallbackProcessor* a_cbReg) override;  // 01

		// members
		bool          playerLeveled;  // 30
		std::uint8_t  pad31;          // 31
		std::uint16_t pad32;          // 32
		std::uint32_t pad34;          // 34
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(LevelUpMenu) == 0x38);
#else
	static_assert(sizeof(LevelUpMenu) == 0x48);
#endif
}
