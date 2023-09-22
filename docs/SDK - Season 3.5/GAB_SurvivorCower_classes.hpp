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

// 0x39 (0xB21 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorCower.GAB_SurvivorCower_C
class UGAB_SurvivorCower_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_2ABC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	float                                        CowerTimeMin;                                      // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CowerTimeMax;                                      // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackCowerTrue;                   // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackCowerFalse;                  // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackCowerIndefiniteTrue;         // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackCowerIndefiniteFalse;        // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CowerIndefinitely;                                 // 0xB20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorCower_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void CowerFalse();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SurvivorCower(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_MatchesTag_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue12, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue123, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
