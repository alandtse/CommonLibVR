#pragma once

#include "RE/B/BSTArray.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkpAabbPhantom.h"
#include "RE/H/hkpPhantomCallbackShape.h"

namespace RE
{
	class bhkRigidBody;
	class hkpCollidable;
	class TESWaterForm;

	namespace BGSWaterCollisionManager
	{
		class BGSWaterUpdateI
		{
		public:
			enum Flag : std::uint32_t
			{
				kNone = 0,
				kInert = 1 << 0,
			};

			inline static constexpr auto RTTI = RTTI_BGSWaterCollisionManager__BGSWaterUpdateI;
			inline static constexpr auto VTABLE = VTABLE_BGSWaterCollisionManager__BGSWaterUpdateI;

			void Link()
			{
				using func_t = decltype(&BGSWaterUpdateI::Link);
				REL::Relocation<func_t> func{ RELOCATION_ID(31307, 32091) };
				func(this);
			}

			void Unlink()
			{
				using func_t = decltype(&BGSWaterUpdateI::Unlink);
				REL::Relocation<func_t> func{ RELOCATION_ID(31303, 32087) };
				func(this);
			}

			// a_disabled removes this water volume from collision/update processing
			void SetDisabled(bool a_disabled)
			{
				using func_t = decltype(&BGSWaterUpdateI::SetDisabled);
				REL::Relocation<func_t> func{ RELOCATION_ID(31302, 32086) };
				func(this, a_disabled);
			}

			void SetContext(void* a_context)
			{
				using func_t = decltype(&BGSWaterUpdateI::SetContext);
				REL::Relocation<func_t> func{ RELOCATION_ID(31301, 0) };
				func(this, a_context);
			}

			void UpdateCameraInWater()
			{
				using func_t = decltype(&BGSWaterUpdateI::UpdateCameraInWater);
				REL::Relocation<func_t> func{ RELOCATION_ID(31306, 32090) };
				func(this);
			}

