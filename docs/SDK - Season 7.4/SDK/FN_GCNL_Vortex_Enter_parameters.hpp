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

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.UserConstructionScript
struct AGCNL_Vortex_Enter_C_UserConstructionScript_Params
{
};

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.FadePPVol__FinishedFunc
struct AGCNL_Vortex_Enter_C_FadePPVol__FinishedFunc_Params
{
};

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.FadePPVol__UpdateFunc
struct AGCNL_Vortex_Enter_C_FadePPVol__UpdateFunc_Params
{
};

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.OnLoopingStart
struct AGCNL_Vortex_Enter_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.OnRemoval
struct AGCNL_Vortex_Enter_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Vortex_Enter.GCNL_Vortex_Enter_C.ExecuteUbergraph_GCNL_Vortex_Enter
struct AGCNL_Vortex_Enter_C_ExecuteUbergraph_GCNL_Vortex_Enter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
