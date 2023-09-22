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


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorCower_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_SurvivorCower_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurvivorCower_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.CowerFalse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurvivorCower_C::CowerFalse()
{
	static auto Func = Class->GetFunction("GAB_SurvivorCower_C", "CowerFalse");

	Params::UGAB_SurvivorCower_C_CowerFalse_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorCower_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_SurvivorCower_C", "K2_OnEndAbility");

	Params::UGAB_SurvivorCower_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorCower.GAB_SurvivorCower_C.ExecuteUbergraph_GAB_SurvivorCower
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorCower_C::ExecuteUbergraph_GAB_SurvivorCower(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_MatchesTag_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue12, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue123, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("GAB_SurvivorCower_C", "ExecuteUbergraph_GAB_SurvivorCower");

	Params::UGAB_SurvivorCower_C_ExecuteUbergraph_GAB_SurvivorCower_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_MatchesTag_ReturnValue1 = CallFunc_MatchesTag_ReturnValue1;
	Parms.CallFunc_MatchesTag_ReturnValue12 = CallFunc_MatchesTag_ReturnValue12;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.CallFunc_MatchesTag_ReturnValue123 = CallFunc_MatchesTag_ReturnValue123;
	Parms.K2Node_DynamicCast_AsFort_AIPawn1 = K2Node_DynamicCast_AsFort_AIPawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
