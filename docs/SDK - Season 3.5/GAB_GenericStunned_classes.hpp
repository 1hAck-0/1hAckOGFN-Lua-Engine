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
// BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C
class UGAB_GenericStunned_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3CBF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UClass*                                StunActiveEffect;                                  // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveStun;                                        // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RestoreControlResistEffect;                        // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericStunned_C");
		return Clss;
	}

	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericStunned(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetStunTime_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
