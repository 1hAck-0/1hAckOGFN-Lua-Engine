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

// 0x98 (0xB80 - 0xAE8)
// BlueprintGeneratedClass GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C
class UGAB_TakerSwoopMelee_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_37A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATakerPawn_C*                          Taker;                                             // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationRateWhenSwooping;                          // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TC_NPCAbilityAttackMeleeSwoop;                     // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SwoopTransitionMontage;                            // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SwoopAttackEndMontage;                             // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwoopTimeout;                                      // 0xB28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SwoopMoveAcceptRadius;                             // 0xB2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsHitThisTargetSelection;                      // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         AbilityEnded;                                      // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ActorsHitThisSwoop;                                // 0xB48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        ActorsHitThisTargetSelectionFiltered;              // 0xB58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         MovingSlowly;                                      // 0xB68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_MoveAI*               SwoopMove;                                         // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MeleeInProgress;                                   // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugSwoopAttackTime;                              // 0xB7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_TakerSwoopMelee_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A();
	void OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A();
	void Completed_90CCC07C4CF88E3BB6C7268A426DBA5F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE47BE5C495BECAF17E854B5C7774E8D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_DE47BE5C495BECAF17E854B5C7774E8D(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15();
	void K2_ActivateAbility();
	void Taker_Overlapped_An_Actor(class AActor* OverlappedActor, class AActor* OtherActor);
	void BeginOutroDeceleration();
	void SwoopTimeoutComplete();
	void K2_OnEndAbility(bool bWasCancelled);
	void SlowSpeedCancel();
	void ExecuteUbergraph_GAB_TakerSwoopMelee(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1234, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1234, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData123, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, const struct FGameplayTag& Temp_struct_Variable12, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable123, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, int32 Temp_int_Array_Index_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue1, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue12, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActorArray_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue123, int32 Temp_int_Variable, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AActor* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue1234, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue12, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn1, bool K2Node_DynamicCast_bSuccess1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
