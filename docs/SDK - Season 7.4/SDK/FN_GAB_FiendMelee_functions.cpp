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

// Function GAB_FiendMelee.GAB_FiendMelee_C.Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FiendMelee_C::Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.Completed");

	UGAB_FiendMelee_C_Completed_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FiendMelee_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.Cancelled");

	UGAB_FiendMelee_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.Triggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FiendMelee_C::Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.Triggered");

	UGAB_FiendMelee_C_Triggered_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnMoveFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FiendMelee_C::OnMoveFinished(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.OnMoveFinished");

	UGAB_FiendMelee_C_OnMoveFinished_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnRequestFailed
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnRequestFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.OnRequestFailed");

	UGAB_FiendMelee_C_OnRequestFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnCancelled
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.OnCancelled");

	UGAB_FiendMelee_C_OnCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.OnInterrupted");

	UGAB_FiendMelee_C_OnInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.OnComplete
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::OnComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.OnComplete");

	UGAB_FiendMelee_C_OnComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_FiendMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.K2_ActivateAbility");

	UGAB_FiendMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FiendMelee_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.K2_OnEndAbility");

	UGAB_FiendMelee_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.ContinuousMoveTowardsTarget
// (BlueprintCallable, BlueprintEvent)

void UGAB_FiendMelee_C::ContinuousMoveTowardsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.ContinuousMoveTowardsTarget");

	UGAB_FiendMelee_C_ContinuousMoveTowardsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.GameplayEffectContainerApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Target_Data                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FiendMelee_C::GameplayEffectContainerApplied(struct FGameplayAbilityTargetDataHandle Target_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.GameplayEffectContainerApplied");

	UGAB_FiendMelee_C_GameplayEffectContainerApplied_Params params;
	params.Target_Data = Target_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FiendMelee.GAB_FiendMelee_C.ExecuteUbergraph_GAB_FiendMelee
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FiendMelee_C::ExecuteUbergraph_GAB_FiendMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FiendMelee.GAB_FiendMelee_C.ExecuteUbergraph_GAB_FiendMelee");

	UGAB_FiendMelee_C_ExecuteUbergraph_GAB_FiendMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
