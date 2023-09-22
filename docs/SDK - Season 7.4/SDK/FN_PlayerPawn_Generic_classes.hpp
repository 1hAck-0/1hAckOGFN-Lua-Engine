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

// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// 0x0460 (0x2638 - 0x21D8)
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SplashEffectsForEnteringOrExitingWater;                   // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GamplayWindInteractionEffects;                            // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Land;                                   // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Land;                                  // 0x21F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Water;                                 // 0x2200(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Water;                                  // 0x2208(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x2210(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailPS;                                              // 0x2218(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            SpeechBubbleComponent;                                    // 0x2228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         PlayerLight;                                              // 0x2230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShatterShield_Push;                                       // 0x2238(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShatterShield_Opacity;                                    // 0x223C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShatterShield_Highlight_Cracks;                           // 0x2240(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShatterShield__Direction;                                 // 0x2244(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2245(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShatterShield;                                            // 0x2248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                 // 0x2250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                          // 0x2258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                 // 0x2260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                          // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitByHuskProjectileClass;                                 // 0x2270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskRangedSound;                                     // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskMeleeSound;                                      // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SoulSuckVictimMontage;                                    // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeed;                                              // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Run_Particle_Activate_Speed;                              // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Dust_Activate_Speed;                                 // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Particle_Reset_Speed;                                // 0x229C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelocityVector;                                   // 0x22A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnRunKickupFX_;                                     // 0x22AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnWalkKickupFX_;                                    // 0x22AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x22AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater_1;                                              // 0x22AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x22B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNinjaInShadowStance_;                                   // 0x22BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22BD(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x22C0(0x0020) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Shield_Material;                                          // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            BodyShieldMIDArray;                                       // 0x22E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            HeadShieldMIDArray;                                       // 0x22F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Shield_Active;                                            // 0x2308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2309(0x0003) MISSED OFFSET
	float                                              Tick_Delta_Seconds;                                       // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Damage_Wave_Animation;                             // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Shield_Damage_Wave_Animation_Length;              // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              size;                                                     // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dying;                                                    // 0x231C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRippleAgain;                                           // 0x231D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x231E(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Shatter_Opacity;                                   // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Regen_Opacity;                                            // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Opacity;                                           // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Shield_opacity;                                   // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_PushMinValue;                                      // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Hit;                                        // 0x2354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Recover;                                    // 0x2355(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Shatter;                                    // 0x2356(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_FullHealth;                                 // 0x2357(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fully_Regened_Shield_health_Opacity;                      // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x2360(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x2380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2381(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x2384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x238C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            CharmShieldMIDArray;                                      // 0x2390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BodyValid;                                                // 0x23A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x23A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x23A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x23A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x23A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x23A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               On_Player_Built_Floor;                                    // 0x23A6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x23A7(0x0001) MISSED OFFSET
	struct FGameplayTag                                Event_NeedRoadsActive;                                    // 0x23A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NeedRoadsDeactive;                                  // 0x23B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads;                             // 0x23B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_BodySkeletalMesh;                                  // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_HeadSkeletalMesh;                                  // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_CharmSkeletalMesh;                                 // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x2418(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageCameraShake;                                        // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x2438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2439(0x0003) MISSED OFFSET
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x243C(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x24C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x24D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x24E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x24F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x24F1(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x2510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Water_Scene_Capture_Enabled;                              // 0x2511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x2512(0x0002) MISSED OFFSET
	float                                              StartingMinCapsuleShadowVis;                              // 0x2514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CachedEffect;                                             // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            WaterInteractionWakeMIDS;                                 // 0x2520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                WaterInteractionWakeMeshes;                               // 0x2530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Character_Calve_Length;                                   // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfCyclingWaterMeshes;                               // 0x2544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WaterTraceImpactNormalAndZHeightLocation;                 // 0x2548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerVelocity;                                           // 0x2558(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRunWalkWaterGroundFX;                               // 0x2564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2565(0x0003) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            Previous_MID;                                             // 0x2568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Weapon_MID;                                      // 0x2578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x2588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ArrayAlignment;                                           // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x2594(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  CharacterPartMaterials;                                   // 0x2598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Head_MID;                                        // 0x25A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Body_MID;                                        // 0x25B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Hat_MID;                                         // 0x25C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Backpack_MID;                                    // 0x25D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Charm_MID;                                       // 0x25E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Face_MID;                                        // 0x25F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      DuplicateHeadMesh;                                        // 0x2608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateBodyMesh;                                        // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateHatMesh;                                         // 0x2618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateBackpackMesh;                                    // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharmMesh;                                       // 0x2628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateFaceMesh;                                        // 0x2630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void Set_Body_Type_Sounds();
	void Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs(struct FName Parameter_Name, float Parameter_Value);
	void Set_Scalar_Parameter_on_Character_MIDs(struct FName Parameter_Name, float Parameter_Value);
	void Restore_Previous_Materials_on_Weapons_Mesh(class AFortWeapon* Weapon_to_Restore);
	void Restore_Previous_Materials_on_Character_Mesh();
	void Override_Materials_and_Copy_Parameters_on_Weapons_Mesh(class UMaterialInterface* Material_to_Apply);
	void TriggerGameplayWindEmitter(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void OnRep_On_Player_Built_Floor();
	void Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void ToggleShieldVisibility();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1);
	void SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push);
	void FindShieldOpacity();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void ShatterShield__FinishedFunc();
	void ShatterShield__UpdateFunc();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnLanded(struct FHitResult Hit);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ReceiveTick(float DeltaSeconds);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);
	void OnBaseChanged(class AActor* NewBase);
	void ReceivePossessed(class AController* NewController);
	void OnDisplaySentence(struct FText SpeechText);
	void OnClearSentence();
	void ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void BindWeaponSwap(float InDuration);
	void MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev);
	void UnBindWeaponSwap();
	void MultiEndSwap(class AFortWeapon* CurrentWeapon);
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void PlayGameplayWindEffect(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(struct FTransform NewTransform);
	void ReinitializeWeaponMaterials();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void OnLand_CE();
	void AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, class UParticleSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName);
	void AnimTrailsDisable();
	void AnimTrailsNotify(bool bActive);
	void ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
