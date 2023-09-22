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


// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorLockInPlace_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_SurvivorLockInPlace_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurvivorLockInPlace_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.ExecuteUbergraph_GAB_SurvivorLockInPlace
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_SurvivorLockInPlace_C::ExecuteUbergraph_GAB_SurvivorLockInPlace(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue12, bool CallFunc_MatchesTag_ReturnValue123, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("GAB_SurvivorLockInPlace_C", "ExecuteUbergraph_GAB_SurvivorLockInPlace");

	Params::UGAB_SurvivorLockInPlace_C_ExecuteUbergraph_GAB_SurvivorLockInPlace_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue1 = CallFunc_MatchesTag_ReturnValue1;
	Parms.CallFunc_MatchesTag_ReturnValue12 = CallFunc_MatchesTag_ReturnValue12;
	Parms.CallFunc_MatchesTag_ReturnValue123 = CallFunc_MatchesTag_ReturnValue123;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue1 = CallFunc_GetActivatingPawn_ReturnValue1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue1 = CallFunc_GetAbilitySystemComponent_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
