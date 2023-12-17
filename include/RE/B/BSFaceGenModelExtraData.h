#pragma once

#include "RE/B/BSFaceGenManager.h"
#include "RE/B/BSFixedString.h"

namespace RE
{
	class BSFaceGenModelExtraData : public NiExtraData
	{
	public:
		BSFaceGenModel* m_model;   // 18
		BSFixedString   bones[8];  // 20
	private:
		KEEP_FOR_RE()
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BSFaceGenModelExtraData) == 0x60);
#endif
}
