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

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Enemy_Apply_SneakySnowman_C::HasVehicleWeapon_()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_HasVehicleWeapon__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Completed_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Triggered_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EventReceived(struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EventReceived_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::RestartAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_RestartAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbilitySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbilitySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::VehicleWeaponCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_VehicleWeaponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
