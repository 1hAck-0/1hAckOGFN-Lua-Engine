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

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuInputDisplayOnly_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.GetListItemObject");

	UOptionsMenuInputDisplayOnly_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuInputDisplayOnly_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnEntryReleased");

	UOptionsMenuInputDisplayOnly_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemExpansionChanged");

	UOptionsMenuInputDisplayOnly_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemSelectionChanged");

	UOptionsMenuInputDisplayOnly_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputDisplayOnly_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.OnListItemObjectSet");

	UOptionsMenuInputDisplayOnly_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputDisplayOnly
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputDisplayOnly_C::ExecuteUbergraph_OptionsMenuInputDisplayOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputDisplayOnly");

	UOptionsMenuInputDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputDisplayOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
