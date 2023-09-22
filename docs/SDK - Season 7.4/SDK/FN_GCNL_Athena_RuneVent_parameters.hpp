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

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.OnRemove
struct AGCNL_Athena_RuneVent_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.Activated
struct AGCNL_Athena_RuneVent_C_Activated_Params
{
	class AActor*                                      PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.WhileActive
struct AGCNL_Athena_RuneVent_C_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.UserConstructionScript
struct AGCNL_Athena_RuneVent_C_UserConstructionScript_Params
{
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.K2_HandleGameplayCue
struct AGCNL_Athena_RuneVent_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveTick
struct AGCNL_Athena_RuneVent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ReceiveBeginPlay
struct AGCNL_Athena_RuneVent_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExpireTell
struct AGCNL_Athena_RuneVent_C_ExpireTell_Params
{
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ClearExpireTell
struct AGCNL_Athena_RuneVent_C_ClearExpireTell_Params
{
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.PlayExpirationSound
struct AGCNL_Athena_RuneVent_C_PlayExpirationSound_Params
{
};

// Function GCNL_Athena_RuneVent.GCNL_Athena_RuneVent_C.ExecuteUbergraph_GCNL_Athena_RuneVent
struct AGCNL_Athena_RuneVent_C_ExecuteUbergraph_GCNL_Athena_RuneVent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
