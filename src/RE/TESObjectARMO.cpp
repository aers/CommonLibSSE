#include "RE/TESObjectARMO.h"


namespace RE
{
	float TESObjectARMO::GetArmorRating()
	{
		return armorRating / 100;
	}

    bool  TESObjectARMO::ApplyArmorAddon(TESRace * a_race, ActorWeightModel * a_model, bool a_isFemale)
	{
        using func_t = function_type_t<decltype(&TESObjectARMO::ApplyArmorAddon)>;
        RelocUnrestricted<func_t*> func(Offset::TESObjectARMO::ApplyArmorAddon);
        return func(this, a_race, a_model, a_isFemale);
	}

    bool TESObjectARMO::TestBodyPartByIndex(UInt32 a_index)
    {
        using func_t = function_type_t<decltype(&TESObjectARMO::TestBodyPartByIndex)>;
        RelocUnrestricted<func_t*> func(Offset::TESObjectARMO::TestBodyPartByIndex);
        return func(this, a_index);
    }

}
