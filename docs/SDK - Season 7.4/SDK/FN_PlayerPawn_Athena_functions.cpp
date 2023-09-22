// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::LockonSearchCompleteTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut");

	APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConsumeEvent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnLockOnSearchCompleted(bool* bConsumeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted");

	APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bConsumeEvent != nullptr)
		*bConsumeEvent = params.bConsumeEvent;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPartyInProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetPartyInProgress(bool bIsPartyInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress");

	APlayerPawn_Athena_C_SetPartyInProgress_Params params;
	params.bIsPartyInProgress = bIsPartyInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetPetHidden(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden");

	APlayerPawn_Athena_C_SetPetHidden_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::CleanUpTeleportationFXLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight");

	APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdatePreDissolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GlowScalar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::UpdatePreDissolve(float GlowScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdatePreDissolve");

	APlayerPawn_Athena_C_UpdatePreDissolve_Params params;
	params.GlowScalar = GlowScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RestoreCharacterMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats");

	APlayerPawn_Athena_C_RestoreCharacterMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFX
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SetupDissolveFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFX");

	APlayerPawn_Athena_C_SetupDissolveFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateTeleportationPointLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewWorldLoc                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IntensityScalar                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::UpdateTeleportationPointLight(struct FVector NewWorldLoc, float IntensityScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateTeleportationPointLight");

	APlayerPawn_Athena_C_UpdateTeleportationPointLight_Params params;
	params.NewWorldLoc = NewWorldLoc;
	params.IntensityScalar = IntensityScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetDissolveValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ZheightNormScalar              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DissolveGradientDistance       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDissolveLocation          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DissolveGradientDirectionColor (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DissolveGradientBaseLocColor   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::GetDissolveValues(float ZheightNormScalar, float* DissolveGradientDistance, struct FVector* WorldDissolveLocation, struct FLinearColor* DissolveGradientDirectionColor, struct FLinearColor* DissolveGradientBaseLocColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetDissolveValues");

	APlayerPawn_Athena_C_GetDissolveValues_Params params;
	params.ZheightNormScalar = ZheightNormScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DissolveGradientDistance != nullptr)
		*DissolveGradientDistance = params.DissolveGradientDistance;
	if (WorldDissolveLocation != nullptr)
		*WorldDissolveLocation = params.WorldDissolveLocation;
	if (DissolveGradientDirectionColor != nullptr)
		*DissolveGradientDirectionColor = params.DissolveGradientDirectionColor;
	if (DissolveGradientBaseLocColor != nullptr)
		*DissolveGradientBaseLocColor = params.DissolveGradientBaseLocColor;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar_Transition              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_ZHeight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_LightIntensity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::UpdateDissolveFX(float Scalar_Transition, float Scalar_ZHeight, float Scalar_LightIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFX");

	APlayerPawn_Athena_C_UpdateDissolveFX_Params params;
	params.Scalar_Transition = Scalar_Transition;
	params.Scalar_ZHeight = Scalar_ZHeight;
	params.Scalar_LightIntensity = Scalar_LightIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SpawnTeleportationLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight");

	APlayerPawn_Athena_C_SpawnTeleportationLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::FindBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds");

	APlayerPawn_Athena_C_FindBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::QueueTeleportOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut");

	APlayerPawn_Athena_C_QueueTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::QueueTeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn");

	APlayerPawn_Athena_C_QueueTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReceivingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bConsumeEvent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bSkipSetInteractDuration   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bSkipStartAnimation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EItemInteractionType           Out_ItemInteractionType        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, EItemInteractionType* Out_ItemInteractionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract");

	APlayerPawn_Athena_C_OnStartLongInteract_Params params;
	params.ReceivingActor = ReceivingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_bConsumeEvent != nullptr)
		*Out_bConsumeEvent = params.Out_bConsumeEvent;
	if (Out_bSkipSetInteractDuration != nullptr)
		*Out_bSkipSetInteractDuration = params.Out_bSkipSetInteractDuration;
	if (Out_bSkipStartAnimation != nullptr)
		*Out_bSkipStartAnimation = params.Out_bSkipStartAnimation;
	if (Out_ItemInteractionType != nullptr)
		*Out_ItemInteractionType = params.Out_ItemInteractionType;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWarmup                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::InWarmup(bool* InWarmup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup");

	APlayerPawn_Athena_C_InWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWarmup != nullptr)
		*InWarmup = params.InWarmup;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::StopLoopingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio");

	APlayerPawn_Athena_C_StopLoopingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Entering_Water              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::EnableWaterAudio(bool Is_Entering_Water)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio");

	APlayerPawn_Athena_C_EnableWaterAudio_Params params;
	params.Is_Entering_Water = Is_Entering_Water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LocationLocalSpace             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::GetLocationInCircle_XY(struct FVector* LocationLocalSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY");

	APlayerPawn_Athena_C_GetLocationInCircle_XY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = params.LocationLocalSpace;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::InitAthenaFoleyAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio");

	APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript");

	APlayerPawn_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::LightningFlashTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__FinishedFunc");

	APlayerPawn_Athena_C_LightningFlashTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::LightningFlashTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.LightningFlashTL__UpdateFunc");

	APlayerPawn_Athena_C_LightningFlashTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::Storm_Audio_Fader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__FinishedFunc");

	APlayerPawn_Athena_C_Storm_Audio_Fader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::Storm_Audio_Fader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Storm Audio Fader__UpdateFunc");

	APlayerPawn_Athena_C_Storm_Audio_Fader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline
// (BlueprintEvent)

void APlayerPawn_Athena_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline");

	APlayerPawn_Athena_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::TFX_GlowCharacterMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__FinishedFunc");

	APlayerPawn_Athena_C_TFX_GlowCharacterMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::TFX_GlowCharacterMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_GlowCharacterMesh__UpdateFunc");

	APlayerPawn_Athena_C_TFX_GlowCharacterMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::TFX_ResOutCharacterMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__FinishedFunc");

	APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::TFX_ResOutCharacterMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.TFX_ResOutCharacterMesh__UpdateFunc");

	APlayerPawn_Athena_C_TFX_ResOutCharacterMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnEventEnded(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventEnded");

	APlayerPawn_Athena_C_OnEventEnded_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnEventUpdated(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventUpdated");

	APlayerPawn_Athena_C_OnEventUpdated_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnEventActive(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEventActive");

	APlayerPawn_Athena_C_OnEventActive_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed");

	APlayerPawn_Athena_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay");

	APlayerPawn_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed");

	APlayerPawn_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::SafeZoneStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged");

	APlayerPawn_Athena_C_SafeZoneStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Equipping(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping");

	APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects");

	APlayerPawn_Athena_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ContrailCheck
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ContrailCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ContrailCheck");

	APlayerPawn_Athena_C_ContrailCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Player_BeingRevivedFromDBNO(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO");

	APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RemoveStormFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX");

	APlayerPawn_Athena_C_RemoveStormFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartRandomLightningFlashes
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::StartRandomLightningFlashes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartRandomLightningFlashes");

	APlayerPawn_Athena_C_StartRandomLightningFlashes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RandomLightningFlashesRepeat
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RandomLightningFlashesRepeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RandomLightningFlashesRepeat");

	APlayerPawn_Athena_C_RandomLightningFlashesRepeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateInvulnerableVisuals
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::UpdateInvulnerableVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateInvulnerableVisuals");

	APlayerPawn_Athena_C_UpdateInvulnerableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Lightning Flash Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::Play_Lightning_Flash_Audio(struct FVector Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Lightning Flash Audio");

	APlayerPawn_Athena_C_Play_Lightning_Flash_Audio_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Start Storm Audio Fader
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::Start_Storm_Audio_Fader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Start Storm Audio Fader");

	APlayerPawn_Athena_C_Start_Storm_Audio_Fader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnEnteredWaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume");

	APlayerPawn_Athena_C_OnEnteredWaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnExitedWaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume");

	APlayerPawn_Athena_C_OnExitedWaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::NotifyTeammateSkydivedFromBus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus");

	APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay");

	APlayerPawn_Athena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnLeftReplayRelevancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy");

	APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnEnteredReplayRelevancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy");

	APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted");

	APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::PlayResOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOut");

	APlayerPawn_Athena_C_PlayResOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::OnResInDuringWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup");

	APlayerPawn_Athena_C_OnResInDuringWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResInFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::PlayResInFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResInFX");

	APlayerPawn_Athena_C_PlayResInFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOutFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::PlayResOutFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.PlayResOutFX");

	APlayerPawn_Athena_C_PlayResOutFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Damage.OutsideSafeZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Damage_OutsideSafeZone(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Damage.OutsideSafeZone");

	APlayerPawn_Athena_C_GameplayCue_Athena_Damage_OutsideSafeZone_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::AddStormFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX");

	APlayerPawn_Athena_C_AddStormFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSafeZonePhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnGameplayCue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetSafeZonePhaseAndGameplayCueTag(int InSafeZonePhase, bool bSpawnGameplayCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag");

	APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params params;
	params.InSafeZonePhase = InSafeZonePhase;
	params.bSpawnGameplayCue = bSpawnGameplayCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewWhichSafeZoneTag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSpawnGameplayCue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetSafeZoneTagWhenChanged(int NewWhichSafeZoneTag, struct FGameplayTag GameplayTag, bool bSpawnGameplayCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged");

	APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params params;
	params.NewWhichSafeZoneTag = NewWhichSafeZoneTag;
	params.GameplayTag = GameplayTag;
	params.bSpawnGameplayCue = bSpawnGameplayCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SafeZonePhase                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnOutsideSafeZonePhaseChanged(int SafeZonePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged");

	APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params params;
	params.SafeZonePhase = SafeZonePhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue");

	APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnReceivedStormSurgeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage");

	APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SetupColdTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag");

	APlayerPawn_Athena_C_SetupColdTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft");

	APlayerPawn_Athena_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight");

	APlayerPawn_Athena_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReTrySetupDissolveFx
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ReTrySetupDissolveFx()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReTrySetupDissolveFx");

	APlayerPawn_Athena_C_ReTrySetupDissolveFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FestivusAudioGE
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::FestivusAudioGE()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.FestivusAudioGE");

	APlayerPawn_Athena_C_FestivusAudioGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ExecuteUbergraph_PlayerPawn_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena");

	APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature");

	APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature");

	APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ResOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature");

	APlayerPawn_Athena_C_ResOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ResIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature");

	APlayerPawn_Athena_C_ResIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
