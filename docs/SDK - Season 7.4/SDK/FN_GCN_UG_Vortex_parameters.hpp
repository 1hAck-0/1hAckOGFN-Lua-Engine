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

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.UserConstructionScript
struct AGCN_UG_Vortex_C_UserConstructionScript_Params
{
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline
struct AGCN_UG_Vortex_C_Timeline_Params
{
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.K2_HandleGameplayCue
struct AGCN_UG_Vortex_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.ExecuteUbergraph_GCN_UG_Vortex
struct AGCN_UG_Vortex_C_ExecuteUbergraph_GCN_UG_Vortex_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
