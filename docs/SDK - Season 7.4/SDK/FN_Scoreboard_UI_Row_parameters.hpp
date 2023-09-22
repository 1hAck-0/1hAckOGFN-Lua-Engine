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

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ProvideData
struct UScoreboard_UI_Row_C_ProvideData_Params
{
	TArray<struct FText>                               InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.Construct
struct UScoreboard_UI_Row_C_Construct_Params
{
};

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.PreConstruct
struct UScoreboard_UI_Row_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ExecuteUbergraph_Scoreboard_UI_Row
struct UScoreboard_UI_Row_C_ExecuteUbergraph_Scoreboard_UI_Row_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
