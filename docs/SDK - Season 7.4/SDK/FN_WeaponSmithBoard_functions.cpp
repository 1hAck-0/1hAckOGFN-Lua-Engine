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

// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomMeleeSchematics
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::GetCustomMeleeSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomMeleeSchematics");

	AWeaponSmithBoard_C_GetCustomMeleeSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomRangedSchematics
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::GetCustomRangedSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomRangedSchematics");

	AWeaponSmithBoard_C_GetCustomRangedSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithCustomStoredMeleeSchematics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*> CustomizedMeleeWeaponSchematics (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>* CustomizedMeleeWeaponSchematics)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithCustomStoredMeleeSchematics");

	AWeaponSmithBoard_C_PopulateSceneWithCustomStoredMeleeSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomizedMeleeWeaponSchematics != nullptr)
		*CustomizedMeleeWeaponSchematics = params.CustomizedMeleeWeaponSchematics;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneFromCustomStoredRangedSchematics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*> CustomizedRangedWeaponSchematics (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>* CustomizedRangedWeaponSchematics)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneFromCustomStoredRangedSchematics");

	AWeaponSmithBoard_C_PopulateSceneFromCustomStoredRangedSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomizedRangedWeaponSchematics != nullptr)
		*CustomizedRangedWeaponSchematics = params.CustomizedRangedWeaponSchematics;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeMeleeSchematics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*> MeleeSchematicsForBoard        (Parm, OutParm, ZeroConstructor)

void AWeaponSmithBoard_C::RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeMeleeSchematics");

	AWeaponSmithBoard_C_RandomizeMeleeSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeleeSchematicsForBoard != nullptr)
		*MeleeSchematicsForBoard = params.MeleeSchematicsForBoard;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeRangedSchematics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSchematicItem*> RangedSchematicsForBoard       (Parm, OutParm, ZeroConstructor)

void AWeaponSmithBoard_C::RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeRangedSchematics");

	AWeaponSmithBoard_C_RandomizeRangedSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RangedSchematicsForBoard != nullptr)
		*RangedSchematicsForBoard = params.RangedSchematicsForBoard;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility");

	AWeaponSmithBoard_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestMeleeWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::PopulateSceneWithBestMeleeWeaponSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestMeleeWeaponSchematics");

	AWeaponSmithBoard_C_PopulateSceneWithBestMeleeWeaponSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestRangedWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::PopulateSceneWithBestRangedWeaponSchematics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestRangedWeaponSchematics");

	AWeaponSmithBoard_C_PopulateSceneWithBestRangedWeaponSchematics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Skeletal Mesh Slots
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Skeletal_Mesh_Slots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Skeletal Mesh Slots");

	AWeaponSmithBoard_C_Populate_Skeletal_Mesh_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Ranged
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Ranged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Ranged");

	AWeaponSmithBoard_C_Populate_Ranged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Generate StaticMesh Array
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Generate_StaticMesh_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.Generate StaticMesh Array");

	AWeaponSmithBoard_C_Generate_StaticMesh_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Schematic Favs
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Schematic_Favs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Schematic Favs");

	AWeaponSmithBoard_C_Populate_Schematic_Favs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.UserConstructionScript");

	AWeaponSmithBoard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponSmithBoard_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.OnLoaded");

	AWeaponSmithBoard_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponSmithBoard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay");

	AWeaponSmithBoard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.LoadAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponSmithBoard_C::LoadAsync(class UStaticMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.LoadAsync");

	AWeaponSmithBoard_C_LoadAsync_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponSmithBoardOrganizationEnum> Organization                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponSmithBoard_C::PopulateWeaponBoard(TEnumAsByte<EWeaponSmithBoardOrganizationEnum> Organization)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard");

	AWeaponSmithBoard_C_PopulateWeaponBoard_Params params;
	params.Organization = Organization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponSmithBoard_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged");

	AWeaponSmithBoard_C_CameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponSmithBoard_C::ExecuteUbergraph_WeaponSmithBoard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard");

	AWeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
