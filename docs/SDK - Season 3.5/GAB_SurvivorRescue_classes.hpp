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

// 0x28 (0xB10 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorRescue.GAB_SurvivorRescue_C
class UGAB_SurvivorRescue_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_31BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UClass*                                BP_VictoryDrone;                                   // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RescueCompleted;                                   // 0xB00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 Rescuer;                                           // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorRescue_C");
		return Clss;
	}

	void Completed_8BD132F745BDCD15EBF232861F392E7B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_8BD132F745BDCD15EBF232861F392E7B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_8BD132F745BDCD15EBF232861F392E7B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_AE3E49574CEC70DFC62B01973CCF7515(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void SpawnVictoryDrone();
	void RescueComplete();
	void PlayRescueAnimation();
	void K2_OnEndAbility(bool bWasCancelled);
	void WaitForFinishRescueEvent();
	void ExecuteUbergraph_GAB_SurvivorRescue(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FGameplayEventData& Temp_struct_Variable12, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess123, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, bool K2Node_Event_bWasCancelled, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess1234, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12345, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
