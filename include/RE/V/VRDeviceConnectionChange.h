#pragma once

namespace RE
{
#ifdef SKYRIMVR
	struct VRDeviceConnectionChange
	{
	public:
		// members
		bool          unk00;
		std::uint32_t unk04;
	};
	static_assert(sizeof(VRDeviceConnectionChange) == 0x8);
#endif
}
