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

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_LitRepBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool");

	AB_BGA_Athena_EnvCampFire_C_OnRep_LitRepBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed");

	AB_BGA_Athena_EnvCampFire_C_OnRep_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnWhoLitFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UserIsSpecial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7");

	AB_BGA_Athena_EnvCampFire_C_CheckIfUserIsSpecialS7_Params params;
	params.PawnWhoLitFire = PawnWhoLitFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIsSpecial != nullptr)
		*UserIsSpecial = params.UserIsSpecial;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_BGA_Athena_EnvCampFire_C::RowToBool(struct FScalableFloat Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool");

	AB_BGA_Athena_EnvCampFire_C_RowToBool_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SetSheetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues");

	AB_BGA_Athena_EnvCampFire_C_SetSheetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_BGA_Athena_EnvCampFire_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString");

	AB_BGA_Athena_EnvCampFire_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_BGA_Athena_EnvCampFire_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract");

	AB_BGA_Athena_EnvCampFire_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.UserConstructionScript");

	AB_BGA_Athena_EnvCampFire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_BGA_Athena_EnvCampFire_C::OnReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady");

	AB_BGA_Athena_EnvCampFire_C_OnReady_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay");

	AB_BGA_Athena_EnvCampFire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start");

	AB_BGA_Athena_EnvCampFire_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp");

	AB_BGA_Athena_EnvCampFire_C_BuildingActorDestroyedCleanUp_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::BindToFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor");

	AB_BGA_Athena_EnvCampFire_C_BindToFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::HandleBoundDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed");

	AB_BGA_Athena_EnvCampFire_C_HandleBoundDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::GoOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut");

	AB_BGA_Athena_EnvCampFire_C_GoOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light");

	AB_BGA_Athena_EnvCampFire_C_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::CheckDestroyDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled");

	AB_BGA_Athena_EnvCampFire_C_CheckDestroyDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract");

	AB_BGA_Athena_EnvCampFire_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SpecialS7LightsFireAfterOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut");

	AB_BGA_Athena_EnvCampFire_C_SpecialS7LightsFireAfterOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::KillDouseSmokeWisp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp");

	AB_BGA_Athena_EnvCampFire_C_KillDouseSmokeWisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestDef                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BackendName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CompletionCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectiveCompleted             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, struct FName BackendName, int CompletionCount, bool ObjectiveCompleted, bool QuestCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated");

	AB_BGA_Athena_EnvCampFire_C_Server_QuestObjectiveUpdated_Params params;
	params.Controller = Controller;
	params.QuestDef = QuestDef;
	params.BackendName = BackendName;
	params.CompletionCount = CompletionCount;
	params.ObjectiveCompleted = ObjectiveCompleted;
	params.QuestCompleted = QuestCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               TransitioningPawn              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition");

	AB_BGA_Athena_EnvCampFire_C_HandleCharacterVariantTransition_Params params;
	params.TransitioningPawn = TransitioningPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire");

	AB_BGA_Athena_EnvCampFire_C_ExecuteUbergraph_B_BGA_Athena_EnvCampFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
