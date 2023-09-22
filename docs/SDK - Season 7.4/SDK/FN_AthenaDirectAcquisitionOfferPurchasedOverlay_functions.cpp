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

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Mini Bundle Item Location
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bundle_Item_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHorizontalBox*          HBox_Row                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Mini_Bundle_Item_Location(int Bundle_Item_Index, class UHorizontalBox** HBox_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Mini Bundle Item Location");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Mini_Bundle_Item_Location_Params params;
	params.Bundle_Item_Index = Bundle_Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HBox_Row != nullptr)
		*HBox_Row = params.HBox_Row;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Bundle Item Anim Speed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Bundle_Item_Anim_Speed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Bundle Item Anim Speed");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Bundle_Item_Anim_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Get Bundle Info from Item Def
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition* Item_Definition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBundledItemInfo        Bundled_Item_Info              (Parm, OutParm)
// bool                           bFoundItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Get_Bundle_Info_from_Item_Def(class UFortAccountItemDefinition* Item_Definition, struct FBundledItemInfo* Bundled_Item_Info, bool* bFoundItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Get Bundle Info from Item Def");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Get_Bundle_Info_from_Item_Def_Params params;
	params.Item_Definition = Item_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bundled_Item_Info != nullptr)
		*Bundled_Item_Info = params.Bundled_Item_Info;
	if (bFoundItem != nullptr)
		*bFoundItem = params.bFoundItem;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::PopScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_PopScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition* Item_Definition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::UpdateFromOffer(class UFortAccountItemDefinition* Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_UpdateFromOffer_Params params;
	params.Item_Definition = Item_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased__K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased__K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Remove Widget and Return to Last Menu
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Remove_Widget_and_Return_to_Last_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Remove Widget and Return to Last Menu");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Remove_Widget_and_Return_to_Last_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Next Item
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Show_Next_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Next Item");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Show_Next_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BundleBlurOut
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::BundleBlurOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BundleBlurOut");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_BundleBlurOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased___Bundle_Item__K2Node_WidgetAnimationEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased___Bundle_Item__K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::WidgetAnimationEvt_Purchased___Bundle_Item____FAST_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased___Bundle_Item____FAST_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Init Bundle Layout
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Init_Bundle_Layout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Init Bundle Layout");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Init_Bundle_Layout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Populate Bundle Mini-Cards
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Populate_Bundle_Mini_Cards()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Populate Bundle Mini-Cards");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Populate_Bundle_Mini_Cards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Bundle Mini Item Card
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Show_Bundle_Mini_Item_Card()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Bundle Mini Item Card");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Show_Bundle_Mini_Item_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
