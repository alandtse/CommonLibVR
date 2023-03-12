#pragma once

namespace RE
{
#ifdef SKYRIMVR
	struct VROverlayChange
	{
	public:
		// members
		std::byte unk00; // 00
	};
	static_assert(sizeof(VROverlayChange) == 0x1);
#endif
}
