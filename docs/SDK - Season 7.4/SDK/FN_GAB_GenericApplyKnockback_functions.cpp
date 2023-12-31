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

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 OptionalObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::DoesUseInstagorInsteadOfImpulseDirection(struct FGameplayEffectContextHandle EffectContext, class UObject* OptionalObject, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection");

	UGAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection_Params params;
	params.EffectContext = EffectContext;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         OutPawn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator");

	UGAB_GenericApplyKnockback_C_GetPawnFromInstigator_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPawn != nullptr)
		*OutPawn = params.OutPawn;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGAB_GenericApplyKnockback_C::CalculateImpulseDirection(class AFortPlayerPawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection");

	UGAB_GenericApplyKnockback_C_CalculateImpulseDirection_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCancelled_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF");

	UGAB_GenericApplyKnockback_C_OnCancelled_D744890E4C485F1C80B3E7864AE506FF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnInterrupted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF");

	UGAB_GenericApplyKnockback_C_OnInterrupted_D744890E4C485F1C80B3E7864AE506FF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnBlendOut_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF");

	UGAB_GenericApplyKnockback_C_OnBlendOut_D744890E4C485F1C80B3E7864AE506FF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCompleted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF");

	UGAB_GenericApplyKnockback_C_OnCompleted_D744890E4C485F1C80B3E7864AE506FF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled");

	UGAB_GenericApplyKnockback_C_OnCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted");

	UGAB_GenericApplyKnockback_C_OnInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnBlendOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut");

	UGAB_GenericApplyKnockback_C_OnBlendOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted");

	UGAB_GenericApplyKnockback_C_OnCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCancelled_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583");

	UGAB_GenericApplyKnockback_C_OnCancelled_BA9188C34C234A4C47306FA73AAF0583_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnInterrupted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583");

	UGAB_GenericApplyKnockback_C_OnInterrupted_BA9188C34C234A4C47306FA73AAF0583_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnBlendOut_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583");

	UGAB_GenericApplyKnockback_C_OnBlendOut_BA9188C34C234A4C47306FA73AAF0583_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnCompleted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583");

	UGAB_GenericApplyKnockback_C_OnCompleted_BA9188C34C234A4C47306FA73AAF0583_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::OnReachedJumpApex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex");

	UGAB_GenericApplyKnockback_C_OnReachedJumpApex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::SetupMontageSectionsAndOrientDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection");

	UGAB_GenericApplyKnockback_C_SetupMontageSectionsAndOrientDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::OnPawnLanded(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded");

	UGAB_GenericApplyKnockback_C_OnPawnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn");

	UGAB_GenericApplyKnockback_C_OnHitPawn_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericApplyKnockback_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility");

	UGAB_GenericApplyKnockback_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyKnockback_C::DebugLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine");

	UGAB_GenericApplyKnockback_C_DebugLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyKnockback_C::ExecuteUbergraph_GAB_GenericApplyKnockback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback");

	UGAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
