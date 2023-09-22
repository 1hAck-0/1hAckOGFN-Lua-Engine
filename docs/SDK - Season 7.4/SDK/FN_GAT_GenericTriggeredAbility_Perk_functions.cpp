// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PROC_Chance__0_1_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Streak_Breaker_Threshold       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::CalcStreakBreakerThreshold(float PROC_Chance__0_1_, int* Streak_Breaker_Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold");

	UGAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold_Params params;
	params.PROC_Chance__0_1_ = PROC_Chance__0_1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Streak_Breaker_Threshold != nullptr)
		*Streak_Breaker_Threshold = params.Streak_Breaker_Threshold;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition* ItemToGive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberToGive                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotifyPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::GrantRegenItemToOwner(class AFortPlayerPawn* FortPlayerPawn, class UFortWorldItemDefinition* ItemToGive, int NumberToGive, bool NotifyPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner");

	UGAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner_Params params;
	params.FortPlayerPawn = FortPlayerPawn;
	params.ItemToGive = ItemToGive;
	params.NumberToGive = NumberToGive;
	params.NotifyPlayer = NotifyPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   InstegatorTags                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                  DefaultEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ElementEffectOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           EffectWasChanged               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::SetDamageElement(struct FGameplayTagContainer InstegatorTags, class UClass* DefaultEffect, class UClass** ElementEffectOut, bool* EffectWasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement");

	UGAT_GenericTriggeredAbility_Perk_C_SetDamageElement_Params params;
	params.InstegatorTags = InstegatorTags;
	params.DefaultEffect = DefaultEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementEffectOut != nullptr)
		*ElementEffectOut = params.ElementEffectOut;
	if (EffectWasChanged != nullptr)
		*EffectWasChanged = params.EffectWasChanged;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat          Lookup_Base                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScalableFloat          Lookup_Commander               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            Commander_Tag                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::GetCorrectBalanceValue(struct FScalableFloat Lookup_Base, struct FScalableFloat Lookup_Commander, struct FGameplayTag Commander_Tag, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue");

	UGAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue_Params params;
	params.Lookup_Base = Lookup_Base;
	params.Lookup_Commander = Lookup_Commander;
	params.Commander_Tag = Commander_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Grant_Amount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::GrantFragmentCharge(int Grant_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge");

	UGAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge_Params params;
	params.Grant_Amount = Grant_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CountPerTrigger                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxStreak                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StreakCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           StreakMaxed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::CheckStreak(int CountPerTrigger, int MaxStreak, int* StreakCount, bool* StreakMaxed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak");

	UGAT_GenericTriggeredAbility_Perk_C_CheckStreak_Params params;
	params.CountPerTrigger = CountPerTrigger;
	params.MaxStreak = MaxStreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StreakCount != nullptr)
		*StreakCount = params.StreakCount;
	if (StreakMaxed != nullptr)
		*StreakMaxed = params.StreakMaxed;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_GenericTriggeredAbility_Perk_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent");

	UGAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_Perk_C::ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk");

	UGAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
