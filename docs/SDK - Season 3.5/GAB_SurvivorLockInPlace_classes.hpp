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

// 0x50 (0xB38 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C
class UGAB_SurvivorLockInPlace_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_2BEF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_NPCAbilityNonAttackLockInPlaceTrue;             // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackLockInPlaceFalse;            // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackLockInPlaceIndefiniteTrue;   // 0xB08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPCAbilityNonAttackLockInPlaceIndefiniteFalse;  // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LockIndefinitely;                                  // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_SurvivorLockInPlace;                            // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_SurvivorLockInPlaceHandel;                      // 0xB28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                FocalPoint;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorLockInPlace_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_SurvivorLockInPlace(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_MatchesTag_ReturnValue12, bool CallFunc_MatchesTag_ReturnValue123, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
