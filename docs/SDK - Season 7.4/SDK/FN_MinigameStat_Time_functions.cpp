// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinigameStat_Time.MinigameStat_Time_C.Compare
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FirstScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMinigameStat_Time_C::Compare(int FirstScore, int SecondScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameStat_Time.MinigameStat_Time_C.Compare");

	UMinigameStat_Time_C_Compare_Params params;
	params.FirstScore = FirstScore;
	params.SecondScore = SecondScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameStat_Time.MinigameStat_Time_C.FormatStat
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMinigameStat_Time_C::FormatStat(int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameStat_Time.MinigameStat_Time_C.FormatStat");

	UMinigameStat_Time_C_FormatStat_Params params;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
