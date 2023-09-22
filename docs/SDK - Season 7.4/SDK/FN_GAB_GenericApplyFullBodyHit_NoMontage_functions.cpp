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

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_GenericApplyFullBodyHit_NoMontage_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_CanActivateAbility");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCancelled_A0357285499905489D05F7AAD5DC6FEC
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::OnCancelled_A0357285499905489D05F7AAD5DC6FEC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCancelled_A0357285499905489D05F7AAD5DC6FEC");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_OnCancelled_A0357285499905489D05F7AAD5DC6FEC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnInterrupted_A0357285499905489D05F7AAD5DC6FEC
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::OnInterrupted_A0357285499905489D05F7AAD5DC6FEC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnInterrupted_A0357285499905489D05F7AAD5DC6FEC");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_OnInterrupted_A0357285499905489D05F7AAD5DC6FEC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnBlendOut_A0357285499905489D05F7AAD5DC6FEC
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::OnBlendOut_A0357285499905489D05F7AAD5DC6FEC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnBlendOut_A0357285499905489D05F7AAD5DC6FEC");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_OnBlendOut_A0357285499905489D05F7AAD5DC6FEC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCompleted_A0357285499905489D05F7AAD5DC6FEC
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::OnCompleted_A0357285499905489D05F7AAD5DC6FEC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCompleted_A0357285499905489D05F7AAD5DC6FEC");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_OnCompleted_A0357285499905489D05F7AAD5DC6FEC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_OnEndAbility");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnHitPawn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnHitPawn");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_OnHitPawn_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericApplyFullBodyHit_NoMontage_C::ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage");

	UGAB_GenericApplyFullBodyHit_NoMontage_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
