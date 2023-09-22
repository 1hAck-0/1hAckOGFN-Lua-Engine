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

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.Death FX Setup
struct AGC_NPC_Elemental_Ice_C_Death_FX_Setup_Params
{
	bool                                               Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AEnemyPawn_Parent_C*                         Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.OnRemove
struct AGC_NPC_Elemental_Ice_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.UserConstructionScript
struct AGC_NPC_Elemental_Ice_C_UserConstructionScript_Params
{
};

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.K2_HandleGameplayCue
struct AGC_NPC_Elemental_Ice_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.Rerun
struct AGC_NPC_Elemental_Ice_C_Rerun_Params
{
};

// Function GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C.ExecuteUbergraph_GC_NPC_Elemental_Ice
struct AGC_NPC_Elemental_Ice_C_ExecuteUbergraph_GC_NPC_Elemental_Ice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
