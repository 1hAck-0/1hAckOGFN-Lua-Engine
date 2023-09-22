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


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNO_C::OnCancelled_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnCancelled_30185FB0432AA030CE779FBAA5AE1A56");

	Params::UGAB_SurvivorDBNO_C_OnCancelled_30185FB0432AA030CE779FBAA5AE1A56_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNO_C::OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56");

	Params::UGAB_SurvivorDBNO_C_OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNO_C::OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56");

	Params::UGAB_SurvivorDBNO_C_OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNO_C::OnCompleted_30185FB0432AA030CE779FBAA5AE1A56()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "OnCompleted_30185FB0432AA030CE779FBAA5AE1A56");

	Params::UGAB_SurvivorDBNO_C_OnCompleted_30185FB0432AA030CE779FBAA5AE1A56_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "K2_OnEndAbility");

	Params::UGAB_SurvivorDBNO_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurvivorDBNO_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorDBNO_C::PlayDownedSpeech()
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "PlayDownedSpeech");

	Params::UGAB_SurvivorDBNO_C_PlayDownedSpeech_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorDBNO_C::ExecuteUbergraph_GAB_SurvivorDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GAB_SurvivorDBNO_C", "ExecuteUbergraph_GAB_SurvivorDBNO");

	Params::UGAB_SurvivorDBNO_C_ExecuteUbergraph_GAB_SurvivorDBNO_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
