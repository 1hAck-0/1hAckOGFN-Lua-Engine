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

// Function GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C.UserConstructionScript
struct AGC_Melee_Edged_Sword_BlinkStrike_Launch_C_UserConstructionScript_Params
{
};

// Function GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C.OnLoopingStart
struct AGC_Melee_Edged_Sword_BlinkStrike_Launch_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C.OnRemoval
struct AGC_Melee_Edged_Sword_BlinkStrike_Launch_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Melee_Edged_Sword_BlinkStrike_Launch.GC_Melee_Edged_Sword_BlinkStrike_Launch_C.ExecuteUbergraph_GC_Melee_Edged_Sword_BlinkStrike_Launch
struct AGC_Melee_Edged_Sword_BlinkStrike_Launch_C_ExecuteUbergraph_GC_Melee_Edged_Sword_BlinkStrike_Launch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
