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

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ShowDetails
struct UEventLeaderboardEntryDetails_C_ShowDetails_Params
{
	class UFortEventLeaderboardEntryData*              EntryData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct
struct UEventLeaderboardEntryDetails_C_Construct_Params
{
};

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
struct UEventLeaderboardEntryDetails_C_EventColorize_Params
{
	struct FFortTournamentDisplayInfo                  TournamentDisplayInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro
struct UEventLeaderboardEntryDetails_C_EventIntro_Params
{
};

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
struct UEventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
