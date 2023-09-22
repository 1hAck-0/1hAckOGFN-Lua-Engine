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

// Function ItemInfoWidget.ItemInfoWidget_C.GenerateItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)

void UItemInfoWidget_C::GenerateItemName(class UFortItemDefinition* ItemDefinition, int Quantity, struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.GenerateItemName");

	UItemInfoWidget_C_GenerateItemName_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function ItemInfoWidget.ItemInfoWidget_C.Update Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::Update_Text(class UFortItemDefinition* ItemDefinition, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.Update Text");

	UItemInfoWidget_C_Update_Text_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::PopulateUsingItem(class UFortItem* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem");

	UItemInfoWidget_C_PopulateUsingItem_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItemDefinition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::PopulateUsingItemDefinition(class UFortItemDefinition* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItemDefinition");

	UItemInfoWidget_C_PopulateUsingItemDefinition_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.Populate_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::Populate_Internal(class UFortItemDefinition* ItemDefinition, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.Populate_Internal");

	UItemInfoWidget_C_Populate_Internal_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.Construct");

	UItemInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::ExecuteUbergraph_ItemInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget");

	UItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
