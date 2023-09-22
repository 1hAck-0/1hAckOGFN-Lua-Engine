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

// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.UserConstructionScript
struct AGCN_RiftSpawner_DMG_Stage_UserConstructionScript_Params
{
};

// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ReceiveBeginPlay
struct AGCN_RiftSpawner_DMG_Stage_ReceiveBeginPlay_Params
{
};

// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.OnLoopingStart
struct AGCN_RiftSpawner_DMG_Stage_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage
struct AGCN_RiftSpawner_DMG_Stage_ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
