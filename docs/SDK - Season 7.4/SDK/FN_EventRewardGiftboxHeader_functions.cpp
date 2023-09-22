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

// Function EventRewardGiftboxHeader.EventRewardGiftboxHeader_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventRewardGiftboxHeader_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardGiftboxHeader.EventRewardGiftboxHeader_C.RefreshDataBP");

	UEventRewardGiftboxHeader_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventRewardGiftboxHeader.EventRewardGiftboxHeader_C.ExecuteUbergraph_EventRewardGiftboxHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventRewardGiftboxHeader_C::ExecuteUbergraph_EventRewardGiftboxHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardGiftboxHeader.EventRewardGiftboxHeader_C.ExecuteUbergraph_EventRewardGiftboxHeader");

	UEventRewardGiftboxHeader_C_ExecuteUbergraph_EventRewardGiftboxHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
