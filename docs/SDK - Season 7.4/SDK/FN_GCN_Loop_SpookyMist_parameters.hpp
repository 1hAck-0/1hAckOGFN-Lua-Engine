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

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.GetSkeletalMeshes
struct AGCN_Loop_SpookyMist_C_GetSkeletalMeshes_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UserConstructionScript
struct AGCN_Loop_SpookyMist_C_UserConstructionScript_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__FinishedFunc
struct AGCN_Loop_SpookyMist_C_FadeInOut__FinishedFunc_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__UpdateFunc
struct AGCN_Loop_SpookyMist_C_FadeInOut__UpdateFunc_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart
struct AGCN_Loop_SpookyMist_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval
struct AGCN_Loop_SpookyMist_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick
struct AGCN_Loop_SpookyMist_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell
struct AGCN_Loop_SpookyMist_C_BeginExpireTell_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell
struct AGCN_Loop_SpookyMist_C_ClearExpireTell_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick
struct AGCN_Loop_SpookyMist_C_ExpireWarningTick_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility
struct AGCN_Loop_SpookyMist_C_UpdateTeamVisbility_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick
struct AGCN_Loop_SpookyMist_C_Audio_Tick_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract
struct AGCN_Loop_SpookyMist_C_StartedInteract_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract
struct AGCN_Loop_SpookyMist_C_EndedInteract_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist
struct AGCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
