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

// Function MountedTurret.MountedTurret_C.OnGetExitSocketTransform
struct AMountedTurret_C_OnGetExitSocketTransform_Params
{
	struct FName                                       ExitSocket;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SocketIndex;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bOutOverriderExitSocket;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutOverrideTransform;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.BP_CanInteract
struct AMountedTurret_C_BP_CanInteract_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.GetVehicleSeatPrimaryAction
struct AMountedTurret_C_GetVehicleSeatPrimaryAction_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.CurrentOverheatScalar
struct AMountedTurret_C_CurrentOverheatScalar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.GetIconPlacement
struct AMountedTurret_C_GetIconPlacement_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutExtents;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.GetVehicleSeatActionLabels
struct AMountedTurret_C_GetVehicleSeatActionLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MountedTurret.MountedTurret_C.GetVehicleSeatLabels
struct AMountedTurret_C_GetVehicleSeatLabels_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MountedTurret.MountedTurret_C.GetVehicleSeatActionNames
struct AMountedTurret_C_GetVehicleSeatActionNames_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   OverrideInputType;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MountedTurret.MountedTurret_C.UserConstructionScript
struct AMountedTurret_C_UserConstructionScript_Params
{
};

// Function MountedTurret.MountedTurret_C.OnNotifyEnd
struct AMountedTurret_C_OnNotifyEnd_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyBegin
struct AMountedTurret_C_OnNotifyBegin_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnInterrupted
struct AMountedTurret_C_OnInterrupted_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnBlendOut
struct AMountedTurret_C_OnBlendOut_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnCompleted
struct AMountedTurret_C_OnCompleted_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680
struct AMountedTurret_C_OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680
struct AMountedTurret_C_OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnInterrupted_BE998F90462B0AB8D888EB90F677D680
struct AMountedTurret_C_OnInterrupted_BE998F90462B0AB8D888EB90F677D680_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnBlendOut_BE998F90462B0AB8D888EB90F677D680
struct AMountedTurret_C_OnBlendOut_BE998F90462B0AB8D888EB90F677D680_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnCompleted_BE998F90462B0AB8D888EB90F677D680
struct AMountedTurret_C_OnCompleted_BE998F90462B0AB8D888EB90F677D680_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483
struct AMountedTurret_C_OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483
struct AMountedTurret_C_OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnInterrupted_C545F8F445E4AE78043EFD8678F12483
struct AMountedTurret_C_OnInterrupted_C545F8F445E4AE78043EFD8678F12483_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnBlendOut_C545F8F445E4AE78043EFD8678F12483
struct AMountedTurret_C_OnBlendOut_C545F8F445E4AE78043EFD8678F12483_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnCompleted_C545F8F445E4AE78043EFD8678F12483
struct AMountedTurret_C_OnCompleted_C545F8F445E4AE78043EFD8678F12483_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4
struct AMountedTurret_C_OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4
struct AMountedTurret_C_OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnInterrupted_DC5D83234D74654A536804AC35F92FE4
struct AMountedTurret_C_OnInterrupted_DC5D83234D74654A536804AC35F92FE4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnBlendOut_DC5D83234D74654A536804AC35F92FE4
struct AMountedTurret_C_OnBlendOut_DC5D83234D74654A536804AC35F92FE4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnCompleted_DC5D83234D74654A536804AC35F92FE4
struct AMountedTurret_C_OnCompleted_DC5D83234D74654A536804AC35F92FE4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnDeathPlayEffects
struct AMountedTurret_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MountedTurret.MountedTurret_C.OnPawnEnterVehicle
struct AMountedTurret_C_OnPawnEnterVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.OnPawnExitVehicle
struct AMountedTurret_C_OnPawnExitVehicle_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExitSocketName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.ReceiveEndPlay
struct AMountedTurret_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.ReceiveBeginPlay
struct AMountedTurret_C_ReceiveBeginPlay_Params
{
};

// Function MountedTurret.MountedTurret_C.Get Turret Weapon
struct AMountedTurret_C_Get_Turret_Weapon_Params
{
};

// Function MountedTurret.MountedTurret_C.Event On Weapon Fired
struct AMountedTurret_C_Event_On_Weapon_Fired_Params
{
	EDualWeaponHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.HideQuickBarForAbility
struct AMountedTurret_C_HideQuickBarForAbility_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MountedTurret.MountedTurret_C.UpdateOverheatCosmetics
struct AMountedTurret_C_UpdateOverheatCosmetics_Params
{
};

// Function MountedTurret.MountedTurret_C.Clear FX And AudioTimer
struct AMountedTurret_C_Clear_FX_And_AudioTimer_Params
{
};

// Function MountedTurret.MountedTurret_C.Handle Rotation Audio
struct AMountedTurret_C_Handle_Rotation_Audio_Params
{
};

// Function MountedTurret.MountedTurret_C.Start FX And Audio Timer
struct AMountedTurret_C_Start_FX_And_Audio_Timer_Params
{
};

// Function MountedTurret.MountedTurret_C.ExecuteUbergraph_MountedTurret
struct AMountedTurret_C_ExecuteUbergraph_MountedTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
