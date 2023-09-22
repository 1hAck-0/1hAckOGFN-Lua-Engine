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

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StopCameraShakes
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::StopCameraShakes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StopCameraShakes");

	UGA_DefaultPlayer_InteractLockonConsumable_C_StopCameraShakes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InitializePawnAndControllerRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PawnAthena                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitialized                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_InteractLockonConsumable_C::InitializePawnAndControllerRot(class AFortPlayerPawn* PawnAthena, bool* bInitialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InitializePawnAndControllerRot");

	UGA_DefaultPlayer_InteractLockonConsumable_C_InitializePawnAndControllerRot_Params params;
	params.PawnAthena = PawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInitialized != nullptr)
		*bInitialized = params.bInitialized;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartPullAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::StartPullAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartPullAnimation");

	UGA_DefaultPlayer_InteractLockonConsumable_C_StartPullAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.EndInteractSearch
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::EndInteractSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.EndInteractSearch");

	UGA_DefaultPlayer_InteractLockonConsumable_C_EndInteractSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartInteractSearch
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::StartInteractSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartInteractSearch");

	UGA_DefaultPlayer_InteractLockonConsumable_C_StartInteractSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_OnEndAbility
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_InteractLockonConsumable_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_OnEndAbility");

	UGA_DefaultPlayer_InteractLockonConsumable_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_InteractLockonConsumable_C::Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Completed");

	UGA_DefaultPlayer_InteractLockonConsumable_C_Completed_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_InteractLockonConsumable_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Cancelled");

	UGA_DefaultPlayer_InteractLockonConsumable_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Triggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DefaultPlayer_InteractLockonConsumable_C::Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Triggered");

	UGA_DefaultPlayer_InteractLockonConsumable_C_Triggered_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InterpolateToPosition
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::InterpolateToPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InterpolateToPosition");

	UGA_DefaultPlayer_InteractLockonConsumable_C_InterpolateToPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartCameraTransition
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::StartCameraTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartCameraTransition");

	UGA_DefaultPlayer_InteractLockonConsumable_C_StartCameraTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.TimeoutAndDie
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::TimeoutAndDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.TimeoutAndDie");

	UGA_DefaultPlayer_InteractLockonConsumable_C_TimeoutAndDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_ActivateAbility");

	UGA_DefaultPlayer_InteractLockonConsumable_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ForceNetUpdate
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_InteractLockonConsumable_C::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ForceNetUpdate");

	UGA_DefaultPlayer_InteractLockonConsumable_C_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_InteractLockonConsumable_C::ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable");

	UGA_DefaultPlayer_InteractLockonConsumable_C_ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
