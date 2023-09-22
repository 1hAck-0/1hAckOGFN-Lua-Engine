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

// Function FerretVehicle.FerretVehicle_C.QuestUpdate
struct AFerretVehicle_C_QuestUpdate_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.SendBoostTimeToMaterials
struct AFerretVehicle_C_SendBoostTimeToMaterials_Params
{
	float                                              BoostTimeValueForMID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.SendDamageValueToMaterials
struct AFerretVehicle_C_SendDamageValueToMaterials_Params
{
	float                                              SavedDamageValueForMID;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.SendHeadlightValueToMaterials
struct AFerretVehicle_C_SendHeadlightValueToMaterials_Params
{
	float                                              SavedHeadlightValueForMID;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.GetIconPlacement
struct AFerretVehicle_C_GetIconPlacement_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutExtents;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.DestroyOrDamageBuildingPiece
struct AFerretVehicle_C_DestroyOrDamageBuildingPiece_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckForHealth;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameplayEffectClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DestroyThreshold;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatPrimaryAction
struct AFerretVehicle_C_GetVehicleSeatPrimaryAction_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnRep_ImpactLocation
struct AFerretVehicle_C_OnRep_ImpactLocation_Params
{
};

// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionLabels
struct AFerretVehicle_C_GetVehicleSeatActionLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatLabels
struct AFerretVehicle_C_GetVehicleSeatLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionNames
struct AFerretVehicle_C_GetVehicleSeatActionNames_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FerretVehicle.FerretVehicle_C.OnRep_CorrectiveImpulse
struct AFerretVehicle_C_OnRep_CorrectiveImpulse_Params
{
};

// Function FerretVehicle.FerretVehicle_C.PlayHapticsOnHit
struct AFerretVehicle_C_PlayHapticsOnHit_Params
{
	float                                              HitMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Grind;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.AttachWeaponToCart
struct AFerretVehicle_C_AttachWeaponToCart_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnRep_ImpulseVector
struct AFerretVehicle_C_OnRep_ImpulseVector_Params
{
};

// Function FerretVehicle.FerretVehicle_C.UserConstructionScript
struct AFerretVehicle_C_UserConstructionScript_Params
{
};

// Function FerretVehicle.FerretVehicle_C.Timeline
struct AFerretVehicle_C_Timeline_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BoostTimeline__FinishedFunc
struct AFerretVehicle_C_BoostTimeline__FinishedFunc_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BoostTimeline__UpdateFunc
struct AFerretVehicle_C_BoostTimeline__UpdateFunc_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BoostRumbleEnd
struct AFerretVehicle_C_BoostRumbleEnd_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BoostCameraReverse
struct AFerretVehicle_C_BoostCameraReverse_Params
{
};

// Function FerretVehicle.FerretVehicle_C.LocalPassengerADS
struct AFerretVehicle_C_LocalPassengerADS_Params
{
	bool                                               IsADS;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.BoostEnd
struct AFerretVehicle_C_BoostEnd_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent
struct AFerretVehicle_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.UpdateBoostRumble
struct AFerretVehicle_C_UpdateBoostRumble_Params
{
};

// Function FerretVehicle.FerretVehicle_C.DestroyCooldown
struct AFerretVehicle_C_DestroyCooldown_Params
{
};

// Function FerretVehicle.FerretVehicle_C.BoostBegin
struct AFerretVehicle_C_BoostBegin_Params
{
};

// Function FerretVehicle.FerretVehicle_C.ReverseBoostTimeline
struct AFerretVehicle_C_ReverseBoostTimeline_Params
{
};

// Function FerretVehicle.FerretVehicle_C.StartBoostRumble
struct AFerretVehicle_C_StartBoostRumble_Params
{
};

// Function FerretVehicle.FerretVehicle_C.Handle Spring Compression Audio
struct AFerretVehicle_C_Handle_Spring_Compression_Audio_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnEnteredWaterVolume
struct AFerretVehicle_C_OnEnteredWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnExitedWaterVolume
struct AFerretVehicle_C_OnExitedWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.CheckWater
struct AFerretVehicle_C_CheckWater_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnSpringCompression_2
struct AFerretVehicle_C_OnSpringCompression_2_Params
{
};

// Function FerretVehicle.FerretVehicle_C.EBrakeBegin_2
struct AFerretVehicle_C_EBrakeBegin_2_Params
{
};

// Function FerretVehicle.FerretVehicle_C.EBrakeEnd_2
struct AFerretVehicle_C_EBrakeEnd_2_Params
{
};

// Function FerretVehicle.FerretVehicle_C.PowerSlideBegin_2
struct AFerretVehicle_C_PowerSlideBegin_2_Params
{
};

// Function FerretVehicle.FerretVehicle_C.PowerSlideEnd_2
struct AFerretVehicle_C_PowerSlideEnd_2_Params
{
};

// Function FerretVehicle.FerretVehicle_C.ReceiveBeginPlay
struct AFerretVehicle_C_ReceiveBeginPlay_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnStopTick
struct AFerretVehicle_C_OnStopTick_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnEngineStop
struct AFerretVehicle_C_OnEngineStop_Params
{
};

// Function FerretVehicle.FerretVehicle_C.ReceiveEndPlay
struct AFerretVehicle_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.BrakeCameraReverse
struct AFerretVehicle_C_BrakeCameraReverse_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnEngineStart
struct AFerretVehicle_C_OnEngineStart_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnLanding
struct AFerretVehicle_C_OnLanding_Params
{
};

// Function FerretVehicle.FerretVehicle_C.StopDriverCameraShake
struct AFerretVehicle_C_StopDriverCameraShake_Params
{
};

// Function FerretVehicle.FerretVehicle_C.StartDriverCameraShake
struct AFerretVehicle_C_StartDriverCameraShake_Params
{
};

// Function FerretVehicle.FerretVehicle_C.Update Damage State
struct AFerretVehicle_C_Update_Damage_State_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.Start Stop Engine Audio
struct AFerretVehicle_C_Start_Stop_Engine_Audio_Params
{
	bool                                               Starting;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.SmashedThroughBuildingPiece
struct AFerretVehicle_C_SmashedThroughBuildingPiece_Params
{
	struct FVector                                     ImpactPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.WeaponFired
struct AFerretVehicle_C_WeaponFired_Params
{
	EDualWeaponHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnDamaged
struct AFerretVehicle_C_OnDamaged_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.PawnHitByVehicle
struct AFerretVehicle_C_PawnHitByVehicle_Params
{
	class AFortPawn*                                   Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LaunchVector;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnPawnExitVehicle
struct AFerretVehicle_C_OnPawnExitVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExitSocketName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnWeaponEquipped
struct AFerretVehicle_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnHoldExitStarted
struct AFerretVehicle_C_OnHoldExitStarted_Params
{
	class AFortPawn*                                   ExitingPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExitDuration;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnHoldExitStopped
struct AFerretVehicle_C_OnHoldExitStopped_Params
{
	class AFortPawn*                                   ExitingPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnPawnEnterVehicle
struct AFerretVehicle_C_OnPawnEnterVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.OnDamagePlayEffects
struct AFerretVehicle_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FerretVehicle.FerretVehicle_C.K2_ApplyCosmeticWrap
struct AFerretVehicle_C_K2_ApplyCosmeticWrap_Params
{
	class UAthenaItemWrapDefinition*                   LoadedWrap;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.ChangeOutMaterials
struct AFerretVehicle_C_ChangeOutMaterials_Params
{
};

// Function FerretVehicle.FerretVehicle_C.GunOverheat
struct AFerretVehicle_C_GunOverheat_Params
{
};

// Function FerretVehicle.FerretVehicle_C.ReceiveDestroyed
struct AFerretVehicle_C_ReceiveDestroyed_Params
{
};

// Function FerretVehicle.FerretVehicle_C.PedalForceFeedback
struct AFerretVehicle_C_PedalForceFeedback_Params
{
};

// Function FerretVehicle.FerretVehicle_C.DamageEventTimedOut
struct AFerretVehicle_C_DamageEventTimedOut_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnCollisionHitEffects
struct AFerretVehicle_C_OnCollisionHitEffects_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormalImpulse;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitFrictionImpulse;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.CanHitLastDriver
struct AFerretVehicle_C_CanHitLastDriver_Params
{
};

// Function FerretVehicle.FerretVehicle_C.OnDeathPlayEffects
struct AFerretVehicle_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FerretVehicle.FerretVehicle_C.HideQuickBarForAbility
struct AFerretVehicle_C_HideQuickBarForAbility_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.SetHeadlightState
struct AFerretVehicle_C_SetHeadlightState_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.LightningSpark
struct AFerretVehicle_C_LightningSpark_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FerretVehicle.FerretVehicle_C.ExecuteUbergraph_FerretVehicle
struct AFerretVehicle_C_ExecuteUbergraph_FerretVehicle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
