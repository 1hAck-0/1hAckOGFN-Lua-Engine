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

// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Environmental_ZipLine_C::Setup_Overlap_Bindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings");

	ABP_Athena_Environmental_ZipLine_C_Setup_Overlap_Bindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InPlayerPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::HandleEnterZipline(class AFortPlayerPawn* InPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline");

	ABP_Athena_Environmental_ZipLine_C_HandleEnterZipline_Params params;
	params.InPlayerPawn = InPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*         Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BuildingNearby_                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::CheckForBuildings(class AFortPlayerPawn* Player, bool* BuildingNearby_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings");

	ABP_Athena_Environmental_ZipLine_C_CheckForBuildings_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuildingNearby_ != nullptr)
		*BuildingNearby_ = params.BuildingNearby_;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPlayerController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::QuestCheckForUse(class AFortPlayerController* FortPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse");

	ABP_Athena_Environmental_ZipLine_C_QuestCheckForUse_Params params;
	params.FortPlayerController = FortPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomMovement> CustomMovementMode             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::GetCharacterCustomMovementMode(class APawn* Character, TEnumAsByte<EFortCustomMovement>* CustomMovementMode, TEnumAsByte<EMovementMode>* MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode");

	ABP_Athena_Environmental_ZipLine_C_GetCharacterCustomMovementMode_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomMovementMode != nullptr)
		*CustomMovementMode = params.CustomMovementMode;
	if (MovementMode != nullptr)
		*MovementMode = params.MovementMode;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::StartZipLining(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining");

	ABP_Athena_Environmental_ZipLine_C_StartZipLining_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Environmental_ZipLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript");

	ABP_Athena_Environmental_ZipLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_Environmental_ZipLine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay");

	ABP_Athena_Environmental_ZipLine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Environmental_ZipLine_C::HandleOnMapInfoInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized");

	ABP_Athena_Environmental_ZipLine_C_HandleOnMapInfoInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::HandleOnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged");

	ABP_Athena_Environmental_ZipLine_C_HandleOnMovementModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::HandleOnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap");

	ABP_Athena_Environmental_ZipLine_C_HandleOnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::HandleOnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap");

	ABP_Athena_Environmental_ZipLine_C_HandleOnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Environmental_ZipLine_C::ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine");

	ABP_Athena_Environmental_ZipLine_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
