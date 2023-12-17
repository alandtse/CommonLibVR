#include "RE/T/ThumbstickEvent.h"

namespace RE
{
#ifndef SKYRIMVR
	bool ThumbstickEvent::IsLeft(void) const
	{
		return idCode == InputType::kLeftThumbstick;
	}

	bool ThumbstickEvent::IsRight(void) const
	{
		return idCode == InputType::kRightThumbstick;
	}
#else
	bool ThumbstickEvent::IsOffHand(void) const
	{
		return idCode == InputType::kLeftThumbstick;
	}

	bool ThumbstickEvent::IsMainHand(void) const
	{
		return idCode == InputType::kRightThumbstick;
	}
#endif
}
