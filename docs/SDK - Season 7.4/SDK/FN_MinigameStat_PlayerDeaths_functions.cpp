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

// Function MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C.Compare
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FirstScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SecondScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMinigameStat_PlayerDeaths_C::Compare(int FirstScore, int SecondScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C.Compare");

	UMinigameStat_PlayerDeaths_C_Compare_Params params;
	params.FirstScore = FirstScore;
	params.SecondScore = SecondScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
