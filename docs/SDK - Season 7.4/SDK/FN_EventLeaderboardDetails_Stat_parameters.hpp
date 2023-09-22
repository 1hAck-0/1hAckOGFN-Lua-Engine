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

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData
struct UEventLeaderboardDetails_Stat_C_SetStatData_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumFractionalDigits;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct
struct UEventLeaderboardDetails_Stat_C_Construct_Params
{
};

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim
struct UEventLeaderboardDetails_Stat_C_EventStatAnim_Params
{
};

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat
struct UEventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