			bool AddOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&BGSWaterUpdateI::AddOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31311, 32095) };
				return func(this, a_collidable);
			}

			bool RemoveOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&BGSWaterUpdateI::RemoveOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31312, 32096) };
				return func(this, a_collidable);
			}

			// members
			void*                             vftable;        // 00
			REX::EnumSet<Flag, std::uint32_t> flags;          // 08
			std::uint32_t                     pad0C;          // 0C
			BSTArray<void*>                   trackedBodies;  // 10
			BGSWaterUpdateI*                  next;           // 28
			TESWaterForm*                     waterType;      // 30
			void*                             context;        // 38
			bhkRigidBody*                     body;           // 40
		};
		static_assert(sizeof(BGSWaterUpdateI) == 0x48);

		class bhkPlaceableWater : public hkpPhantomCallbackShape  // 00
		{
		public:
			inline static constexpr auto RTTI = RTTI_BGSWaterCollisionManager__bhkPlaceableWater;
			inline static constexpr auto VTABLE = VTABLE_BGSWaterCollisionManager__bhkPlaceableWater;

			void GetTransform(hkTransform& a_outTransform)
			{
				using func_t = decltype(&bhkPlaceableWater::GetTransform);
				REL::Relocation<func_t> func{ RELOCATION_ID(31316, 32100) };
				func(this, a_outTransform);
			}

			[[nodiscard]] bool IsActive()
			{
				using func_t = decltype(&bhkPlaceableWater::IsActive);
				REL::Relocation<func_t> func{ RELOCATION_ID(31317, 32101) };
				return func(this);
			}

			void Update()
			{
				using func_t = decltype(&bhkPlaceableWater::Update);
				REL::Relocation<func_t> func{ RELOCATION_ID(31319, 0) };
				func(this);
			}

			// removes then immediately re-adds every tracked collidable
			void RefreshOverlaps()
			{
				using func_t = decltype(&bhkPlaceableWater::RefreshOverlaps);
				REL::Relocation<func_t> func{ RELOCATION_ID(31318, 0) };
				func(this);
			}

			// calls hkpWorld::getPenetrations and forwards results into Add/RemoveOverlappingCollidable
			void CheckPenetrations()
			{
				using func_t = decltype(&bhkPlaceableWater::CheckPenetrations);
				REL::Relocation<func_t> func{ RELOCATION_ID(31309, 0) };
				func(this);
			}

			void NotifyCollidableEntered(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bhkPlaceableWater::NotifyCollidableEntered);
				REL::Relocation<func_t> func{ RELOCATION_ID(31313, 0) };
				func(this, a_collidable);
			}

			void NotifyCollidableExited(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bhkPlaceableWater::NotifyCollidableExited);
				REL::Relocation<func_t> func{ RELOCATION_ID(31314, 0) };
				func(this, a_collidable);
			}

			// members
			BGSWaterUpdateI updateI;     // 20
			std::uint32_t   usageCount;  // 68
			std::uint32_t   pad6C;       // 6C
		};
		static_assert(sizeof(bhkPlaceableWater) == 0x70);

		// trailing size beyond hkpPhantomCallbackShape (0x20) + updateI (0x48) not independently confirmed
		class bhkWaterfall : public hkpPhantomCallbackShape  // 00
		{
		public:
			inline static constexpr auto RTTI = RTTI_BGSWaterCollisionManager__bhkWaterfall;
			inline static constexpr auto VTABLE = VTABLE_BGSWaterCollisionManager__bhkWaterfall;

			void GetTransform(hkTransform& a_outTransform)
			{
				using func_t = decltype(&bhkWaterfall::GetTransform);
				REL::Relocation<func_t> func{ RELOCATION_ID(19617, 20019) };
				func(this, a_outTransform);
			}

			[[nodiscard]] bool IsActive()
			{
				using func_t = decltype(&bhkWaterfall::IsActive);
				REL::Relocation<func_t> func{ RELOCATION_ID(31323, 32107) };
				return func(this);
			}

			void Update()
			{
				using func_t = decltype(&bhkWaterfall::Update);
				REL::Relocation<func_t> func{ RELOCATION_ID(31324, 0) };
				func(this);
			}

			void AddOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bhkWaterfall::AddOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31321, 0) };
				func(this, a_collidable);
			}

			void RemoveOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bhkWaterfall::RemoveOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31322, 0) };
				func(this, a_collidable);
			}

			// members
			BGSWaterUpdateI updateI;  // 20
		};

		class bshkAutoWater : public hkpAabbPhantom  // 00
		{
		public:
			inline static constexpr auto RTTI = RTTI_BGSWaterCollisionManager__bshkAutoWater;
			inline static constexpr auto VTABLE = VTABLE_BGSWaterCollisionManager__bshkAutoWater;

			void GetTransform(hkTransform& a_outTransform)
			{
				using func_t = decltype(&bshkAutoWater::GetTransform);
				REL::Relocation<func_t> func{ RELOCATION_ID(31341, 32126) };
				func(this, a_outTransform);
			}

			[[nodiscard]] bool IsActive()
			{
				using func_t = decltype(&bshkAutoWater::IsActive);
				REL::Relocation<func_t> func{ RELOCATION_ID(31342, 32127) };
				return func(this);
			}

			void Update()
			{
				using func_t = decltype(&bshkAutoWater::Update);
				REL::Relocation<func_t> func{ RELOCATION_ID(31343, 0) };
				func(this);
			}

			void AddOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bshkAutoWater::AddOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31339, 32124) };
				func(this, a_collidable);
			}

			void RemoveOverlappingCollidable(hkpCollidable* a_collidable)
			{
				using func_t = decltype(&bshkAutoWater::RemoveOverlappingCollidable);
				REL::Relocation<func_t> func{ RELOCATION_ID(31340, 32125) };
				func(this, a_collidable);
			}

			// members
			BGSWaterUpdateI updateI;  // 130
		};
		// sizeof rounds up to 0x180 (16-byte struct alignment inherited from hkpAabbPhantom's
		// SIMD members), even though updateI itself starts at the expected 0x130 with no gap.
		static_assert(offsetof(bshkAutoWater, updateI) == 0x130);
		static_assert(sizeof(bshkAutoWater) == 0x180);
	}
}
