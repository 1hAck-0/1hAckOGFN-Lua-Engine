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

// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.UserConstructionScript
struct AGCL_Athena_Blade_Jumping_C_UserConstructionScript_Params
{
};

// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.OnLoopingStart
struct AGCL_Athena_Blade_Jumping_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C.ExecuteUbergraph_GCL_Athena_Blade_Jumping
struct AGCL_Athena_Blade_Jumping_C_ExecuteUbergraph_GCL_Athena_Blade_Jumping_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
