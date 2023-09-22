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

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
struct UAnimSharingStateInstance_GetInstancedActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AnimationSharing.AnimationSharingManager.AnimSharingEnabled
struct UAnimationSharingManager_AnimSharingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
struct UAnimationSharingStateProcessor_ProcessActorState_Params
{
	int                                                OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OnDemandState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldProcess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
struct UAnimationSharingStateProcessor_GetAnimationStateEnum_Params
{
	class UEnum*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
