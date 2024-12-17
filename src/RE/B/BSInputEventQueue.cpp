#include "RE/B/BSInputEventQueue.h"

namespace RE
{
	BSInputEventQueue* BSInputEventQueue::GetSingleton()
	{
		static REL::Relocation<BSInputEventQueue**> singleton{ RELOCATION_ID(520856, 407374) };
		return *singleton;
	}

	template <>
	ButtonEvent* BSInputEventQueue::GetCachedEvent<ButtonEvent>()
	{
		if (buttonEventCount < MAX_BUTTON_EVENTS) {
			return &buttonEvents[buttonEventCount];
		}

		return nullptr;
	}

	template <>
	CharEvent* BSInputEventQueue::GetCachedEvent<CharEvent>()
	{
		if (charEventCount < MAX_CHAR_EVENTS) {
			return &charEvents[charEventCount];
		}

		return nullptr;
	}

	template <>
	MouseMoveEvent* BSInputEventQueue::GetCachedEvent<MouseMoveEvent>()
	{
		if (mouseEventCount < MAX_MOUSE_EVENTS) {
			return &mouseEvents[mouseEventCount];
		}

		return nullptr;
	}

	template <>
	ThumbstickEvent* BSInputEventQueue::GetCachedEvent<ThumbstickEvent>()
	{
		if (thumbstickEventCount < MAX_THUMBSTICK_EVENTS) {
			return &thumbstickEvents[thumbstickEventCount];
		}

		return nullptr;
	}

	template <>
	DeviceConnectEvent* BSInputEventQueue::GetCachedEvent<DeviceConnectEvent>()
	{
		if (connectEventCount < MAX_CONNECT_EVENTS) {
			return &connectEvents[connectEventCount];
		}

		return nullptr;
	}

#ifdef SKYRIMVR
	template <>
	VrWandTouchpadPositionEvent* BSInputEventQueue::GetCachedEvent<VrWandTouchpadPositionEvent>()
	{
		if (vrTouchpadPositionEventCount < MAX_VR_TOUCHPAD_POSITION_EVENTS) {
			return &vrTouchpadPositionEvents[vrTouchpadPositionEventCount];
		}

		return nullptr;
	}

	template <>
	VrWandTouchpadSwipeEvent* BSInputEventQueue::GetCachedEvent<VrWandTouchpadSwipeEvent>()
	{
		if (vrTouchpadSwipeEventCount < MAX_VR_TOUCHPAD_SWIPE_EVENTS) {
			return &vrTouchpadSwipeEvents[vrTouchpadSwipeEventCount];
		}

		return nullptr;
	}
#endif

	template <>
	void BSInputEventQueue::AdvanceCount<ButtonEvent>()
	{
		++buttonEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<CharEvent>()
	{
		++charEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<MouseMoveEvent>()
	{
		++mouseEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<ThumbstickEvent>()
	{
		++thumbstickEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<DeviceConnectEvent>()
	{
		++connectEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<KinectEvent>()
	{
		++kinectEventCount;
	}

#ifdef SKYRIMVR
	template <>
	void BSInputEventQueue::AdvanceCount<VrWandTouchpadPositionEvent>()
	{
		++vrTouchpadPositionEventCount;
	}

	template <>
	void BSInputEventQueue::AdvanceCount<VrWandTouchpadSwipeEvent>()
	{
		++vrTouchpadSwipeEventCount;
	}
#endif

	void BSInputEventQueue::PushOntoInputQueue(InputEvent* a_event)
	{
		if (!queueHead) {
			queueHead = a_event;
		}

		if (queueTail) {
			queueTail->next = a_event;
		}

		queueTail = a_event;
		queueTail->next = nullptr;
	}

	void BSInputEventQueue::ClearInputQueue()
	{
		kinectEventCount = 0;
		connectEventCount = 0;
		thumbstickEventCount = 0;
		mouseEventCount = 0;
		charEventCount = 0;
		buttonEventCount = 0;
#ifdef SKYRIMVR
		vrTouchpadSwipeEventCount = 0;
		vrTouchpadPositionEventCount = 0;
		unkVR01C = 0;
#endif
		queueTail = nullptr;
		queueHead = nullptr;
	}
}
