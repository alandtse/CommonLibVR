#include "RE/P/PlayerCharacter.h"

#include "RE/T/TESObjectREFR.h"

namespace RE
{
	void PlayerCharacter::PlayerSkills::AdvanceLevel(bool a_addThreshold)
	{
		using func_t = decltype(&PlayerCharacter::PlayerSkills::AdvanceLevel);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::PlayerSkills::AdvanceLevel };
		return func(this, a_addThreshold);
	}

	PlayerCharacter* PlayerCharacter::GetSingleton()
	{
		REL::Relocation<NiPointer<PlayerCharacter>*> singleton{ Offset::PlayerCharacter::Singleton };
		return singleton->get();
	}

	void PlayerCharacter::ActivatePickRef()
	{
		using func_t = decltype(&PlayerCharacter::ActivatePickRef);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::ActivatePickRef };
		return func(this);
	}

	void PlayerCharacter::AddPlayerAddItemEvent(TESObject* a_object, TESForm* a_owner, TESObjectREFR* a_container, AQUIRE_TYPE a_type)
	{
		using func_t = decltype(&PlayerCharacter::AddPlayerAddItemEvent);
		REL::Relocation<func_t> func{ RELOCATION_ID(39384, 40456) };
		return func(this, a_object, a_owner, a_container, a_type);
	}

	bool PlayerCharacter::AttemptPickpocket(TESObjectREFR* a_containerRef, InventoryEntryData* a_entry, std::int32_t a_number, bool a_fromContainer)
	{
		using func_t = decltype(&PlayerCharacter::AttemptPickpocket);
		REL::Relocation<func_t> func{ RELOCATION_ID(39568, 40654) };
		return func(this, a_containerRef, a_entry, a_number, a_fromContainer);
	}

	bool PlayerCharacter::CenterOnCell(const char* a_cellName)
	{
		return CenterOnCell_Impl(a_cellName, nullptr);
	}

	bool PlayerCharacter::CenterOnCell(RE::TESObjectCELL* a_cell)
	{
		return CenterOnCell_Impl(nullptr, a_cell);
	}

	NiPointer<Actor> PlayerCharacter::GetActorDoingPlayerCommand() const
	{
		return actorDoingPlayerCommand.get();
	}

	float PlayerCharacter::GetArmorValue(InventoryEntryData* a_form)
	{
		using func_t = decltype(&PlayerCharacter::GetArmorValue);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::GetArmorValue };
		return func(this, a_form);
	}

	float PlayerCharacter::GetDamage(InventoryEntryData* a_form)
	{
		using func_t = decltype(&PlayerCharacter::GetDamage);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::GetDamage };
		return func(this, a_form);
	}

	NiPointer<TESObjectREFR> PlayerCharacter::GetGrabbedRef()
	{
#ifndef SKYRIMVR
		return grabbedObject.get();
#else
		return nullptr;  // Not sure this exists anymore in VR. will need to hunt
#endif
	}

	std::int32_t PlayerCharacter::GetItemCount(TESBoundObject* a_object)
	{
		using func_t = decltype(&PlayerCharacter::GetItemCount);
		REL::Relocation<func_t> func{ RELOCATION_ID(19275, 19701) };
		return func(this, a_object);
	}

	std::uint32_t PlayerCharacter::GetNumTints(std::uint32_t a_tintType)
	{
		using func_t = decltype(&PlayerCharacter::GetNumTints);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::GetNumTints };
		return func(this, a_tintType);
	}

	// TODO need to understand how this changed in VR
#ifndef SKYRIMVR
	TintMask* PlayerCharacter::GetOverlayTintMask(TintMask* a_original)
	{
		if (!overlayTintMasks) {
			return nullptr;
		}

		for (std::uint32_t i = 0; i < tintMasks.size(); ++i) {
			if (tintMasks[i] == a_original) {
				return i < overlayTintMasks->size() ? (*overlayTintMasks)[i] : nullptr;
			}
		}

		return nullptr;
	}

	BSTArray<TintMask*>& PlayerCharacter::GetTintList()
	{
		return overlayTintMasks ? *overlayTintMasks : tintMasks;
	}

	TintMask* PlayerCharacter::GetTintMask(std::uint32_t a_tintType, std::uint32_t a_index)
	{
		using func_t = decltype(&PlayerCharacter::GetTintMask);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::GetTintMask };
		return func(this, a_tintType, a_index);
	}
#endif

	bool PlayerCharacter::HasActorDoingCommand() const
	{
		return static_cast<bool>(actorDoingPlayerCommand);
	}

	bool PlayerCharacter::IsGrabbing() const
	{
#ifndef SKYRIMVR
		return static_cast<bool>(grabbedObject);
#else
		for (auto& grabData : grabbedObjectData) {
			if (grabData.grabbedObject) {
				return true;
			}
		}
		return false;
#endif
	}

	void PlayerCharacter::PlayPickupEvent(TESForm* a_item, TESForm* a_containerOwner, TESObjectREFR* a_containerRef, EventType a_eventType)
	{
		using func_t = decltype(&PlayerCharacter::PlayPickupEvent);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::PlayPickupEvent };
		return func(this, a_item, a_containerOwner, a_containerRef, a_eventType);
	}

	void PlayerCharacter::SetAIDriven(bool a_enable)
	{
		using func_t = decltype(&PlayerCharacter::SetAIDriven);
		REL::Relocation<func_t> func{ RELOCATION_ID(39507, 40586) };
		return func(this, a_enable);
	}

	void PlayerCharacter::SetEscaping(bool a_flag, bool a_escaped)
	{
		using func_t = decltype(&PlayerCharacter::SetEscaping);
		REL::Relocation<func_t> func{ RELOCATION_ID(39574, 40660) };
		return func(this, a_flag, a_escaped);
	}
#ifndef SKYRIMVR
	void PlayerCharacter::StartGrabObject()
	{
		using func_t = decltype(&PlayerCharacter::StartGrabObject);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::StartGrabObject };
		return func(this);
	}

#else
	void PlayerCharacter::StartGrabObject(VRGrabHand a_hand)
	{
		using func_t = decltype(&PlayerCharacter::StartGrabObject);
		REL::Relocation<func_t> func{ Offset::PlayerCharacter::StartGrabObject };
		return func(this, a_hand);
	}
#endif

	void PlayerCharacter::UpdateCrosshairs()
	{
		using func_t = decltype(&PlayerCharacter::UpdateCrosshairs);
		REL::Relocation<func_t> func(RELOCATION_ID(39535, 40621));
		return func(this);
	}

	bool PlayerCharacter::CenterOnCell_Impl(const char* a_cellName, RE::TESObjectCELL* a_cell)
	{
		using func_t = decltype(&PlayerCharacter::CenterOnCell_Impl);
		REL::Relocation<func_t> func{ RELOCATION_ID(39365, 40437) };
		return func(this, a_cellName, a_cell);
	}

	void PlayerCharacter::AddSkillExperience(ActorValue a_skill, float a_experience)
	{
		using func_t = decltype(&PlayerCharacter::AddSkillExperience);
		REL::Relocation<func_t> func(RELOCATION_ID(39413, 40488));
		return func(this, a_skill, a_experience);
	}
}
