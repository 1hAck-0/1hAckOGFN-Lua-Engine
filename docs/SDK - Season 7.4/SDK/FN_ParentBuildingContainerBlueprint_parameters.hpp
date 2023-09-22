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

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables
struct AParentBuildingContainerBlueprint_C_GetTimeOfDayBlueprintDefaultVariables_Params
{
	struct FTimeOfDayBlueprintDefaultVariables         OutVariables;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.UserConstructionScript
struct AParentBuildingContainerBlueprint_C_UserConstructionScript_Params
{
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ReceiveBeginPlay
struct AParentBuildingContainerBlueprint_C_ReceiveBeginPlay_Params
{
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnDayPhaseChanged
struct AParentBuildingContainerBlueprint_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnSetSearched
struct AParentBuildingContainerBlueprint_C_OnSetSearched_Params
{
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.Loop Animation Curve
struct AParentBuildingContainerBlueprint_C_Loop_Animation_Curve_Params
{
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate
struct AParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData                             Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ExecuteUbergraph_ParentBuildingContainerBlueprint
struct AParentBuildingContainerBlueprint_C_ExecuteUbergraph_ParentBuildingContainerBlueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
