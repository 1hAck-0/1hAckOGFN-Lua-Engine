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

// BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C
// 0x05F4 (0x2534 - 0x1F40)
class AEnemyPawn_Parent_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x1F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x1F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeMiniBossLightOutTL_Fade;                              // 0x1F58(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMiniBossLightOutTL__Direction;                        // 0x1F5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1F5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMiniBossLightOutTL;                                   // 0x1F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack;                     // 0x1F68(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack;                           // 0x1F6C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction;                            // 0x1F70(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1F71(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x1F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnemySpawnInTL_MiniBossFadeLight;                         // 0x1F80(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack;                         // 0x1F84(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack;                               // 0x1F88(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction;                                // 0x1F8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1F8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x1F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFX_SpawnRateScale;                                   // 0x1FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HQ_DeathFX_MaxDistance;                                   // 0x1FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x1FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x1FBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x1FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LQ_PS_Socket_Attach;                                      // 0x1FC4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Death_Socket;                                             // 0x1FCC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePOCScaleAndMaterials;                                  // 0x1FD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterial;                                // 0x1FD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterialValues;                          // 0x1FD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x1FD7(0x0001) MISSED OFFSET
	class UMaterialInterface*                          POCOverrideMaterial;                                      // 0x1FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialHairColor;                                     // 0x1FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialSkinColor;                                     // 0x1FF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialPantColor;                                     // 0x2000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialShirtColor;                                    // 0x2010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x2020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PseudoRandomNetworkedFloat;                               // 0x2028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRandomColorVariation;                                  // 0x202C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x202D(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                       // 0x2030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                       // 0x2040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                       // 0x2050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                      // 0x2060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 HieghtDistributionCurve;                                  // 0x2070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomizeMeshScale;                                       // 0x2078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2079(0x0007) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x2080(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Pumpkin_Head_MID;                                         // 0x20B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x20B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterElementalParticles;                              // 0x20C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x20C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x20C9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x20D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x20F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x2100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x2108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHead;                         // 0x2110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2111(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPCCharacterTypeHuskBasic;                             // 0x2118(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SpecialEventHalloweenPumpkinHead;                      // 0x2138(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PumpkinHeadPercentage;                                    // 0x2158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x215C(0x0004) MISSED OFFSET
	class UClass*                                      GE_SpecialEvent_Halloween_PumpkinHead;                    // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PumpkinHeadRotation;                                      // 0x2168(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadScale;                                         // 0x2174(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadOffset;                                        // 0x2180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Headshot_FX_Socket;                                       // 0x218C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2194(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Husk_Sleeping_Sound;                                      // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HuskSleepSound;                                           // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WakeUpParticleSystemComp;                                 // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x21B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x21B9(0x0007) MISSED OFFSET
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> AwakenFXSkeletalMeshes;                                   // 0x21C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> AwakenFXStaticMeshes;                                     // 0x2210(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AwokenMaxDistance;                                        // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwakenDuration;                                           // 0x2264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DestroyAwakenFXTimer;                                     // 0x2268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> BuildingHitFXSkeletalMeshes;                              // 0x2270(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> BuildingHitFXStaticMeshes;                                // 0x22C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BuildingHitDuration;                                      // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2314(0x0004) MISSED OFFSET
	struct FTimerHandle                                DestroyBuildingHitFXTimer;                                // 0x2318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFXSkeletonMeshComponent_C*                  TempFXSkeletalMesh;                                       // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              RegisteredSkeletalMeshesForEffects;                       // 0x2328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                RegisteredStaticMeshesForEffects;                         // 0x2338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasGlowColorsAssigned;                                    // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x2349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x234A(0x0006) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x2350(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID;                                             // 0x2358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     FrozenHuskMeshScale;                                      // 0x2368(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnFrozenHuskMesh;                                      // 0x2374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2375(0x0003) MISSED OFFSET
	class UParticleSystem*                             CharacterAmbientParticlesTemplate;                        // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DuplicateCharacterMID;                                    // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoneRefPosePosition;                                      // 0x2398(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiniBossSizeScale;                                        // 0x23A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        MiniBossLight;                                            // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MinibossPSComponent;                                      // 0x23B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MiniBossLightIntensity;                                   // 0x23C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterParticlesMaxDrawDistance;                        // 0x23C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x23CC(0x0004) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   Original_Phys_Material;                                   // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            Elemental_FXs;                                            // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMiniBoss;                                               // 0x23F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x23F1(0x0003) MISSED OFFSET
	struct FVector                                     SizeScale_FireElemental;                                  // 0x23F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SizeScale_FireElemental_Head;                             // 0x2400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x240C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DeathFX_MID_Index0;                                       // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Death_FX_MID_Index_1;                                     // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Use_Strands;                                      // 0x2420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x2421(0x0003) MISSED OFFSET
	struct FLinearColor                                DeathFX_EmissiveHot;                                      // 0x2424(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Death_FX_Emissive_Soft_Color;                             // 0x2434(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Change_Emissive;                                  // 0x2444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Customize_Visuals;                                // 0x2445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x2446(0x0002) MISSED OFFSET
	struct FLinearColor                                Ice_HandL;                                                // 0x2448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Ice_HandR;                                                // 0x2458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandL_Name;                                           // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandR_Name;                                           // 0x2470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ice_SpawnRateScale;                                       // 0x2478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_ElecFresExp;                                    // 0x247C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_SizeScale;                                      // 0x2480(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOScale;                                       // 0x248C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOBias;                                        // 0x2498(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_SpawnScaleRate;                                 // 0x24A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID_AuxObjs;                                     // 0x24A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             Auxillary_Objects;                                        // 0x24B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Restoring_Array_Index;                                    // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x24CC(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Duplicate_Auxillary_Objects;                              // 0x24D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Should_Use_Aux_Elemental_Particles;                       // 0x24E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseHeadShotFX;                                            // 0x24E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x24E2(0x0006) MISSED OFFSET
	class USoundBase*                                  Death_Dematerialize_Sound;                                // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HeadShot_Sound;                                           // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SleepingEnemyWakeStinger;                                 // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopDeathFX_Delay;                                        // 0x2500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x2504(0x0004) MISSED OFFSET
	class UParticleSystem*                             DeathParticleSystem_Additive;                             // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DeathParticleSystem_Additive_On_;                         // 0x2510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x2511(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Additive_Death_Effects;                                   // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Death_Effects_ColorOvrride;                               // 0x2520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathParticleSystem_Additive_Rate;                        // 0x2530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C");
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void DeregisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void DeregisterEffectStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyAwakenEffectToStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyAwakenEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void RegisterEffectStaticMesh(class UStaticMeshComponent* Mesh);
	void RegisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void DynamicMaterialArraySetup(TArray<class UMaterialInstanceDynamic*> Array_to_Store, class UMaterialInterface* New_Material, class UPrimitiveComponent* Mesh_to_Assign_New_Material, TArray<class UMaterialInterface*>* Array_to_Check);
	void DeleteDuplicateCharacterElements();
	void RestorePreviousPhysMaterialOnCharacterMesh(float Delay_in_Seconds);
	void SetMinibossLightHiddenInGame(bool Hidden);
	void SpawnMinibossLight();
	void SetScalarParameterOnAllCharacterMIDsByMap(TMap<struct FName, float> Map);
	void SetVectorParameterOnAllCharacterMIDsByMap(TMap<struct FName, struct FLinearColor> Map, bool Propagate_to_Auxiliary_Meshes);
	void TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS);
	void SetElementalParticlesHiddenInGame(bool Hidden);
	void SetDuplicateCharacterMeshHiddenInGame(bool Hidden);
	void CreateDuplicateCharacterElements(class UMaterialInterface* Material_to_Apply);
	void SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_);
	void RestorePreviousMaterialOnCharacterElements(float Delay_in_Seconds);
	void CharacterSpawnInSafetyCheck();
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference);
	void OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override);
	void OverrideMaterialAndCopyParametersOnCharacterElements(class UMaterialInterface* New_Material_To_Apply);
	void PlayAdditiveHitReacts(struct FVector Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetActiveElementalParticles(bool Active, bool Reset);
	void SetScalarParameterOnAllCharacterMIDs(struct FName Parameter_Name, float Scalar_Value);
	void SetVectorParameterOnAllCharacterMIDs(struct FName Parameter_Name, struct FVector Vector_Value, bool Propagate_to_Auxiliary_Meshes);
	void PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color);
	void StopDeathFX();
	void EnemyDeathVisuals(bool* HQ);
	void UserConstructionScript();
	void FadeMiniBossLightOutTL__FinishedFunc();
	void FadeMiniBossLightOutTL__UpdateFunc();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void ReceiveBeginPlay();
	void CE_StopDeathFX();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void BeginDeathFX();
	void ManualDespawnEnemy(struct FVector RiftLocationWS);
	void ManualEnemySpawnIn(struct FVector RiftLocationWS);
	void FadeMiniBossLightOut();
	void SpawnInSafetyCheck();
	void PostSpawnIn();
	void DespawnEnemy(struct FVector RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void PawnUniqueIDSet();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void AdditiveHitReactDelay();
	void OnBeginSleepEffects();
	void DestroyAwakenEffect();
	void OnEndSleepEffects();
	void RestorePreviousMaterialDelayCompleted();
	void RestorePreviousMaterialDelay(float Delay_Amount);
	void OnCheatUpdateSpecialEventGE(bool bShouldUseSpecialEventGE);
	void DestroyBuildingHitEffect();
	void OnBuildingHitPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct FGameplayEffectContextHandle EffectContext, bool bPlayerPlaced);
	void ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
