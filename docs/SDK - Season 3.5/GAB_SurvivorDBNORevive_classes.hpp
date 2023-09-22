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

// 0x10 (0xAF8 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C
class UGAB_SurvivorDBNORevive_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_2AB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorDBNORevive_C");
		return Clss;
	}

	void OnCancelled_2491B74745BECED77F7B838860EC4602();
	void OnInterrupted_2491B74745BECED77F7B838860EC4602();
	void OnBlendOut_2491B74745BECED77F7B838860EC4602();
	void OnCompleted_2491B74745BECED77F7B838860EC4602();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_SurvivorDBNORevive(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
