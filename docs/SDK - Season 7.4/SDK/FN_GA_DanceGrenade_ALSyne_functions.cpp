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

// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.InvalidHandle_B5171FC24972C9187F9F1CA732D2527C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_ALSyne_C::InvalidHandle_B5171FC24972C9187F9F1CA732D2527C(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.InvalidHandle_B5171FC24972C9187F9F1CA732D2527C");

	UGA_DanceGrenade_ALSyne_C_InvalidHandle_B5171FC24972C9187F9F1CA732D2527C_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.OnRemoved_B5171FC24972C9187F9F1CA732D2527C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_ALSyne_C::OnRemoved_B5171FC24972C9187F9F1CA732D2527C(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.OnRemoved_B5171FC24972C9187F9F1CA732D2527C");

	UGA_DanceGrenade_ALSyne_C_OnRemoved_B5171FC24972C9187F9F1CA732D2527C_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DanceGrenade_ALSyne_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_ActivateAbility");

	UGA_DanceGrenade_ALSyne_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DanceGrenade_ALSyne_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.K2_OnEndAbility");

	UGA_DanceGrenade_ALSyne_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.ExecuteUbergraph_GA_DanceGrenade_ALSyne
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DanceGrenade_ALSyne_C::ExecuteUbergraph_GA_DanceGrenade_ALSyne(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_ALSyne.GA_DanceGrenade_ALSyne_C.ExecuteUbergraph_GA_DanceGrenade_ALSyne");

	UGA_DanceGrenade_ALSyne_C_ExecuteUbergraph_GA_DanceGrenade_ALSyne_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
