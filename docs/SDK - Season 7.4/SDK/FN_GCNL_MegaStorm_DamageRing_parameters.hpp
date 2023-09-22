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

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.UserConstructionScript
struct AGCNL_MegaStorm_DamageRing_C_UserConstructionScript_Params
{
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline
struct AGCNL_MegaStorm_DamageRing_C_Timeline_Params
{
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay
struct AGCNL_MegaStorm_DamageRing_C_ReceiveBeginPlay_Params
{
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart
struct AGCNL_MegaStorm_DamageRing_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval
struct AGCNL_MegaStorm_DamageRing_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset
struct AGCNL_MegaStorm_DamageRing_C_Reset_Params
{
};

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing
struct AGCNL_MegaStorm_DamageRing_C_ExecuteUbergraph_GCNL_MegaStorm_DamageRing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
