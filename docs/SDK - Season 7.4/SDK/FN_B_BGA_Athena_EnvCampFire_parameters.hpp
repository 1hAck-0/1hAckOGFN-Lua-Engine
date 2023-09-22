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

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool
struct AB_BGA_Athena_EnvCampFire_C_OnRep_LitRepBool_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed
struct AB_BGA_Athena_EnvCampFire_C_OnRep_Destroyed_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7
struct AB_BGA_Athena_EnvCampFire_C_CheckIfUserIsSpecialS7_Params
{
	class AFortPawn*                                   PawnWhoLitFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UserIsSpecial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool
struct AB_BGA_Athena_EnvCampFire_C_RowToBool_Params
{
	struct FScalableFloat                              Input;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues
struct AB_BGA_Athena_EnvCampFire_C_SetSheetValues_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString
struct AB_BGA_Athena_EnvCampFire_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract
struct AB_BGA_Athena_EnvCampFire_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.UserConstructionScript
struct AB_BGA_Athena_EnvCampFire_C_UserConstructionScript_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady
struct AB_BGA_Athena_EnvCampFire_C_OnReady_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay
struct AB_BGA_Athena_EnvCampFire_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start
struct AB_BGA_Athena_EnvCampFire_C_Start_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp
struct AB_BGA_Athena_EnvCampFire_C_BuildingActorDestroyedCleanUp_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor
struct AB_BGA_Athena_EnvCampFire_C_BindToFloor_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed
struct AB_BGA_Athena_EnvCampFire_C_HandleBoundDestroyed_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut
struct AB_BGA_Athena_EnvCampFire_C_GoOut_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light
struct AB_BGA_Athena_EnvCampFire_C_Light_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled
struct AB_BGA_Athena_EnvCampFire_C_CheckDestroyDisabled_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract
struct AB_BGA_Athena_EnvCampFire_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut
struct AB_BGA_Athena_EnvCampFire_C_SpecialS7LightsFireAfterOut_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp
struct AB_BGA_Athena_EnvCampFire_C_KillDouseSmokeWisp_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated
struct AB_BGA_Athena_EnvCampFire_C_Server_QuestObjectiveUpdated_Params
{
	class AFortPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDef;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackendName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CompletionCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectiveCompleted;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition
struct AB_BGA_Athena_EnvCampFire_C_HandleCharacterVariantTransition_Params
{
	class AFortPawn*                                   TransitioningPawn;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire
struct AB_BGA_Athena_EnvCampFire_C_ExecuteUbergraph_B_BGA_Athena_EnvCampFire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
