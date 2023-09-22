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

// 0x60 (0xB48 - 0xAE8)
// BlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_370C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_TransferFullBodyHit;                            // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_FullBodyHitActiveEffect;                        // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FullBodyHitMontage;                                // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FullBodyHitMontageSection;                         // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitImpulse;                                        // 0xB18(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_RestoreControlResistance;                       // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xB30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveFullBodyHit;                                 // 0xB40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyFullBodyHit_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98();
	void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_bWasCancelled, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_NotEqual_ClassClass_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
