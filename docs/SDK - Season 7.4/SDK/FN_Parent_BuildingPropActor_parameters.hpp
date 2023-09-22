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

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.GetTimeOfDayBlueprintDefaultVariables
struct AParent_BuildingPropActor_C_GetTimeOfDayBlueprintDefaultVariables_Params
{
	struct FTimeOfDayBlueprintDefaultVariables         OutVariables;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Call Animation Curve Again
struct AParent_BuildingPropActor_C_Call_Animation_Curve_Again_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Add to TOD Light Array
struct AParent_BuildingPropActor_C_Add_to_TOD_Light_Array_Params
{
	class ULightComponent*                             NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set  MID Values For Lights
struct AParent_BuildingPropActor_C_Set__MID_Values_For_Lights_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters
struct AParent_BuildingPropActor_C_Set_Light_parameters_Params
{
	float                                              Previous_to_Current_Day_Phase_Alpha;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript
struct AParent_BuildingPropActor_C_UserConstructionScript_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged
struct AParent_BuildingPropActor_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay
struct AParent_BuildingPropActor_C_ReceiveBeginPlay_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate
struct AParent_BuildingPropActor_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData                             Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Loop Animation Curve
struct AParent_BuildingPropActor_C_Loop_Animation_Curve_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor
struct AParent_BuildingPropActor_C_ExecuteUbergraph_Parent_BuildingPropActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
