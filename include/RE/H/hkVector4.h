#pragma once

#include "RE/H/hkSseMathTypes.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class hkVector4
	{
	public:
		hkVector4() :
			quad(_mm_set1_ps(0.0f))
		{}

		hkVector4(const float& a_x) :
			quad(_mm_set1_ps(a_x))
		{}

		hkVector4(const float& a_x, const float& a_y, const float& a_z, const float& a_w) :
			quad(_mm_setr_ps(a_x, a_y, a_z, a_w))
		{}

		hkVector4(const hkVector4& a_rhs) :
			quad(a_rhs.quad)
		{}

		hkVector4(const hkQuadReal& a_rhs) :
			quad(a_rhs)
		{}

		hkVector4(const NiPoint3& a_point) :
			quad(_mm_setr_ps(a_point.x, a_point.y, a_point.z, 0.0f))
		{}

		hkVector4& operator=(const hkVector4& a_rhs);
		hkVector4  operator+(const hkVector4& a_rhs) const;
		hkVector4  operator-(const hkVector4& a_rhs) const;
		hkVector4  operator*(const hkVector4& a_rhs) const;
		hkVector4  operator/(const hkVector4& a_rhs) const;

		[[nodiscard]] bool      IsEqual(const hkVector4& a_pt, float a_epsilon = 1e-3f) const;
		[[nodiscard]] hkVector4 Cross(const hkVector4& a_pt) const;
		[[nodiscard]] float     Dot3(const hkVector4& a_pt) const;
		[[nodiscard]] float     Dot4(const hkVector4& a_pt) const;
		[[nodiscard]] float     GetDistance3(const hkVector4& a_pt) const noexcept;
		[[nodiscard]] float     GetSquaredDistance3(const hkVector4& a_pt) const noexcept;
		[[nodiscard]] float     Length3() const;
		[[nodiscard]] float     SqrLength3() const;
		[[nodiscard]] float     Length4() const;
		[[nodiscard]] float     SqrLength4() const;

		// members
		hkQuadReal quad{};  // 00
	};
	static_assert(sizeof(hkVector4) == 0x10);
}
