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

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
struct AGCNL_EdgeOfStorm_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
struct AGCNL_EdgeOfStorm_C_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
struct AGCNL_EdgeOfStorm_C_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.UserConstructionScript
struct AGCNL_EdgeOfStorm_C_UserConstructionScript_Params
{
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
struct AGCNL_EdgeOfStorm_C_Activated_Params
{
	struct FVector                                     EdgeOfStorm;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
struct AGCNL_EdgeOfStorm_C_Deactivated_Params
{
};

// Function GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
struct AGCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
