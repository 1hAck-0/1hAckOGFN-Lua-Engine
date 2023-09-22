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

// 0x40 (0xB80 - 0xB40)
// BlueprintGeneratedClass GAB_TakerPortalBase.GAB_TakerPortalBase_C
class UGAB_TakerPortalBase_C : public UFortGameplayAbility_AIPortal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PortalInStartLocation;                             // 0xB4C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PortalInEndLocation;                               // 0xB58(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PortalOutEndLocation;                              // 0xB64(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_MoveAI*               PortalInMove;                                      // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_MoveAI*               PortalOutMove;                                     // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_TakerPortalBase_C");
		return Clss;
	}

	void OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425();
	void OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11();
	void OnCancelled_F402FFCD40B6F77E728220BFF4A37F11();
	void OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11();
	void OnComplete_F402FFCD40B6F77E728220BFF4A37F11();
	void Completed_7D4D41B64C4603D73B5B158D82C73287(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7D4D41B64C4603D73B5B158D82C73287(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7D4D41B64C4603D73B5B158D82C73287(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_TakerPortalBase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FVector& CallFunc_GetPortalInPoint_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, const struct FVector& CallFunc_GetPortalOutPoint_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasPortalOutPoint_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, enum class EPathFollowingResult K2Node_CustomEvent_Result1, class AAIController* K2Node_CustomEvent_AIController1, class ABuildingSMActor* CallFunc_GetPortalBuilding_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
