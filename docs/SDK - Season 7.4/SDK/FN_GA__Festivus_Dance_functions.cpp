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

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.InvalidHandle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA__Festivus_Dance_C::InvalidHandle(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA__Festivus_Dance.GA__Festivus_Dance_C.InvalidHandle");

	UGA__Festivus_Dance_C_InvalidHandle_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA__Festivus_Dance.GA__Festivus_Dance_C.OnRemoved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA__Festivus_Dance_C::OnRemoved(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA__Festivus_Dance.GA__Festivus_Dance_C.OnRemoved");

	UGA__Festivus_Dance_C_OnRemoved_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA__Festivus_Dance_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_ActivateAbility");

	UGA__Festivus_Dance_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA__Festivus_Dance_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_OnEndAbility");

	UGA__Festivus_Dance_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA__Festivus_Dance.GA__Festivus_Dance_C.ExecuteUbergraph_GA__Festivus_Dance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA__Festivus_Dance_C::ExecuteUbergraph_GA__Festivus_Dance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA__Festivus_Dance.GA__Festivus_Dance_C.ExecuteUbergraph_GA__Festivus_Dance");

	UGA__Festivus_Dance_C_ExecuteUbergraph_GA__Festivus_Dance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
