// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects"));

	struct
	{
		TArray<struct FActiveStatusEffect> OldEffects;
	} params;

	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> ActivatedEffects               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	struct
	{
		TArray<struct FActiveStatusEffect> ActivatedEffects;
	} params;

	params.ActivatedEffects = ActivatedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects"));

	struct
	{
		TArray<struct FActiveStatusEffect> OldEffects;
	} params;

	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
