#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB20 - 0xAE8)
// BlueprintGeneratedClass GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C
class UGAB_HuskAttachedToShield_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_368A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UGA_Constructor_BullRush_C*            BullRush;                                          // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          HuskShield;                                        // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Time;                                              // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinimumAbilityTime;                                // 0xB14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DefaultShield;                                     // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_HuskAttachedToShield_C");
		return Clss;
	}

	void RandomAttachAnimation(class FName* AnimName, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void Completed_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_D35D9F8942008716C246249F1CAEFA6B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void EndAbilityFromTimer();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_HuskAttachedToShield(int32 EntryPoint, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1234, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1234, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData123, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FGameplayTag& Temp_struct_Variable12, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable123, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, float CallFunc_FClamp_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12345, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, class FName CallFunc_RandomAttachAnimation_AnimName, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
