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

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatPrimaryAction
struct AShoppingCartVehicleSK_C_GetVehicleSeatPrimaryAction_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionLabels
struct AShoppingCartVehicleSK_C_GetVehicleSeatActionLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatLabels
struct AShoppingCartVehicleSK_C_GetVehicleSeatLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionNames
struct AShoppingCartVehicleSK_C_GetVehicleSeatActionNames_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateDynamicCameraShake
struct AShoppingCartVehicleSK_C_UpdateDynamicCameraShake_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.IsLocalPlayerRiding
struct AShoppingCartVehicleSK_C_IsLocalPlayerRiding_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_CorrectiveImpulse
struct AShoppingCartVehicleSK_C_OnRep_CorrectiveImpulse_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PlayHapticsOnHit
struct AShoppingCartVehicleSK_C_PlayHapticsOnHit_Params
{
	float                                              HitMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachWeaponToCart
struct AShoppingCartVehicleSK_C_AttachWeaponToCart_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_ImpulseVector
struct AShoppingCartVehicleSK_C_OnRep_ImpulseVector_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UserConstructionScript
struct AShoppingCartVehicleSK_C_UserConstructionScript_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnCollisionHitEffects
struct AShoppingCartVehicleSK_C_OnCollisionHitEffects_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormalImpulse;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitFrictionImpulse;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      HitSurfaceType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ApplyImpulse
struct AShoppingCartVehicleSK_C_ApplyImpulse_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.BndEvt__Box_K2Node_ComponentBoundEvent
struct AShoppingCartVehicleSK_C_BndEvt__Box_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachToCart
struct AShoppingCartVehicleSK_C_AttachToCart_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.DropItems
struct AShoppingCartVehicleSK_C_DropItems_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateMovementCosmeticParameters
struct AShoppingCartVehicleSK_C_UpdateMovementCosmeticParameters_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDeathPlayEffects
struct AShoppingCartVehicleSK_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveTick
struct AShoppingCartVehicleSK_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PedalForceFeedback
struct AShoppingCartVehicleSK_C_PedalForceFeedback_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnEnterVehicle
struct AShoppingCartVehicleSK_C_OnPawnEnterVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnWeaponEquipped
struct AShoppingCartVehicleSK_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.RocketSpawned
struct AShoppingCartVehicleSK_C_RocketSpawned_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnExitVehicle
struct AShoppingCartVehicleSK_C_OnPawnExitVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExitSocketName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDamaged
struct AShoppingCartVehicleSK_C_OnDamaged_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.Update Damage State
struct AShoppingCartVehicleSK_C_Update_Damage_State_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveEndPlay
struct AShoppingCartVehicleSK_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnSpringCompression
struct AShoppingCartVehicleSK_C_OnSpringCompression_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnEnteredWaterVolume
struct AShoppingCartVehicleSK_C_OnEnteredWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnExitedWaterVolume
struct AShoppingCartVehicleSK_C_OnExitedWaterVolume_Params
{
	struct FVector                                     WaterSurfacePoint;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CheckWater
struct AShoppingCartVehicleSK_C_CheckWater_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PawnHitByVehicle
struct AShoppingCartVehicleSK_C_PawnHitByVehicle_Params
{
	class AFortPawn*                                   Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     LaunchVector;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnStopTick
struct AShoppingCartVehicleSK_C_OnStopTick_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsCoastingChanged
struct AShoppingCartVehicleSK_C_OnIsCoastingChanged_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsSprintingChanged
struct AShoppingCartVehicleSK_C_OnIsSprintingChanged_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverRumble
struct AShoppingCartVehicleSK_C_StopDriverRumble_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverRumble
struct AShoppingCartVehicleSK_C_StartDriverRumble_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverCameraShake
struct AShoppingCartVehicleSK_C_StartDriverCameraShake_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopCoastCameraShake
struct AShoppingCartVehicleSK_C_StopCoastCameraShake_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverCameraShake
struct AShoppingCartVehicleSK_C_StopDriverCameraShake_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CanHitLastDriver
struct AShoppingCartVehicleSK_C_CanHitLastDriver_Params
{
};

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ExecuteUbergraph_ShoppingCartVehicleSK
struct AShoppingCartVehicleSK_C_ExecuteUbergraph_ShoppingCartVehicleSK_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
