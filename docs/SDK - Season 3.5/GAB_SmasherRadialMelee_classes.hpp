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

// 0x20 (0xB20 - 0xB00)
// BlueprintGeneratedClass GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C
class UGAB_SmasherRadialMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB00(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_SmasherMeleeSuccess;                            // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmasherRotationRate;                               // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3446[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_MoveAI*               Move;                                              // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherRadialMelee_C");
		return Clss;
	}

	void Completed_2EFEB45748E11A8A846C14AD7ADF164D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_2EFEB45748E11A8A846C14AD7ADF164D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_2EFEB45748E11A8A846C14AD7ADF164D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46();
	void K2_ActivateAbility();
	void MoveToLoop();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherRadialMelee(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue12, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
