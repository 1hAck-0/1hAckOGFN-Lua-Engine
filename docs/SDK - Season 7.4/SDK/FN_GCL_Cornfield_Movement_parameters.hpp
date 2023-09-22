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

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.WhileActive
struct AGCL_Cornfield_Movement_C_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnActive
struct AGCL_Cornfield_Movement_C_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.OnRemove
struct AGCL_Cornfield_Movement_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.UserConstructionScript
struct AGCL_Cornfield_Movement_C_UserConstructionScript_Params
{
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ReceiveBeginPlay
struct AGCL_Cornfield_Movement_C_ReceiveBeginPlay_Params
{
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.On Player Step
struct AGCL_Cornfield_Movement_C_On_Player_Step_Params
{
};

// Function GCL_Cornfield_Movement.GCL_Cornfield_Movement_C.ExecuteUbergraph_GCL_Cornfield_Movement
struct AGCL_Cornfield_Movement_C_ExecuteUbergraph_GCL_Cornfield_Movement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
