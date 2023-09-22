#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnCancelled_2491B74745BECED77F7B838860EC4602
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNORevive_C::OnCancelled_2491B74745BECED77F7B838860EC4602()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "OnCancelled_2491B74745BECED77F7B838860EC4602");

	Params::UGAB_SurvivorDBNORevive_C_OnCancelled_2491B74745BECED77F7B838860EC4602_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnInterrupted_2491B74745BECED77F7B838860EC4602
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNORevive_C::OnInterrupted_2491B74745BECED77F7B838860EC4602()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "OnInterrupted_2491B74745BECED77F7B838860EC4602");

	Params::UGAB_SurvivorDBNORevive_C_OnInterrupted_2491B74745BECED77F7B838860EC4602_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnBlendOut_2491B74745BECED77F7B838860EC4602
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNORevive_C::OnBlendOut_2491B74745BECED77F7B838860EC4602()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "OnBlendOut_2491B74745BECED77F7B838860EC4602");

	Params::UGAB_SurvivorDBNORevive_C_OnBlendOut_2491B74745BECED77F7B838860EC4602_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnCompleted_2491B74745BECED77F7B838860EC4602
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNORevive_C::OnCompleted_2491B74745BECED77F7B838860EC4602()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "OnCompleted_2491B74745BECED77F7B838860EC4602");

	Params::UGAB_SurvivorDBNORevive_C_OnCompleted_2491B74745BECED77F7B838860EC4602_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorDBNORevive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "K2_OnEndAbility");

	Params::UGAB_SurvivorDBNORevive_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorDBNORevive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.ExecuteUbergraph_GAB_SurvivorDBNORevive
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_SurvivorDBNORevive_C::ExecuteUbergraph_GAB_SurvivorDBNORevive(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNORevive_C", "ExecuteUbergraph_GAB_SurvivorDBNORevive");

	Params::UGAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue12 = CallFunc_GetActivatingPawn_ReturnValue12;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue123 = CallFunc_GetActivatingPawn_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
