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

// Function EventScoreRow.EventScoreRow_C.SetData
struct UEventScoreRow_C_SetData_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventScoreRow.EventScoreRow_C.PreConstruct
struct UEventScoreRow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventScoreRow.EventScoreRow_C.ExecuteUbergraph_EventScoreRow
struct UEventScoreRow_C_ExecuteUbergraph_EventScoreRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
