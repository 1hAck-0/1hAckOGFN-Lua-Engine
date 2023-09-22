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

// Function EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventRewardTokenUnlockedEventInfo_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C.RefreshDataBP");

	UEventRewardTokenUnlockedEventInfo_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C.ExecuteUbergraph_EventRewardTokenUnlockedEventInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventRewardTokenUnlockedEventInfo_C::ExecuteUbergraph_EventRewardTokenUnlockedEventInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C.ExecuteUbergraph_EventRewardTokenUnlockedEventInfo");

	UEventRewardTokenUnlockedEventInfo_C_ExecuteUbergraph_EventRewardTokenUnlockedEventInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
