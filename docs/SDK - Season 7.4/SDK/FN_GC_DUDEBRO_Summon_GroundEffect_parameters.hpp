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

// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.UserConstructionScript
struct AGC_DUDEBRO_Summon_GroundEffect_C_UserConstructionScript_Params
{
};

// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.Timeline
struct AGC_DUDEBRO_Summon_GroundEffect_C_Timeline_Params
{
};

// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.K2_HandleGameplayCue
struct AGC_DUDEBRO_Summon_GroundEffect_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect
struct AGC_DUDEBRO_Summon_GroundEffect_C_ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
