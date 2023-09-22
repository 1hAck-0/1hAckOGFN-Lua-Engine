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
// BlueprintGeneratedClass GAB_SurvivorDBNO.GAB_SurvivorDBNO_C
class UGAB_SurvivorDBNO_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3148[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	float                                        PlaySpeechLoopingTime;                             // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3149[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayStatusAfflicted;                           // 0xB00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorDBNO_C");
		return Clss;
	}

	void OnCancelled_30185FB0432AA030CE779FBAA5AE1A56();
	void OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56();
	void OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56();
	void OnCompleted_30185FB0432AA030CE779FBAA5AE1A56();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void PlayDownedSpeech();
	void ExecuteUbergraph_GAB_SurvivorDBNO(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
