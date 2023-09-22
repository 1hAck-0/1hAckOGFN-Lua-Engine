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

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
struct ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params
{
	TScriptInterface<class UFortInventoryOwnerInterface> InventoryOwner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberBGtoReturn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
struct ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberBGtoTake;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
struct ABP_ReadyUp_Interact_C_OnRep_CanInteract_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
struct ABP_ReadyUp_Interact_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
struct ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
struct ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript
struct ABP_ReadyUp_Interact_C_UserConstructionScript_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled
struct ABP_ReadyUp_Interact_C_OnCanceled_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady
struct ABP_ReadyUp_Interact_C_OnAllClientsReady_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
struct ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
struct ABP_ReadyUp_Interact_C_ReceiveBeginPlay_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
struct ABP_ReadyUp_Interact_C_OpenMissionControl_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
struct ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
struct ABP_ReadyUp_Interact_C_VoteCalled_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteStatus                                    VoteStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVoter>                              Voters;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.DisableDifficultyVoting
struct ABP_ReadyUp_Interact_C_DisableDifficultyVoting_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.AtlasUnsupported
struct ABP_ReadyUp_Interact_C_AtlasUnsupported_Params
{
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_Supported
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_Supported_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_UnSupported
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_UnSupported_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_ActivatePrimary
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_ActivatePrimary_Params
{
	struct FGuid                                       InMissionGuid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                     Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GenericInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenericFloat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       GenericText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
struct ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
