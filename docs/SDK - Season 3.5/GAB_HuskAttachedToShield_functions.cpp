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


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.RandomAttachAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AnimName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskAttachedToShield_C::RandomAttachAnimation(class FName* AnimName, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "RandomAttachAnimation");

	Params::UGAB_HuskAttachedToShield_C_RandomAttachAnimation_Params Parms;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimName != nullptr)
		*AnimName = Parms.AnimName;

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Completed_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Completed_D35D9F8942008716C246249F1CAEFA6B");

	Params::UGAB_HuskAttachedToShield_C_Completed_D35D9F8942008716C246249F1CAEFA6B_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Cancelled_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Cancelled_D35D9F8942008716C246249F1CAEFA6B");

	Params::UGAB_HuskAttachedToShield_C_Cancelled_D35D9F8942008716C246249F1CAEFA6B_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Triggered_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Triggered_D35D9F8942008716C246249F1CAEFA6B");

	Params::UGAB_HuskAttachedToShield_C_Triggered_D35D9F8942008716C246249F1CAEFA6B_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	Params::UGAB_HuskAttachedToShield_C_Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	Params::UGAB_HuskAttachedToShield_C_Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_HuskAttachedToShield_C::Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	Params::UGAB_HuskAttachedToShield_C_Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params Parms;
	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_HuskAttachedToShield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_HuskAttachedToShield_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.EndAbilityFromTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_HuskAttachedToShield_C::EndAbilityFromTimer()
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "EndAbilityFromTimer");

	Params::UGAB_HuskAttachedToShield_C_EndAbilityFromTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskAttachedToShield_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "K2_OnEndAbility");

	Params::UGAB_HuskAttachedToShield_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.ExecuteUbergraph_GAB_HuskAttachedToShield
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1234                                (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1234                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData123                                 (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag123                             (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable1                                            ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData12                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag12                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData1                                   (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag1                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable12                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable123                                          ()
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData12345                               (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag12345                           (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_RandomAttachAnimation_AnimName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_HuskAttachedToShield_C::ExecuteUbergraph_GAB_HuskAttachedToShield(int32 EntryPoint, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1234, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1234, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData123, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FGameplayTag& Temp_struct_Variable12, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable123, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, float CallFunc_FClamp_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12345, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, class FName CallFunc_RandomAttachAnimation_AnimName, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("GAB_HuskAttachedToShield_C", "ExecuteUbergraph_GAB_HuskAttachedToShield");

	Params::UGAB_HuskAttachedToShield_C_ExecuteUbergraph_GAB_HuskAttachedToShield_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData1234 = K2Node_CustomEvent_TargetData1234;
	Parms.K2Node_CustomEvent_ApplicationTag1234 = K2Node_CustomEvent_ApplicationTag1234;
	Parms.K2Node_CustomEvent_TargetData123 = K2Node_CustomEvent_TargetData123;
	Parms.K2Node_CustomEvent_ApplicationTag123 = K2Node_CustomEvent_ApplicationTag123;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_CustomEvent_TargetData12 = K2Node_CustomEvent_TargetData12;
	Parms.K2Node_CustomEvent_ApplicationTag12 = K2Node_CustomEvent_ApplicationTag12;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CustomEvent_TargetData1 = K2Node_CustomEvent_TargetData1;
	Parms.K2Node_CustomEvent_ApplicationTag1 = K2Node_CustomEvent_ApplicationTag1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.Temp_struct_Variable12 = Temp_struct_Variable12;
	Parms.Temp_struct_Variable123 = Temp_struct_Variable123;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData12345 = K2Node_CustomEvent_TargetData12345;
	Parms.K2Node_CustomEvent_ApplicationTag12345 = K2Node_CustomEvent_ApplicationTag12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_RandomAttachAnimation_AnimName = CallFunc_RandomAttachAnimation_AnimName;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue1 = CallFunc_PlayMontageWaitTarget_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
