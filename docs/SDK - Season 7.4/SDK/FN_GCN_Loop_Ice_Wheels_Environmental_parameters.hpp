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

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.SpawnEmittersAttachedToWheels
struct AGCN_Loop_Ice_Wheels_Environmental_C_SpawnEmittersAttachedToWheels_Params
{
	TArray<struct FName>                               Sockets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USceneComponent*                             AttachToComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShoppingCart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            SpawnedEmitters1;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.UserConstructionScript
struct AGCN_Loop_Ice_Wheels_Environmental_C_UserConstructionScript_Params
{
};

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnLoopingStart
struct AGCN_Loop_Ice_Wheels_Environmental_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnRemoval
struct AGCN_Loop_Ice_Wheels_Environmental_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ReceiveTick
struct AGCN_Loop_Ice_Wheels_Environmental_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental
struct AGCN_Loop_Ice_Wheels_Environmental_C_ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
