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

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames
struct UEventLeaderboardEntry_C_SetTeamDisplayNames_Params
{
	class UFortEventLeaderboardEntryData*              Entry_Data;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails
struct UEventLeaderboardEntry_C_SetEntryDetails_Params
{
	class UFortEventLeaderboardEntryData*              EntryData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct
struct UEventLeaderboardEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet
struct UEventLeaderboardEntry_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected
struct UEventLeaderboardEntry_C_BP_OnSelected_Params
{
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected
struct UEventLeaderboardEntry_C_BP_OnDeselected_Params
{
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry
struct UEventLeaderboardEntry_C_EventStyleEntry_Params
{
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize
struct UEventLeaderboardEntry_C_EventColorize_Params
{
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded
struct UEventLeaderboardEntry_C_OnTeammateDisplayNameAdded_Params
{
	class UFortEventLeaderboardEntryData*              LeaderboardEntryData;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry
struct UEventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
