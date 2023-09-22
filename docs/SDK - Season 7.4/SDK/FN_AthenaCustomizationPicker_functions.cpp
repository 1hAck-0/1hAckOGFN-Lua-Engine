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

// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPicker_C::HandleDifferentFilterSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP");

	UAthenaCustomizationPicker_C_HandleDifferentFilterSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   EmptyDisplayText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCustomizationPicker_C::OnNoItemsAvailableInFilter(struct FText EmptyDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter");

	UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params params;
	params.EmptyDisplayText = EmptyDisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
// (Event, Public, BlueprintEvent)

void UAthenaCustomizationPicker_C::OnItemsAvailableInFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter");

	UAthenaCustomizationPicker_C_OnItemsAvailableInFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPicker_C::ExecuteUbergraph_AthenaCustomizationPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker");

	UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPicker_C::OnEnableSaveButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature");

	UAthenaCustomizationPicker_C_OnEnableSaveButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPicker_C::OnDisableSaveButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature");

	UAthenaCustomizationPicker_C_OnDisableSaveButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
