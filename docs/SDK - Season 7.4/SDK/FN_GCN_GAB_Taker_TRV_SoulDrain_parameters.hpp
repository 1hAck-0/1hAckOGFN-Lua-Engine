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

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.OnExecute
struct AGCN_GAB_Taker_TRV_SoulDrain_C_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.UserConstructionScript
struct AGCN_GAB_Taker_TRV_SoulDrain_C_UserConstructionScript_Params
{
};

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.K2_HandleGameplayCue
struct AGCN_GAB_Taker_TRV_SoulDrain_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C.ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain
struct AGCN_GAB_Taker_TRV_SoulDrain_C_ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
