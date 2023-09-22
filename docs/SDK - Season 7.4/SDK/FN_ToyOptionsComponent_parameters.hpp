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

// Function ToyOptionsComponent.ToyOptionsComponent_C.OnLocalInteract
struct UToyOptionsComponent_C_OnLocalInteract_Params
{
	class AFortPlayerPawn*                             InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortMatchmakingKnobsModal*                  ModalWidget;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
