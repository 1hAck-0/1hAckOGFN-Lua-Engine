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

// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
struct AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
struct AAthena_PlayerController_C_LeftAllVolumes_Params
{
	bool                                               bLeftVolumes;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
struct AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
	class APawn*                                       FinisherPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   FinishingWeapon;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDeathCause                                        DeathCause;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
struct AAthena_PlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
struct AAthena_PlayerController_C_Start_Victory_Royale_Music_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
struct AAthena_PlayerController_C_OnMusicPackLoaded_Params
{
	class UAthenaMusicPackItemDefinition*              NewMusicPack;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnLeaveVolume
struct AAthena_PlayerController_C_OnLeaveVolume_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnEnterVolume
struct AAthena_PlayerController_C_OnEnterVolume_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions
struct AAthena_PlayerController_C_HandlePermissions_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
struct AAthena_PlayerController_C_GrantItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
struct AAthena_PlayerController_C_RevokeItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.PermissionsChanged
struct AAthena_PlayerController_C_PermissionsChanged_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
struct AAthena_PlayerController_C_OnLocalInteraction_Params
{
	class AActor*                                      ReceivingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
struct AAthena_PlayerController_C_RemoveItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.RevokeCreativeTool
struct AAthena_PlayerController_C_RevokeCreativeTool_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
struct AAthena_PlayerController_C_ReactToPawnPossession_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
struct AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
