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

// Function Scoreboard_UI.Scoreboard_UI_C.UpdateScrollBasedOnTime
struct UScoreboard_UI_C_UpdateScrollBasedOnTime_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScrollLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard_UI.Scoreboard_UI_C.GetScoreboardStateNames
struct UScoreboard_UI_C_GetScoreboardStateNames_Params
{
	TArray<struct FText>                               OutNames;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Scoreboard_UI.Scoreboard_UI_C.UpdateStats
struct UScoreboard_UI_C_UpdateStats_Params
{
};

// Function Scoreboard_UI.Scoreboard_UI_C.Construct
struct UScoreboard_UI_C_Construct_Params
{
};

// Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameEndUI
struct UScoreboard_UI_C_OnDisplayMinigameEndUI_Params
{
	bool                                               bDisplay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameStartUI
struct UScoreboard_UI_C_OnDisplayMinigameStartUI_Params
{
	bool                                               bDisplay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard_UI.Scoreboard_UI_C.Tick
struct UScoreboard_UI_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard_UI.Scoreboard_UI_C.ShowMinigameEndUI
struct UScoreboard_UI_C_ShowMinigameEndUI_Params
{
};

// Function Scoreboard_UI.Scoreboard_UI_C.HideMinigameEndUI
struct UScoreboard_UI_C_HideMinigameEndUI_Params
{
};

// Function Scoreboard_UI.Scoreboard_UI_C.ExecuteUbergraph_Scoreboard_UI
struct UScoreboard_UI_C_ExecuteUbergraph_Scoreboard_UI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
