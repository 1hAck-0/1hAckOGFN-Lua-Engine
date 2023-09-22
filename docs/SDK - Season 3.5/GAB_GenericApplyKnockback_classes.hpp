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

// 0xE8 (0xBD0 - 0xAE8)
// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3D17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_TransferKnockback;                              // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockbackActive;                                // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KnockbackPropagationThreshold;                     // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          KnockbackUpMontage;                                // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackUpMontageSection;                         // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackDownMontage;                              // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackDownMontageSection;                       // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandMontage;                              // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandMontageSection;                       // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandToIdleMontage;                        // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToIdleMontageSection;                 // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          KnockbackLandToStunMontage;                        // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KnockbackLandToStunMontageSection;                 // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDraw;                                         // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugNumbers;                                      // 0xB61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugForceKnockbackValues;                         // 0xB62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bOrientToImpulse;                                  // 0xB63(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle           ActiveKnockback;                                   // 0xB64(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OrientDirection;                                   // 0xB6C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitDirection;                                      // 0xB78(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpulseDirectionVelocityOrRotation;                // 0xB84(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DebugLastLocation;                                 // 0xB90(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TC_NPCStatusLockedInPlace;                         // 0xBA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LockedInPlaceKnockbackAngle;                       // 0xBA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LockedInPlaceKnockbackMagnitude;                   // 0xBAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_RestoreControlResistance;                       // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_ImpactImmunity;                                 // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ActiveImpactImmunity;                              // 0xBC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasImpactImmunity;                                // 0xBC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        F_OneFrameDelay;                                   // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericApplyKnockback_C");
		return Clss;
	}

	void DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value, const struct FGameplayTag& GT_IgnoreImpulseDirection, bool Temp_bool_Variable, class UGameplayEffect* K2Node_DynamicCast_AsGameplay_Effect, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn, class AFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue);
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn* InPawn, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void OnPawnLanded(struct FHitResult& Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void DebugLine();
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, bool CallFunc_IsFalling_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12345, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue12, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12345, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FHitResult& K2Node_CustomEvent_Hit1, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue123456, float CallFunc_VSize_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123456, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234567, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12345678, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123456789, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue12345678, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1234, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue123456789, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1234567891011, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool K2Node_Event_bWasCancelled, bool CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, class AFortPlayerPawn* CallFunc_GetPawnFromInstigator_OutPawn, const struct FVector& CallFunc_CalculateImpulseDirection_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123456789101112, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
