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

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.UserConstructionScript
struct AGCNL_EnvCampFire_Fire_C_UserConstructionScript_Params
{
};

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__FinishedFunc
struct AGCNL_EnvCampFire_Fire_C_Darken_Logs__FinishedFunc_Params
{
};

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__UpdateFunc
struct AGCNL_EnvCampFire_Fire_C_Darken_Logs__UpdateFunc_Params
{
};

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnLoopingStart
struct AGCNL_EnvCampFire_Fire_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnRemoval
struct AGCNL_EnvCampFire_Fire_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ExecuteUbergraph_GCNL_EnvCampFire_Fire
struct AGCNL_EnvCampFire_Fire_C_ExecuteUbergraph_GCNL_EnvCampFire_Fire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
