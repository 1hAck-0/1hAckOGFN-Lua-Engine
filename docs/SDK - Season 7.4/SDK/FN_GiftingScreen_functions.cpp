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

// Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::HandleMoreInfoClicked(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked");

	UGiftingScreen_C_HandleMoreInfoClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function GiftingScreen.GiftingScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::ToggleBackAction(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.ToggleBackAction");

	UGiftingScreen_C_ToggleBackAction_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UGiftingScreen_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.GetWidgetForFramingViewedItem");

	UGiftingScreen_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::HandleBackClicked(bool* bIsHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.HandleBackClicked");

	UGiftingScreen_C_HandleBackClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHandled != nullptr)
		*bIsHandled = params.bIsHandled;
}


// Function GiftingScreen.GiftingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.Construct");

	UGiftingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* NewOfferInfo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnOfferSet(class UFortStoreFrontOfferInfo* NewOfferInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnOfferSet");

	UGiftingScreen_C_OnOfferSet_Params params;
	params.NewOfferInfo = NewOfferInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGiftingToSelf                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnMoveToGiftWrapStep(bool bGiftingToSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep");

	UGiftingScreen_C_OnMoveToGiftWrapStep_Params params;
	params.bGiftingToSelf = bGiftingToSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingScreen_C::BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent");

	UGiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGiftingScreen_C::OnMoveToFriendSelectStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep");

	UGiftingScreen_C_OnMoveToFriendSelectStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingScreen_C::BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent");

	UGiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::OnBeginGiftingSubmission()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission");

	UGiftingScreen_C_OnBeginGiftingSubmission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnEndGiftingSubmission(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission");

	UGiftingScreen_C_OnEndGiftingSubmission_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnActivated");

	UGiftingScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent");

	UGiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::ExecuteUbergraph_GiftingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen");

	UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
