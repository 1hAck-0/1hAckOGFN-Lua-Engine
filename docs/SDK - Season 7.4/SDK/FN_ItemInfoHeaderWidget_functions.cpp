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

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemInfoHeaderWidget_C::GetAlternateNameForItem(class UFortItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem");

	UItemInfoHeaderWidget_C_GetAlternateNameForItem_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasValidDescription            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::HasValidItemDefinition(bool* HasValidDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition");

	UItemInfoHeaderWidget_C_HasValidItemDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidDescription != nullptr)
		*HasValidDescription = params.HasValidDescription;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemInfoHeaderWidget_C::UpdateColorRarity(struct FFortRarityItemData NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity");

	UItemInfoHeaderWidget_C_UpdateColorRarity_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDiscription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Hearder                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desciption                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bUseAlternateHeaderBG          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::OverrideHeaderAndDiscription(struct FText Hearder, struct FText Desciption, struct FText ItemType, bool bUseAlternateHeaderBG)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDiscription");

	UItemInfoHeaderWidget_C_OverrideHeaderAndDiscription_Params params;
	params.Hearder = Hearder;
	params.Desciption = Desciption;
	params.ItemType = ItemType;
	params.bUseAlternateHeaderBG = bUseAlternateHeaderBG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateDetailVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility");

	UItemInfoHeaderWidget_C_UpdateDetailVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::SetScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget");

	UItemInfoHeaderWidget_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked");

	UItemInfoHeaderWidget_C_UpdateLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowLocked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LockReason                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemInfoHeaderWidget_C::SetLocked(bool ShouldShowLocked, struct FText LockReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked");

	UItemInfoHeaderWidget_C_SetLocked_Params params;
	params.ShouldShowLocked = ShouldShowLocked;
	params.LockReason = LockReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowRemainingQuantity    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewRemainingQuantity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::SetRemainingQuantity(bool ShouldShowRemainingQuantity, int NewRemainingQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity");

	UItemInfoHeaderWidget_C_SetRemainingQuantity_Params params;
	params.ShouldShowRemainingQuantity = ShouldShowRemainingQuantity;
	params.NewRemainingQuantity = NewRemainingQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateRemainingQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity");

	UItemInfoHeaderWidget_C_UpdateRemainingQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard");

	UItemInfoHeaderWidget_C_UpdateCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowCard                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              CardSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowDetails              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowDescription          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::Setup(bool ShouldShowCard, EFortItemCardSize CardSize, bool ShouldShowDetails, bool ShouldShowDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup");

	UItemInfoHeaderWidget_C_Setup_Params params;
	params.ShouldShowCard = ShouldShowCard;
	params.CardSize = CardSize;
	params.ShouldShowDetails = ShouldShowDetails;
	params.ShouldShowDescription = ShouldShowDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::UpdateNameText(class UFortItemDefinition* ItemDefinition, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText");

	UItemInfoHeaderWidget_C_UpdateNameText_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::Update(class UFortItemDefinition* ItemDefinition, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update");

	UItemInfoHeaderWidget_C_Update_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged
// (Event, Protected, BlueprintEvent)

void UItemInfoHeaderWidget_C::OnItemDefinitionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged");

	UItemInfoHeaderWidget_C_OnItemDefinitionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::ExecuteUbergraph_ItemInfoHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget");

	UItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
