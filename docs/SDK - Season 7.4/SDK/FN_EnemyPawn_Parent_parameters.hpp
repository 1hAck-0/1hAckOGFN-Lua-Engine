#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
struct AEnemyPawn_Parent_C_Orphaned_Params
{
	bool                                               IsOrphaned;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   AttachedPawn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeregisterEffectSkeletalMesh
struct AEnemyPawn_Parent_C_DeregisterEffectSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeregisterEffectStaticMesh
struct AEnemyPawn_Parent_C_DeregisterEffectStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ApplyAwakenEffectToStaticMesh
struct AEnemyPawn_Parent_C_ApplyAwakenEffectToStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ApplyAwakenEffectToSkeletalMesh
struct AEnemyPawn_Parent_C_ApplyAwakenEffectToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RegisterEffectStaticMesh
struct AEnemyPawn_Parent_C_RegisterEffectStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RegisterEffectSkeletalMesh
struct AEnemyPawn_Parent_C_RegisterEffectSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ApplyBuildingHitEffectToStaticMesh
struct AEnemyPawn_Parent_C_ApplyBuildingHitEffectToStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ApplyBuildingHitEffectToSkeletalMesh
struct AEnemyPawn_Parent_C_ApplyBuildingHitEffectToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DynamicMaterialArraySetup
struct AEnemyPawn_Parent_C_DynamicMaterialArraySetup_Params
{
	TArray<class UMaterialInterface*>                  Array_to_Check;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            Array_to_Store;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UMaterialInterface*                          New_Material;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Mesh_to_Assign_New_Material;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DeleteDuplicateCharacterElements
struct AEnemyPawn_Parent_C_DeleteDuplicateCharacterElements_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousPhysMaterialOnCharacterMesh
struct AEnemyPawn_Parent_C_RestorePreviousPhysMaterialOnCharacterMesh_Params
{
	float                                              Delay_in_Seconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetMinibossLightHiddenInGame
struct AEnemyPawn_Parent_C_SetMinibossLightHiddenInGame_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMinibossLight
struct AEnemyPawn_Parent_C_SpawnMinibossLight_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDsByMap
struct AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDsByMap_Params
{
	TMap<struct FName, float>                          Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDsByMap
struct AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDsByMap_Params
{
	TMap<struct FName, struct FLinearColor>            Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Propagate_to_Auxiliary_Meshes;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.TransformHitLocationWorldSpaceToPreskinnedLocalSpace
struct AEnemyPawn_Parent_C_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_Params
{
	struct FVector                                     PreskinnedLS;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetElementalParticlesHiddenInGame
struct AEnemyPawn_Parent_C_SetElementalParticlesHiddenInGame_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetDuplicateCharacterMeshHiddenInGame
struct AEnemyPawn_Parent_C_SetDuplicateCharacterMeshHiddenInGame_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CreateDuplicateCharacterElements
struct AEnemyPawn_Parent_C_CreateDuplicateCharacterElements_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
struct AEnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk_Params
{
	bool                                               ApplyPumpkinHeadMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugApplicationOrRemoval_;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterElements
struct AEnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterElements_Params
{
	float                                              Delay_in_Seconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
struct AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
struct AEnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh_Params
{
	class UParticleSystem*                             ParticleSystemTemplate;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponentReferenceVar;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AutoActivate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSComponentReference;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
struct AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params
{
	class UPhysicalMaterial*                           Physical_Material_Override;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterElements
struct AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterElements_Params
{
	class UMaterialInterface*                          New_Material_To_Apply;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
struct AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params
{
	struct FVector                                     Hit_Direction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveElementalParticles
struct AEnemyPawn_Parent_C_SetActiveElementalParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
struct AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
struct AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Propagate_to_Auxiliary_Meshes;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
struct AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params
{
	TArray<struct FLinearColor>                        ArrayOfColors;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
struct AEnemyPawn_Parent_C_StopDeathFX_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
struct AEnemyPawn_Parent_C_EnemyDeathVisuals_Params
{
	bool                                               HQ;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
struct AEnemyPawn_Parent_C_UserConstructionScript_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__FinishedFunc
struct AEnemyPawn_Parent_C_FadeMiniBossLightOutTL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__UpdateFunc
struct AEnemyPawn_Parent_C_FadeMiniBossLightOutTL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
struct AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
struct AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
struct AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
struct AEnemyPawn_Parent_C_ReceiveBeginPlay_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CE_StopDeathFX
struct AEnemyPawn_Parent_C_CE_StopDeathFX_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
struct AEnemyPawn_Parent_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
struct AEnemyPawn_Parent_C_BeginDeathFX_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualDespawnEnemy
struct AEnemyPawn_Parent_C_ManualDespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualEnemySpawnIn
struct AEnemyPawn_Parent_C_ManualEnemySpawnIn_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOut
struct AEnemyPawn_Parent_C_FadeMiniBossLightOut_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnInSafetyCheck
struct AEnemyPawn_Parent_C_SpawnInSafetyCheck_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
struct AEnemyPawn_Parent_C_PostSpawnIn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
struct AEnemyPawn_Parent_C_DespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
struct AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
struct AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
struct AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
struct AEnemyPawn_Parent_C_PawnUniqueIDSet_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
struct AEnemyPawn_Parent_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
struct AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
struct AEnemyPawn_Parent_C_OnBeginSleepEffects_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwakenEffect
struct AEnemyPawn_Parent_C_DestroyAwakenEffect_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
struct AEnemyPawn_Parent_C_OnEndSleepEffects_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
struct AEnemyPawn_Parent_C_RestorePreviousMaterialDelayCompleted_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
struct AEnemyPawn_Parent_C_RestorePreviousMaterialDelay_Params
{
	float                                              Delay_Amount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
struct AEnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE_Params
{
	bool                                               bShouldUseSpecialEventGE;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyBuildingHitEffect
struct AEnemyPawn_Parent_C_DestroyBuildingHitEffect_Params
{
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBuildingHitPlayEffects
struct AEnemyPawn_Parent_C_OnBuildingHitPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bPlayerPlaced;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
struct AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
