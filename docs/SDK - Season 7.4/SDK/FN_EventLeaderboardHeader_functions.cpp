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

// Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardHeader_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP");

	UEventLeaderboardHeader_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardHeader_C::ExecuteUbergraph_EventLeaderboardHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader");

	UEventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
