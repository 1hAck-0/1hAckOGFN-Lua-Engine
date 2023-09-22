#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchStats           AthenaMatchStats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UMatchStatsGrid_C::SetStats(struct FAthenaMatchStats& AthenaMatchStats)
{
	static auto Func = Class->GetFunction("MatchStatsGrid_C", "SetStats");

	Params::UMatchStatsGrid_C_SetStats_Params Parms;
	Parms.AthenaMatchStats = AthenaMatchStats;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Integer)
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchStatsGrid_C::SetStat__Integer_(class UCommonNumericTextBlock* Target, int32 Value, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("MatchStatsGrid_C", "SetStat (Integer)");

	Params::UMatchStatsGrid_C_SetStat__Integer__Params Parms;
	Parms.Target = Target;
	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Float)
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchStatsGrid_C::SetStat__Float_(class UCommonNumericTextBlock* Target, float Value)
{
	static auto Func = Class->GetFunction("MatchStatsGrid_C", "SetStat (Float)");

	Params::UMatchStatsGrid_C_SetStat__Float__Params Parms;
	Parms.Target = Target;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
