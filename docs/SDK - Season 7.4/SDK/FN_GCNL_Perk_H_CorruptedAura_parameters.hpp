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

// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.UserConstructionScript
struct AGCNL_Perk_H_CorruptedAura_C_UserConstructionScript_Params
{
};

// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.OnLoopingStart
struct AGCNL_Perk_H_CorruptedAura_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.ExecuteUbergraph_GCNL_Perk_H_CorruptedAura
struct AGCNL_Perk_H_CorruptedAura_C_ExecuteUbergraph_GCNL_Perk_H_CorruptedAura_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
