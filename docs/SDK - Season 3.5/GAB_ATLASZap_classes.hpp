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

// 0x18 (0xB00 - 0xAE8)
// BlueprintGeneratedClass GAB_ATLASZap.GAB_ATLASZap_C
class UGAB_ATLASZap_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_227D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_GameplayEffectInstantDeath;                     // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_ATLASZap_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_ATLASZap(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AController* CallFunc_GetController_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
