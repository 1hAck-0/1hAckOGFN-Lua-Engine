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

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ClientInteractActor
struct AQuestInteractionProp_Parent_C_ClientInteractActor_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OverrideDefaultMaterialInstance
struct AQuestInteractionProp_Parent_C_OverrideDefaultMaterialInstance_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeInAmbientSound
struct AQuestInteractionProp_Parent_C_FadeInAmbientSound_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ChangeMaterialElements
struct AQuestInteractionProp_Parent_C_ChangeMaterialElements_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnAmbientSound
struct AQuestInteractionProp_Parent_C_SpawnAmbientSound_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeOutAmbientSound
struct AQuestInteractionProp_Parent_C_FadeOutAmbientSound_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SwapMeshOnInteract
struct AQuestInteractionProp_Parent_C_SwapMeshOnInteract_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ScaleEffects
struct AQuestInteractionProp_Parent_C_ScaleEffects_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractedPlayerNetIDRef
struct AQuestInteractionProp_Parent_C_OnRep_InteractedPlayerNetIDRef_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.StorePlayerInteract
struct AQuestInteractionProp_Parent_C_StorePlayerInteract_Params
{
	class AFortPlayerController*                       InteractingPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractionEffects
struct AQuestInteractionProp_Parent_C_OnRep_InteractionEffects_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhereToSpawnRobot
struct AQuestInteractionProp_Parent_C_WhereToSpawnRobot_Params
{
	class AFortPlayerPawn*                             InteractingPlayerPawnRef;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RobotSpawnTransform;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.DoesPlayerHaveQuest
struct AQuestInteractionProp_Parent_C_DoesPlayerHaveQuest_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestValid;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       PlayerControllerRef;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.GiveQuestItemToInteractingPlayer
struct AQuestInteractionProp_Parent_C_GiveQuestItemToInteractingPlayer_Params
{
	class AFortPlayerController*                       Player_Controller_Ref;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhatStageIsPlayerOn
struct AQuestInteractionProp_Parent_C_WhatStageIsPlayerOn_Params
{
	class AFortPlayerController*                       PlayerControllerRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintGetInteractionString
struct AQuestInteractionProp_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintCanInteract
struct AQuestInteractionProp_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UserConstructionScript
struct AQuestInteractionProp_Parent_C_UserConstructionScript_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled
struct AQuestInteractionProp_Parent_C_OnCanceled_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady
struct AQuestInteractionProp_Parent_C_OnAllClientsReady_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnInteract
struct AQuestInteractionProp_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.PlayDialogOrLocalizedAudio
struct AQuestInteractionProp_Parent_C_PlayDialogOrLocalizedAudio_Params
{
	int                                                QuestCountInt;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerController*                       InteractedController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnBeginInteract
struct AQuestInteractionProp_Parent_C_BlueprintOnBeginInteract_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnRobot
struct AQuestInteractionProp_Parent_C_SpawnRobot_Params
{
	class AFortPlayerPawn*                             InteractingPlayerPawnRef;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.EffectsEvents
struct AQuestInteractionProp_Parent_C_EffectsEvents_Params
{
	class AFortPlayerPawn*                             InteractingPlayerPawn;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ReceiveBeginPlay
struct AQuestInteractionProp_Parent_C_ReceiveBeginPlay_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnQuestUpdated
struct AQuestInteractionProp_Parent_C_OnQuestUpdated_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UpdateQuestState
struct AQuestInteractionProp_Parent_C_UpdateQuestState_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ServerSuccessfulInteract
struct AQuestInteractionProp_Parent_C_ServerSuccessfulInteract_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BindActorHit
struct AQuestInteractionProp_Parent_C_BindActorHit_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Damaged
struct AQuestInteractionProp_Parent_C_Damaged_Params
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

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.resethitcheck
struct AQuestInteractionProp_Parent_C_resethitcheck_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.HandleMissionEvent_LocateQuestItem
struct AQuestInteractionProp_Parent_C_HandleMissionEvent_LocateQuestItem_Params
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

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnDebugParticle
struct AQuestInteractionProp_Parent_C_SpawnDebugParticle_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.QuestItemNoQuestMessage
struct AQuestInteractionProp_Parent_C_QuestItemNoQuestMessage_Params
{
	class AFortPlayerController*                       PlayerControllerRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent
struct AQuestInteractionProp_Parent_C_BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnDamageServer
struct AQuestInteractionProp_Parent_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Explode
struct AQuestInteractionProp_Parent_C_Explode_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.CheckProximity
struct AQuestInteractionProp_Parent_C_CheckProximity_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.IsPlayerNear
struct AQuestInteractionProp_Parent_C_IsPlayerNear_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Proximity_Conversation
struct AQuestInteractionProp_Parent_C_Proximity_Conversation_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TouchedMe
struct AQuestInteractionProp_Parent_C_TouchedMe_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.InteractionSpawnActor
struct AQuestInteractionProp_Parent_C_InteractionSpawnActor_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticlePreActivate
struct AQuestInteractionProp_Parent_C_TriggerParticlePreActivate_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticleInteractionSucceeded
struct AQuestInteractionProp_Parent_C_TriggerParticleInteractionSucceeded_Params
{
};

// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ExecuteUbergraph_QuestInteractionProp_Parent
struct AQuestInteractionProp_Parent_C_ExecuteUbergraph_QuestInteractionProp_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
