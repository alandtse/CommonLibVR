#pragma once

#ifdef SKYRIMVR

#	include "RE/B/BSTrackedControllerDevice.h"

namespace RE
{
	class BSOpenVRControllerDevice :
		public BSTrackedControllerDevice  // 00
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSOpenVRControllerDevice;

		struct Keys
		{
			enum Key : std::uint32_t  // Only tested with Oculus, keys are same for both controllers
			{
				kBY = 1,    // Y/B button on left/right hand respectively
				kGrip = 2,  // Grip button
				kXA = 7,    // X/A button on left/right hand respectively
				// kJoystick = 11, // Joystick moving event
				kJoystickTrigger = 32,  // Joystick press
				kTrigger = 33           // Trigger button
			};
		};
		using Key = Keys::Key;

		// override (BSIInputDevice)
		virtual void Initialize() override;
		virtual void Process(float a_arg1) override;
		virtual void Reset() override;

		// members
		std::uint64_t unk80[0x16];  // 080
		std::uint32_t unk130;       // 130
		std::uint32_t unk134;       // 134
		std::uint32_t unk138;       // 138
		std::uint32_t unk13C;       // 13C
		std::uint32_t unk140;       // 140
		std::uint32_t unk144;       // 144
		std::uint32_t unk148;       // 148
		std::uint32_t unk14C;       // 14C
    private:
         KEEP_FOR_RE()
    };
	static_assert(sizeof(BSOpenVRControllerDevice) == 0x150);
}
#endif
