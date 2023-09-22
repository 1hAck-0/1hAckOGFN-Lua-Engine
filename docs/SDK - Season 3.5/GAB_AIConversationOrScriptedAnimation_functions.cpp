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


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIConversationOrScriptedAnimation_C::Completed_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIConversationOrScriptedAnimation_C", "Completed_0DEF95174D4614F4567B4E8B836FDE6F");

	Params::UGAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIConversationOrScriptedAnimation_C::Cancelled_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIConversationOrScriptedAnimation_C", "Cancelled_0DEF95174D4614F4567B4E8B836FDE6F");

	Params::UGAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_AIConversationOrScriptedAnimation_C::Triggered_0DEF95174D4614F4567B4E8B836FDE6F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_AIConversationOrScriptedAnimation_C", "Triggered_0DEF95174D4614F4567B4E8B836FDE6F");

	Params::UGAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AIConversationOrScriptedAnimation_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_AIConversationOrScriptedAnimation_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData12                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag12                              (NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable1                                            ()
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_AIConversationOrScriptedAnimation_C::ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_AIConversationOrScriptedAnimation_C", "ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation");

	Params::UGAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_TargetData12 = K2Node_CustomEvent_TargetData12;
	Parms.K2Node_CustomEvent_ApplicationTag12 = K2Node_CustomEvent_ApplicationTag12;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
