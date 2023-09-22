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

// 0x176 (0x1D4E - 0x1BD8)
// BlueprintGeneratedClass Survivor.Survivor_C
class ASurvivor_C : public AFortAIPawn
{
public:
	uint8                                        Pad_3033[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1BE0(0x8)(Transient, DuplicateTransient)
	class UFortMiniMapComponent*                 FortMiniMap;                                       // 0x1BE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      SpeechBubbleComponent;                             // 0x1BF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         InteractBox;                                       // 0x1BF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_SurvivorAnchor_C*                  SurvivorAnchor;                                    // 0x1C00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SurvivorAnchorClass;                               // 0x1C08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_DamageTagsServer;                               // 0x1C10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_MeleeDamage;                                    // 0x1C30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPCStatusAOE;                                   // 0x1C50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          TC_NPCStatusLockedInPlace;                         // 0x1C70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_NPCBehaviorCower;                               // 0x1C78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Event_NPCAbilityNonAttackAvoidEnemy;               // 0x1C98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_NPCAbilityNonAttackCowerTrue;                // 0x1CA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_NPCAbilityNonAttackCowerFalse;               // 0x1CA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_NPCAbilityNonAttackRescueTrue;               // 0x1CB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_NPCAbilityNonAttackConversationOrScriptedAnimation; // 0x1CB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_SurvivorLockedInPlace;                          // 0x1CC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ScriptedAnimMontage;                               // 0x1CC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpeechBubbleWidgetClass;                           // 0x1CD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bToggleInteractChannel;                            // 0x1CD8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3034[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortGameStateZone*                    ZoneState;                                         // 0x1CE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SurvivorName;                                      // 0x1CE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShowAnchorBoundsWhenTeleportingIn;                 // 0x1CF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3035[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MeshMIDArray;                                      // 0x1D00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         MIDs_Initialized;                                  // 0x1D10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TeleportInWantsToHappen;                           // 0x1D11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TeleportOutWantsToHappen;                          // 0x1D12(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3036[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LastSpeechText;                                    // 0x1D18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TeleportEffectModeReplicated;                      // 0x1D30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        TeleportEffectModeLocal;                           // 0x1D34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  InteractionBangRef;                                // 0x1D38(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InteractionBangRelativeOffset;                     // 0x1D40(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InteractionBangEnabled;                            // 0x1D4C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bHasAppliedAppearanceOverride;                     // 0x1D4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Survivor_C");
		return Clss;
	}

	void IsAppearanceApplied(bool* IsApplied, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnRep_InteractionBangEnabled();
	void InteractionBangVisibility(bool Enabled, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void OnRep_TeleportEffectModeReplicated(bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void InitializeMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue1);
	void SetLastHitInfoOnBlackboard(enum class ESurvivorHitInfoType SurvivorHitInfoType, class FName Name_SurvivorLastHitInfoTime, class FName Name_SurvivorLastHitInfoType, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
	void Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive);
	void OnRep_bToggleInteractChannel(bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable, enum class ECollisionResponse Temp_byte_Variable1, enum class ECollisionResponse K2Node_Select_Default);
	void UserConstructionScript();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void StopCowering();
	void StartCowering();
	void SurvivorSetLockedInPlace(bool LockedInPlace);
	void Lock();
	void Unlock();
	void OnDisplaySentence(class FText& SpeechText);
	void OnClearSentence();
	void ReceiveBeginPlay();
	void OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AdditiveHitReactDelay();
	void MIDsInitialized();
	void OnAppearanceOverridden();
	void PlayTeleportOut();
	void PlayTeleportIn();
	void GameplayCue_Teleport_In(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Teleport_Out(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ShowInteractionBang(bool Enabled);
	void ExecuteUbergraph_Survivor(int32 EntryPoint, bool CallFunc_NotEqual_IntInt_ReturnValue, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_HasTags_ReturnValue, UInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTags_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, bool K2Node_CustomEvent_LockedInPlace, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class FText K2Node_Event_SpeechText, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_DownedAI, class AController* K2Node_CustomEvent_DownedInstigator, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue1, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array1, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue1, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_HasAuthority_ReturnValue123, bool K2Node_CustomEvent_Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAppearanceApplied_IsApplied, bool CallFunc_BooleanAND_ReturnValue12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
