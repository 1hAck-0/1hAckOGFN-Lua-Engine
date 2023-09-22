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

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
struct UMicIndicator_C_OnPlayerTalkingChanged_Params
{
	bool                                               bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.OnPlayerMuted
struct UMicIndicator_C_OnPlayerMuted_Params
{
	bool                                               bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
struct UMicIndicator_C_ExecuteUbergraph_MicIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
