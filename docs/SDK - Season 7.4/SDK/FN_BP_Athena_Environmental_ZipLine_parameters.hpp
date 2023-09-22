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

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings
struct ABP_Athena_Environmental_ZipLine_C_Setup_Overlap_Bindings_Params
{
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline
struct ABP_Athena_Environmental_ZipLine_C_HandleEnterZipline_Params
{
	class AFortPlayerPawn*                             InPlayerPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings
struct ABP_Athena_Environmental_ZipLine_C_CheckForBuildings_Params
{
	class AFortPlayerPawn*                             Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BuildingNearby_;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse
struct ABP_Athena_Environmental_ZipLine_C_QuestCheckForUse_Params
{
	class AFortPlayerController*                       FortPlayerController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode
struct ABP_Athena_Environmental_ZipLine_C_GetCharacterCustomMovementMode_Params
{
	class APawn*                                       Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomMovement>                   CustomMovementMode;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining
struct ABP_Athena_Environmental_ZipLine_C_StartZipLining_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript
struct ABP_Athena_Environmental_ZipLine_C_UserConstructionScript_Params
{
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay
struct ABP_Athena_Environmental_ZipLine_C_ReceiveBeginPlay_Params
{
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized
struct ABP_Athena_Environmental_ZipLine_C_HandleOnMapInfoInitialized_Params
{
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged
struct ABP_Athena_Environmental_ZipLine_C_HandleOnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap
struct ABP_Athena_Environmental_ZipLine_C_HandleOnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap
struct ABP_Athena_Environmental_ZipLine_C_HandleOnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine
struct ABP_Athena_Environmental_ZipLine_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
