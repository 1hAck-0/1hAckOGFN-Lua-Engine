#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// 0x0281 (0x2B31 - 0x28B0)
class APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x28B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x28B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailPS;                                              // 0x28C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x28C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                 // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                          // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                 // 0x28E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                          // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x28F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x28F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x28F2(0x0002) MISSED OFFSET
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x28F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x2900(0x0020) (Edit, BlueprintVisible)
	int                                                WaterCounter;                                             // 0x2920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta_Seconds;                                       // 0x2924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x2938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x2948(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x2968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2969(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x296C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x2970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BodyValid;                                                // 0x2974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x2975(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x2976(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x2977(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x2978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x2979(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x297A(0x0006) MISSED OFFSET
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            TempArray;                                                // 0x2988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x2998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x29A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x29A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x29B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x29B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageCameraShake;                                        // 0x29D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x29D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x29D9(0x0003) MISSED OFFSET
	float                                              Time_when_you_ll_be_able_to_splash_again;                 // 0x29DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentWaterMeshActor;                                    // 0x29E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x29E8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x2A70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2A7C(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x2A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Pawn_Charm_Skeletal_Mesh;                                 // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailsPS_Ref;                                         // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          WeaponMaterialOverride;                                   // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2AB9(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x2AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x2AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x2AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x2AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_RTT_Enabled;                                           // 0x2AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x2ADA(0x0002) MISSED OFFSET
	float                                              StartingMinCapsuleShadowVis;                              // 0x2ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShielded;                                               // 0x2AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2AE1(0x0003) MISSED OFFSET
	float                                              InstigatorCheckDistanceSqrd;                              // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideDustActivateSpeed;                                   // 0x2AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnSlideKickupFX_;                                   // 0x2AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2AED(0x0003) MISSED OFFSET
	class UParticleSystem*                             Effect_Player_ShieldActivate;                             // 0x2AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_PLayer_ShieldBreak;                                // 0x2AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GhostMode;                                                // 0x2B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2B01(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    OverrideAnimTrail;                                        // 0x2B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x2B10(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin
	unsigned char                                      UnknownData11[0x10];                                      // 0x2B20(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End
	bool                                               bIsInFrontendHologram;                                    // 0x2B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void ReInitFrontendPetDisplay();
	void GetHitPoint_FXLocation(class AActor* Object, struct FVector* OutputLocation);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnLanded(struct FHitResult Hit);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveDestroyed();
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void Entered_WaterVolume();
	void CharacterDestroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void AnimTrailsNotify(bool bActive);
	void AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, class UParticleSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName);
	void AnimTrailsDisable();
	void GameplayCue_Abilities_SpookyMist_Loop(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Shield_PotionConsumed(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int EntryPoint);
	void AnimNotify_End__DelegateSignature();
	void AnimNotify_Begin__DelegateSignature(bool bActive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
