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

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_Rethrow_C::DetachProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile");

	UGA_Athena_Grenade_Rethrow_C_DetachProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_Rethrow_C::AttachProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile");

	UGA_Athena_Grenade_Rethrow_C_AttachProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_Rethrow_C::Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed");

	UGA_Athena_Grenade_Rethrow_C_Completed_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_Rethrow_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled");

	UGA_Athena_Grenade_Rethrow_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_Rethrow_C::Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered");

	UGA_Athena_Grenade_Rethrow_C_Triggered_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_Rethrow_C::OnFinish_B295E6694DBD8B2B2478A38EA60F5624()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624");

	UGA_Athena_Grenade_Rethrow_C_OnFinish_B295E6694DBD8B2B2478A38EA60F5624_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_Rethrow_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility");

	UGA_Athena_Grenade_Rethrow_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_Rethrow_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.TossGrenade");

	UGA_Athena_Grenade_Rethrow_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_Rethrow_C::Server_SpawnProjectile(struct FVector Location, struct FRotator Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Server_SpawnProjectile");

	UGA_Athena_Grenade_Rethrow_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_Rethrow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility");

	UGA_Athena_Grenade_Rethrow_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_Rethrow_C::ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow");

	UGA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
