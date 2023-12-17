#pragma once

#ifdef SKYRIMVR

namespace RE
{
	enum class ControllerDeviceHand  // Not sure on this one, enum needs more RE
	{
		kLeft = 0,
		kRight = 1,

		kNeither = 3
	};

	class BSTrackedControllerDevice :
		public BSInputDevice
	{
	public:
		// members
		std::uint64_t            unk70;               // 70
		ControllerDeviceHand     hand;                // 78
		vr::TrackedDeviceIndex_t trackedDeviceIndex;  // 7C
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(BSTrackedControllerDevice) == 0x80);
}
#endif
