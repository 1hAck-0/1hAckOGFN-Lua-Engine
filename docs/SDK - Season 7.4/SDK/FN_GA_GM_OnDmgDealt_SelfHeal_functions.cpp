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

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_GM_OnDmgDealt_SelfHeal_C::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.K2_ShouldAbilityRespondToEvent");

	UGA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.CalculateHealMagnitude
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseMagnitude                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PawnLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinalMagnitude                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_GM_OnDmgDealt_SelfHeal_C::CalculateHealMagnitude(float BaseMagnitude, class UAbilitySystemComponent* AbilitySystem, float PawnLevel, float* FinalMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.CalculateHealMagnitude");

	UGA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude_Params params;
	params.BaseMagnitude = BaseMagnitude;
	params.AbilitySystem = AbilitySystem;
	params.PawnLevel = PawnLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalMagnitude != nullptr)
		*FinalMagnitude = params.FinalMagnitude;
}


// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealt_SelfHeal_C::DoOnDmgDealtBehavior(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.DoOnDmgDealtBehavior");

	UGA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_GM_OnDmgDealt_SelfHeal_C::ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal");

	UGA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
