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

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
struct AGC_Abilities_Death_FadeCapsule_Athena_C_SkeletalMeshSetup_Params
{
	class AFortPlayerPawnAthena*                       FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.UserConstructionScript
struct AGC_Abilities_Death_FadeCapsule_Athena_C_UserConstructionScript_Params
{
};

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
struct AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__FinishedFunc_Params
{
};

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
struct AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__UpdateFunc_Params
{
};

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
struct AGC_Abilities_Death_FadeCapsule_Athena_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
struct AGC_Abilities_Death_FadeCapsule_Athena_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
