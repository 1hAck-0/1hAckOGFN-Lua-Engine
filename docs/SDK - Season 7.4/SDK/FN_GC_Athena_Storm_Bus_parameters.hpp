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

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Get Location in Circle XY
struct AGC_Athena_Storm_Bus_C_Get_Location_in_Circle_XY_Params
{
	struct FVector                                     LocationLocalSpace;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.UserConstructionScript
struct AGC_Athena_Storm_Bus_C_UserConstructionScript_Params
{
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__FinishedFunc
struct AGC_Athena_Storm_Bus_C_Lightining_Flash__FinishedFunc_Params
{
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__UpdateFunc
struct AGC_Athena_Storm_Bus_C_Lightining_Flash__UpdateFunc_Params
{
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.StartRandomLightningFlashes
struct AGC_Athena_Storm_Bus_C_StartRandomLightningFlashes_Params
{
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.OnLoopingStart
struct AGC_Athena_Storm_Bus_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Play Lightning Flash Audio
struct AGC_Athena_Storm_Bus_C_Play_Lightning_Flash_Audio_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.ExecuteUbergraph_GC_Athena_Storm_Bus
struct AGC_Athena_Storm_Bus_C_ExecuteUbergraph_GC_Athena_Storm_Bus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
