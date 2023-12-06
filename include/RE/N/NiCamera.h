#pragma once

#include "RE/N/NiAVObject.h"
#include "RE/N/NiFrustum.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiRect.h"

namespace RE
{
	class NiCamera : public NiAVObject
	{
	public:
		inline static constexpr auto RTTI = RTTI_NiCamera;
		inline static constexpr auto Ni_RTTI = NiRTTI_NiCamera;

		~NiCamera() override;  // 00

		// override (NiAVObject)
		const NiRTTI* GetRTTI() const override;                           // 02
		NiObject*     CreateClone(NiCloningProcess& a_cloning) override;  // 17 - { return this; }
		void          LoadBinary(NiStream& a_stream) override;            // 18 - { return; }
		void          LinkObject(NiStream& a_stream) override;            // 19 - { return; }
		bool          RegisterStreamables(NiStream& a_stream) override;   // 1A
		void          SaveBinary(NiStream& a_stream) override;            // 1B - { return; }
		bool          IsEqual(NiObject* a_object) override;               // 1C
		void          UpdateWorldBound() override;                        // 2F - { return; }
		void          UpdateWorldData(NiUpdateData* a_data) override;     // 30

		static bool BoundInFrustum(const NiBound& a_bound, NiCamera* a_camera);
		static bool NodeInFrustum(NiAVObject* a_node, NiCamera* a_camera);
		static bool PointInFrustum(const NiPoint3& a_point, NiCamera* a_camera, float a_radius);

		static bool WorldPtToScreenPt3(const float a_matrix[4][4], const NiRect<float>& a_port, const NiPoint3& a_point, float& a_xOut, float& a_yOut, float& a_zOut, float a_zeroTolerance);

		// members
#ifndef SKYRIMVR
		float         worldToCam[4][4];  // 110
		NiFrustum     viewFrustum;       // 150
		float         minNearPlaneDist;  // 16C
		float         maxFarNearRatio;   // 170
		NiRect<float> port;              // 174
		float         lodAdjust;         // 184
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(NiCamera) == 0x188);
#else
		float           worldToCam[4][4];  // 138
		NiFrustum*      viewFrustumPtr;    // 178
		BSTArray<void*> unk180;            // 180
		BSTArray<void*> unk198;            // 198
		BSTArray<void*> unk1B0;            // 1B0
		std::uint32_t   unk1C8;            // 1C8
		NiFrustum       viewFrustum;       // 1CC
		float           minNearPlaneDist;  // 1E8
		float           maxFarNearRatio;   // 1EC
		NiRect<float>   port;              // 1F0
		float           lodAdjust;         // 200
	private:
		KEEP_FOR_RE()
	};
	static_assert(sizeof(NiCamera) == 0x208);
#endif

}
