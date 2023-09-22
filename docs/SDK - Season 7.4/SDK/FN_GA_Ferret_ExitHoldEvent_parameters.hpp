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

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.EventReceived
struct UGA_Ferret_ExitHoldEvent_C_EventReceived_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_ActivateAbility
struct UGA_Ferret_ExitHoldEvent_C_K2_ActivateAbility_Params
{
};

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.K2_OnEndAbility
struct UGA_Ferret_ExitHoldEvent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Ferret_ExitHoldEvent.GA_Ferret_ExitHoldEvent_C.ExecuteUbergraph_GA_Ferret_ExitHoldEvent
struct UGA_Ferret_ExitHoldEvent_C_ExecuteUbergraph_GA_Ferret_ExitHoldEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
