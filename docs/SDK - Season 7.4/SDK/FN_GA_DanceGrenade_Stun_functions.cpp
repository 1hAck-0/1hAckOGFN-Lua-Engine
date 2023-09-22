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

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_Stun_C::InvalidHandle(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle");

	UGA_DanceGrenade_Stun_C_InvalidHandle_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DanceGrenade_Stun_C::OnRemoved(struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved");

	UGA_DanceGrenade_Stun_C_OnRemoved_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DanceGrenade_Stun_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_ActivateAbility");

	UGA_DanceGrenade_Stun_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DanceGrenade_Stun_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility");

	UGA_DanceGrenade_Stun_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DanceGrenade_Stun_C::ExecuteUbergraph_GA_DanceGrenade_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun");

	UGA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
