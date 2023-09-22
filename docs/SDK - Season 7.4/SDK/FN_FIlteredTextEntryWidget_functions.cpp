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

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFilteredTextEntryWidget_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnFocusReceived");

	UFilteredTextEntryWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsBadText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilteredTextEntryWidget_C::OnDirtyTextAttempted(bool bIsBadText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted");

	UFilteredTextEntryWidget_C_OnDirtyTextAttempted_Params params;
	params.bIsBadText = bIsBadText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFilteredTextEntryWidget_C::ExecuteUbergraph_FilteredTextEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget");

	UFilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
