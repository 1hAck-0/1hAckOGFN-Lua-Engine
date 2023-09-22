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

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
struct UEventScoreBigStat_C_SetData_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValueContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FormatterText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortTournamentDisplayInfo                  Tournament_Display_Info;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
