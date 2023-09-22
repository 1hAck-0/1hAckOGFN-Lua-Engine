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

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetMaxAudibleDistance
struct AJackalVehicle_Athena_C_GetMaxAudibleDistance_Params
{
	float                                              Max_Distance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldBump
struct AJackalVehicle_Athena_C_ShouldBump_Params
{
	struct FVector                                     Hit_Normal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bump;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldDestroyProp?
struct AJackalVehicle_Athena_C_ShouldDestroyProp__Params
{
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DestroyBuildingPiece
struct AJackalVehicle_Athena_C_DestroyBuildingPiece_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DestroyThreshold;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UpdateSurfaceType
struct AJackalVehicle_Athena_C_UpdateSurfaceType_Params
{
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendBoostTimeToMaterials
struct AJackalVehicle_Athena_C_SendBoostTimeToMaterials_Params
{
	float                                              ParameterValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendHeadlightValueToMaterials
struct AJackalVehicle_Athena_C_SendHeadlightValueToMaterials_Params
{
	float                                              ParameterValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendDamageValueToMaterials
struct AJackalVehicle_Athena_C_SendDamageValueToMaterials_Params
{
	float                                              ParameterValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HapticsOnHit
struct AJackalVehicle_Athena_C_HapticsOnHit_Params
{
	float                                              HitMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.IsBoostCharging
struct AJackalVehicle_Athena_C_IsBoostCharging_Params
{
	bool                                               Is_Charging;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CurrentBoostCharge
struct AJackalVehicle_Athena_C_CurrentBoostCharge_Params
{
	float                                              Charge_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DeactivateComponents
struct AJackalVehicle_Athena_C_DeactivateComponents_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionLabels
struct AJackalVehicle_Athena_C_GetVehicleSeatActionLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatLabels
struct AJackalVehicle_Athena_C_GetVehicleSeatLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionNames
struct AJackalVehicle_Athena_C_GetVehicleSeatActionNames_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetIconPlacement
struct AJackalVehicle_Athena_C_GetIconPlacement_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutExtents;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UserConstructionScript
struct AJackalVehicle_Athena_C_UserConstructionScript_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnEnterVehicle
struct AJackalVehicle_Athena_C_OnPawnEnterVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnExitVehicle
struct AJackalVehicle_Athena_C_OnPawnExitVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExitSocketName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SetupCosmetics
struct AJackalVehicle_Athena_C_SetupCosmetics_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveBeginPlay
struct AJackalVehicle_Athena_C_ReceiveBeginPlay_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostBegin
struct AJackalVehicle_Athena_C_OnBoostBegin_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostEnd
struct AJackalVehicle_Athena_C_OnBoostEnd_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeBegin
struct AJackalVehicle_Athena_C_OnJumpChargeBegin_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeEnd
struct AJackalVehicle_Athena_C_OnJumpChargeEnd_Params
{
	float                                              Charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumped
struct AJackalVehicle_Athena_C_OnJumped_Params
{
	float                                              Charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnCollisionHitEffects
struct AJackalVehicle_Athena_C_OnCollisionHitEffects_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormalImpulse;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitFrictionImpulse;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnEnteredWaterVolume
struct AJackalVehicle_Athena_C_OnEnteredWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnExitedWaterVolume
struct AJackalVehicle_Athena_C_OnExitedWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CheckWaterEvent
struct AJackalVehicle_Athena_C_CheckWaterEvent_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StopDriverCameraShake
struct AJackalVehicle_Athena_C_StopDriverCameraShake_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StartDriverCameraShake
struct AJackalVehicle_Athena_C_StartDriverCameraShake_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnIsSprintingChanged
struct AJackalVehicle_Athena_C_OnIsSprintingChanged_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.K2_ApplyCosmeticWrap
struct AJackalVehicle_Athena_C_K2_ApplyCosmeticWrap_Params
{
	class UAthenaItemWrapDefinition*                   LoadedWrap;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ChangeOutMaterials
struct AJackalVehicle_Athena_C_ChangeOutMaterials_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnStopTick
struct AJackalVehicle_Athena_C_OnStopTick_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent
struct AJackalVehicle_Athena_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnDeathPlayEffects
struct AJackalVehicle_Athena_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStarted
struct AJackalVehicle_Athena_C_OnHoldExitStarted_Params
{
	class AFortPawn*                                   ExitingPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExitDuration;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStopped
struct AJackalVehicle_Athena_C_OnHoldExitStopped_Params
{
	class AFortPawn*                                   ExitingPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.VisualIndicator
struct AJackalVehicle_Athena_C_VisualIndicator_Params
{
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HideQuickBarForSecondaryAbility
struct AJackalVehicle_Athena_C_HideQuickBarForSecondaryAbility_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveEndPlay
struct AJackalVehicle_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ExecuteUbergraph_JackalVehicle_Athena
struct AJackalVehicle_Athena_C_ExecuteUbergraph_JackalVehicle_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
