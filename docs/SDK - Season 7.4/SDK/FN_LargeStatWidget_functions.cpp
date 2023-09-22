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

// Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StatEntryNumber                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULargeStatWidget_C::SetStatEntryNumber(int StatEntryNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber");

	ULargeStatWidget_C_SetStatEntryNumber_Params params;
	params.StatEntryNumber = StatEntryNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LargeStatWidget.LargeStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void ULargeStatWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LargeStatWidget.LargeStatWidget_C.OnStatChanged");

	ULargeStatWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULargeStatWidget_C::ExecuteUbergraph_LargeStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget");

	ULargeStatWidget_C_ExecuteUbergraph_LargeStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
