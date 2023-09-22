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

// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardEventDetails_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP");

	UEventLeaderboardEventDetails_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEventDetails_C::ExecuteUbergraph_EventLeaderboardEventDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails");

	UEventLeaderboardEventDetails_C_ExecuteUbergraph_EventLeaderboardEventDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
