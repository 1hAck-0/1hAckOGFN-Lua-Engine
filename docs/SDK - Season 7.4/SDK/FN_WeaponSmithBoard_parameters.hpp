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

// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomMeleeSchematics
struct AWeaponSmithBoard_C_GetCustomMeleeSchematics_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomRangedSchematics
struct AWeaponSmithBoard_C_GetCustomRangedSchematics_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithCustomStoredMeleeSchematics
struct AWeaponSmithBoard_C_PopulateSceneWithCustomStoredMeleeSchematics_Params
{
	TArray<class UFortAccountItem*>                    CustomizedMeleeWeaponSchematics;                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneFromCustomStoredRangedSchematics
struct AWeaponSmithBoard_C_PopulateSceneFromCustomStoredRangedSchematics_Params
{
	TArray<class UFortAccountItem*>                    CustomizedRangedWeaponSchematics;                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeMeleeSchematics
struct AWeaponSmithBoard_C_RandomizeMeleeSchematics_Params
{
	TArray<class UFortAccountItem*>                    MeleeSchematicsForBoard;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeRangedSchematics
struct AWeaponSmithBoard_C_RandomizeRangedSchematics_Params
{
	TArray<class UFortSchematicItem*>                  RangedSchematicsForBoard;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
struct AWeaponSmithBoard_C_UpdateVisibility_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestMeleeWeaponSchematics
struct AWeaponSmithBoard_C_PopulateSceneWithBestMeleeWeaponSchematics_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestRangedWeaponSchematics
struct AWeaponSmithBoard_C_PopulateSceneWithBestRangedWeaponSchematics_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Skeletal Mesh Slots
struct AWeaponSmithBoard_C_Populate_Skeletal_Mesh_Slots_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Ranged
struct AWeaponSmithBoard_C_Populate_Ranged_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.Generate StaticMesh Array
struct AWeaponSmithBoard_C_Generate_StaticMesh_Array_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Schematic Favs
struct AWeaponSmithBoard_C_Populate_Schematic_Favs_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.UserConstructionScript
struct AWeaponSmithBoard_C_UserConstructionScript_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.OnLoaded
struct AWeaponSmithBoard_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay
struct AWeaponSmithBoard_C_ReceiveBeginPlay_Params
{
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.LoadAsync
struct AWeaponSmithBoard_C_LoadAsync_Params
{
	class UStaticMeshComponent*                        MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
struct AWeaponSmithBoard_C_PopulateWeaponBoard_Params
{
	TEnumAsByte<EWeaponSmithBoardOrganizationEnum>     Organization;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
struct AWeaponSmithBoard_C_CameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
struct AWeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
