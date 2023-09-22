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

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
struct APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
struct APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params
{
	bool                                               bConsumeEvent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
struct APlayerPawn_Athena_C_SetPartyInProgress_Params
{
	bool                                               bIsPartyInProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
struct APlayerPawn_Athena_C_SetPetHidden_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
struct APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdatePreDissolve
struct APlayerPawn_Athena_C_UpdatePreDissolve_Params
{
	float                                              GlowScalar;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
struct APlayerPawn_Athena_C_RestoreCharacterMats_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFX
struct APlayerPawn_Athena_C_SetupDissolveFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateTeleportationPointLight
struct APlayerPawn_Athena_C_UpdateTeleportationPointLight_Params
{
	struct FVector                                     NewWorldLoc;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IntensityScalar;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetDissolveValues
struct APlayerPawn_Athena_C_GetDissolveValues_Params
{
	float                                              ZheightNormScalar;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DissolveGradientDistance;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDissolveLocation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DissolveGradientDirectionColor;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DissolveGradientBaseLocColor;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFX
struct APlayerPawn_Athena_C_UpdateDissolveFX_Params
{
	float                                              Scalar_Transition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_ZHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_LightIntensity;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
struct APlayerPawn_Athena_C_SpawnTeleportationLight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
struct APlayerPawn_Athena_C_FindBounds_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
struct APlayerPawn_Athena_C_QueueTeleportOut_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
struct APlayerPawn_Athena_C_QueueTeleportIn_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
struct APlayerPawn_Athena_C_OnStartLongInteract_Params
{
	class AActor*                                      ReceivingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bConsumeEvent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bSkipSetInteractDuration;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bSkipStartAnimation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EItemInteractionType                               Out_ItemInteractionType;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
struct APlayerPawn_Athena_C_InWarmup_Params
{
	bool                                               InWarmup;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
struct APlayerPawn_Athena_C_StopLoopingAudio_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
struct APlayerPawn_Athena_C_EnableWaterAudio_Params
{
	bool                                               Is_Entering_Water;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
struct APlayerPawn_Athena_C_GetLocationInCircle_XY_Params
{
	struct FVector                                     LocationLocalSpace;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
struct APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
struct APlayerPawn_Athena_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__FinishedFunc
struct APlayerPawn_Athena_C_LightningFlashTL__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__UpdateFunc
struct APlayerPawn_Athena_C_LightningFlashTL__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__FinishedFunc
struct APlayerPawn_Athena_C_Storm_Audio_Fader__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__UpdateFunc
struct APlayerPawn_Athena_C_Storm_Audio_Fader__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline
struct APlayerPawn_Athena_C_Timeline_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__FinishedFunc
struct APlayerPawn_Athena_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__UpdateFunc
struct APlayerPawn_Athena_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__FinishedFunc
struct APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__UpdateFunc
struct APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventEnded
struct APlayerPawn_Athena_C_OnEventEnded_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventUpdated
struct APlayerPawn_Athena_C_OnEventUpdated_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventActive
struct APlayerPawn_Athena_C_OnEventActive_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
struct APlayerPawn_Athena_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
struct APlayerPawn_Athena_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
struct APlayerPawn_Athena_C_ReceiveDestroyed_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
struct APlayerPawn_Athena_C_SafeZoneStatusChanged_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
struct APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
struct APlayerPawn_Athena_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ContrailCheck
struct APlayerPawn_Athena_C_ContrailCheck_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
struct APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
struct APlayerPawn_Athena_C_RemoveStormFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartRandomLightningFlashes
struct APlayerPawn_Athena_C_StartRandomLightningFlashes_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RandomLightningFlashesRepeat
struct APlayerPawn_Athena_C_RandomLightningFlashesRepeat_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateInvulnerableVisuals
struct APlayerPawn_Athena_C_UpdateInvulnerableVisuals_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Lightning Flash Audio
struct APlayerPawn_Athena_C_Play_Lightning_Flash_Audio_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Start Storm Audio Fader
struct APlayerPawn_Athena_C_Start_Storm_Audio_Fader_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
struct APlayerPawn_Athena_C_OnEnteredWaterVolume_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
struct APlayerPawn_Athena_C_OnExitedWaterVolume_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
struct APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
struct APlayerPawn_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
struct APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
struct APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
struct APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOut
struct APlayerPawn_Athena_C_PlayResOut_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
struct APlayerPawn_Athena_C_OnResInDuringWarmup_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResInFX
struct APlayerPawn_Athena_C_PlayResInFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOutFX
struct APlayerPawn_Athena_C_PlayResOutFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Damage.OutsideSafeZone
struct APlayerPawn_Athena_C_GameplayCue_Athena_Damage_OutsideSafeZone_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
struct APlayerPawn_Athena_C_AddStormFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
struct APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params
{
	int                                                InSafeZonePhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnGameplayCue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
struct APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params
{
	int                                                NewWhichSafeZoneTag;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSpawnGameplayCue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
struct APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params
{
	int                                                SafeZonePhase;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
struct APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag
struct APlayerPawn_Athena_C_SetupColdTag_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
struct APlayerPawn_Athena_C_MeleeSwingLeft_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
struct APlayerPawn_Athena_C_MeleeSwingRight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReTrySetupDissolveFx
struct APlayerPawn_Athena_C_ReTrySetupDissolveFx_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FestivusAudioGE
struct APlayerPawn_Athena_C_FestivusAudioGE_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
struct APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
struct APlayerPawn_Athena_C_ResOut__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
struct APlayerPawn_Athena_C_ResIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
