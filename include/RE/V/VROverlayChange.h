#pragma once

namespace RE
{
#ifdef SKYRIMVR
	struct VROverlayChange
	{
	public:
		// members
		std::byte unk00;  // 00
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(VROverlayChange) == 0x1);
#endif
}
