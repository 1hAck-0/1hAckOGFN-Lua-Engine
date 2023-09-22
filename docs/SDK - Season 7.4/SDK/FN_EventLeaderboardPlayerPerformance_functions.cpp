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

// Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardPlayerPerformance_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.RefreshDataBP");

	UEventLeaderboardPlayerPerformance_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.ExecuteUbergraph_EventLeaderboardPlayerPerformance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardPlayerPerformance_C::ExecuteUbergraph_EventLeaderboardPlayerPerformance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.ExecuteUbergraph_EventLeaderboardPlayerPerformance");

	UEventLeaderboardPlayerPerformance_C_ExecuteUbergraph_EventLeaderboardPlayerPerformance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
