#pragma once

#include "RE/B/BSIInputDevice.h"

namespace RE
{
	class BSPCGamepadDeviceDelegate;

	class BSPCGamepadDeviceHandler : public BSIInputDevice
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSPCGamepadDeviceHandler;
		inline static constexpr auto VTABLE = VTABLE_BSPCGamepadDeviceHandler;

		~BSPCGamepadDeviceHandler() override;  // 00

		// override (BSIInputDevice)
		void          Initialize() override;                                                         // 01
		void          Process(float a_unk1) override;                                                // 02
		void          Release() override;                                                            // 03
		bool          GetButtonNameFromID(std::int32_t a_id, BSFixedString& a_buttonName) override;  // 04
		std::uint32_t GetMappingKey(BSFixedString a_mapping) override;                               // 05
		bool          GetKeyCodeFromID(std::int32_t a_id, std::uint32_t& a_keyCode) override;        // 06		bool          IsEnabled() const override;                                                 // 07 - { return currentPCGamePadDelegate != 0; }
		void          Reset() override;                                                              // 08

		void InitializeDelegate();  // called by Initialize() and Process() to initialize the delegate

		// members
#ifdef SKYRIMVR
		std::uint64_t unk08;  // 08
#endif
		BSPCGamepadDeviceDelegate* currentPCGamePadDelegate;  // 08, 10 in VR
	protected:
		friend class BSInputDeviceFactory;
		BSPCGamepadDeviceHandler();

	private:
		KEEP_FOR_RE()
	};
#ifdef SKYRIMVR
	static_assert(sizeof(BSPCGamepadDeviceHandler) == 0x18);
#else
	static_assert(sizeof(BSPCGamepadDeviceHandler) == 0x10);
#endif

}
