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

// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::SetupPermissionRecheckTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer");

	AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLeftVolumes                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::LeftAllVolumes(bool* bLeftVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes");

	AAthena_PlayerController_C_LeftAllVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeftVolumes != nullptr)
		*bLeftVolumes = params.bLeftVolumes;
}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript");

	AAthena_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");

	AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay");

	AAthena_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   FinisherPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition* FinishingWeapon                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDeathCause                    DeathCause                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects");

	AAthena_PlayerController_C_PlayWinEffects_Params params;
	params.FinisherPawn = FinisherPawn;
	params.FinishingWeapon = FinishingWeapon;
	params.DeathCause = DeathCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay");

	AAthena_PlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::Start_Victory_Royale_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music");

	AAthena_PlayerController_C_Start_Victory_Royale_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition* NewMusicPack                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded");

	AAthena_PlayerController_C_OnMusicPackLoaded_Params params;
	params.NewMusicPack = NewMusicPack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLeaveVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnLeaveVolume(class AFortVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnLeaveVolume");

	AAthena_PlayerController_C_OnLeaveVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnEnterVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnEnterVolume(class AFortVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnEnterVolume");

	AAthena_PlayerController_C_OnEnterVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::HandlePermissions(class AFortVolume* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.HandlePermissions");

	AAthena_PlayerController_C_HandlePermissions_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::GrantItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.GrantItem");

	AAthena_PlayerController_C_GrantItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::RevokeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem");

	AAthena_PlayerController_C_RevokeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PermissionsChanged
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::PermissionsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PermissionsChanged");

	AAthena_PlayerController_C_PermissionsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ReceivingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnLocalInteraction(class AActor* ReceivingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction");

	AAthena_PlayerController_C_OnLocalInteraction_Params params;
	params.ReceivingActor = ReceivingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::RemoveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem");

	AAthena_PlayerController_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.RevokeCreativeTool
// (Event, Public, BlueprintEvent)

void AAthena_PlayerController_C::RevokeCreativeTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.RevokeCreativeTool");

	AAthena_PlayerController_C_RevokeCreativeTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ReactToPawnPossession(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession");

	AAthena_PlayerController_C_ReactToPawnPossession_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController");

	AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature");

	AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
