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

// 0x9C (0xB84 - 0xAE8)
// BlueprintGeneratedClass GAB_SurvivorAvoidEnemy.GAB_SurvivorAvoidEnemy_C
class UGAB_SurvivorAvoidEnemy_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_3163[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AbilityEnding;                                     // 0xAF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3164[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             EQS_AvoidEnemy;                                    // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivor_C*                           SurvivorPawn;                                      // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementUrgency              MovementUrgencyWhenAvoiding;                       // 0xB10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementUrgency              InitialMovementUrgency;                            // 0xB11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3165[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AvoidLocation;                                     // 0xB14(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       EQSResults;                                        // 0xB20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFortFeedbackHandle                   FeedbackEvent_Help;                                // 0xB30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HelpAnimationCooldown;                             // 0xB48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HelpAnimationMinRange;                             // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HelpAnimationLastTimePlayed;                       // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SurvivorIsArmed;                                   // 0xB54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSurvivorInsideOfAnchorBounds;                    // 0xB55(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3166[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name_HelpMeAttacked;                               // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverwhelmedSpeechDelay;                            // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldTriggerOverwhelmedSpeech;                   // 0xB64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3167[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_MoveAI*               AvoidMove;                                         // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateFocalPointHandle;                            // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                CurrentFocusTarget;                                // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LostFocusStartTime;                                // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurvivorAvoidEnemy_C");
		return Clss;
	}

	void OnMoveFinished_6FCA0F06404AB0DEE9586D8157793BFD(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_6FCA0F06404AB0DEE9586D8157793BFD();
	void OnCancelled_6FCA0F06404AB0DEE9586D8157793BFD();
	void OnInterrupted_6FCA0F06404AB0DEE9586D8157793BFD();
	void OnComplete_6FCA0F06404AB0DEE9586D8157793BFD();
	void Completed_F461FD4E44811E3F3E4AFD81EB1A0127(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F461FD4E44811E3F3E4AFD81EB1A0127(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_F461FD4E44811E3F3E4AFD81EB1A0127(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void StartAvoidMove();
	void TriggerHelpSpeech();
	void TriggerOverwhelmedSpeech();
	void UpdateFocalPoint();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SurvivorAvoidEnemy(int32 EntryPoint, enum class EEnvQueryStatus Temp_byte_Variable, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, bool Temp_bool_Variable12, bool CallFunc_IsActorInsideOfAnchorBounds_InBounds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, bool Temp_bool_Variable123, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue1, class UClass* K2Node_Select_Default, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue123, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue123, bool Temp_bool_Variable1234, bool CallFunc_IsValid_ReturnValue1234, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool Temp_bool_Variable12345, bool CallFunc_IsValid_ReturnValue12345, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetResultsAsLocations_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable123456, int32 CallFunc_GetRemainingAmmo_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, bool Temp_bool_Variable1234567, bool K2Node_Select1_Default, bool CallFunc_BooleanAND_ReturnValue123, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue123, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
