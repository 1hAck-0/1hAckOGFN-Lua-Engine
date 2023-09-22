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

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.SetMatches
struct UProfileStatsMatchesSubScreen_C_SetMatches_Params
{
	TArray<class UObject*>                             InDataProvider;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleBack
struct UProfileStatsMatchesSubScreen_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.Construct
struct UProfileStatsMatchesSubScreen_C_Construct_Params
{
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleStatViewChanged
struct UProfileStatsMatchesSubScreen_C_HandleStatViewChanged_Params
{
	class UAthenaBaseStatView*                         StatView;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.OnActivated
struct UProfileStatsMatchesSubScreen_C_OnActivated_Params
{
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent
struct UProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.ExecuteUbergraph_ProfileStatsMatchesSubScreen
struct UProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
