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

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent
struct UEventLeaderboardSummary_C_BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize
struct UEventLeaderboardSummary_C_EventColorize_Params
{
	struct FFortTournamentDisplayInfo                  TournamentDisplayInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP
struct UEventLeaderboardSummary_C_RefreshDataBP_Params
{
};

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary
struct UEventLeaderboardSummary_C_ExecuteUbergraph_EventLeaderboardSummary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature
struct UEventLeaderboardSummary_C_EventViewFullLeaderboard__DelegateSignature_Params
{
	struct FString                                     TournamentId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
