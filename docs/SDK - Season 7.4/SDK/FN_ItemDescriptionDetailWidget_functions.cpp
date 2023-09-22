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

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleItemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ItemChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AmmoChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IngredientsChanged             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDescriptionDetailWidget_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleItemChanged");

	UItemDescriptionDetailWidget_C_HandleItemChanged_Params params;
	params.ItemChanged = ItemChanged;
	params.AmmoChanged = AmmoChanged;
	params.IngredientsChanged = IngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.UpdateQuantityTextBlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDescriptionDetailWidget_C::UpdateQuantityTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.UpdateQuantityTextBlock");

	UItemDescriptionDetailWidget_C_UpdateQuantityTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemDescriptionDetailWidget_C::IsItemSimple(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple");

	UItemDescriptionDetailWidget_C_IsItemSimple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDescriptionDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemDescriptionDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePreDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDescriptionDetailWidget_C::HandlePreDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePreDifferentItemToDetailSet");

	UItemDescriptionDetailWidget_C_HandlePreDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleQuantityOverrideChanged
// (Event, Protected, BlueprintEvent)

void UItemDescriptionDetailWidget_C::HandleQuantityOverrideChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleQuantityOverrideChanged");

	UItemDescriptionDetailWidget_C_HandleQuantityOverrideChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDescriptionDetailWidget_C::ExecuteUbergraph_ItemDescriptionDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget");

	UItemDescriptionDetailWidget_C_ExecuteUbergraph_ItemDescriptionDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
