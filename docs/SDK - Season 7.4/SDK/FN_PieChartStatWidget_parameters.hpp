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

// Function PieChartStatWidget.PieChartStatWidget_C.AddStat
struct UPieChartStatWidget_C_AddStat_Params
{
	struct FStatGroupData                              StatGroupData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PieChartStatWidget.PieChartStatWidget_C.OnStatChanged
struct UPieChartStatWidget_C_OnStatChanged_Params
{
};

// Function PieChartStatWidget.PieChartStatWidget_C.ExecuteUbergraph_PieChartStatWidget
struct UPieChartStatWidget_C_ExecuteUbergraph_PieChartStatWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
