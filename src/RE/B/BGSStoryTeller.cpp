#include "RE/B/BGSStoryTeller.h"

namespace RE
{
	BGSStoryTeller* BGSStoryTeller::GetSingleton()
	{
		REL::Relocation<BGSStoryTeller**> singleton{ RELOCATION_ID(514316, 400476) };
		return *singleton;
	}

	void BGSStoryTeller::BeginShutDownQuest(TESQuest* a_quest)
	{
		using func_t = decltype(&BGSStoryTeller::BeginShutDownQuest);
		REL::Relocation<func_t> func{ RELOCATION_ID(31718, 32486) };
		return func(this, a_quest);
	}

	void BGSStoryTeller::BeginStartUpQuest(TESQuest* a_quest)
	{
		using func_t = decltype(&BGSStoryTeller::BeginStartUpQuest);
		REL::Relocation<func_t> func{ RELOCATION_ID(31717, 32485) };
		return func(this, a_quest);
	}
}
