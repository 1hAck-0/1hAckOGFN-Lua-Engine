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

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaDirectAcquisitionMTXDetails_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.GetWidgetForFramingViewedItem");

	UAthenaDirectAcquisitionMTXDetails_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionMTXDetails_C::InitPurchaseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton");

	UAthenaDirectAcquisitionMTXDetails_C_InitPurchaseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionMTXDetails_C::PopDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails");

	UAthenaDirectAcquisitionMTXDetails_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionMTXDetails_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init");

	UAthenaDirectAcquisitionMTXDetails_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack");

	UAthenaDirectAcquisitionMTXDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPurchasedItemInfo> PurchasedItems                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaDirectAcquisitionMTXDetails_C::HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo> PurchasedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete");

	UAthenaDirectAcquisitionMTXDetails_C_HandlePurchaseComplete_Params params;
	params.bSuccess = bSuccess;
	params.PurchasedItems = PurchasedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionMTXDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Construct");

	UAthenaDirectAcquisitionMTXDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent");

	UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent");

	UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::BndEvt__GiftButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent");

	UAthenaDirectAcquisitionMTXDetails_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleRealMoneyPurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::HandleRealMoneyPurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleRealMoneyPurchaseComplete");

	UAthenaDirectAcquisitionMTXDetails_C_HandleRealMoneyPurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionMTXDetails_C::ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails");

	UAthenaDirectAcquisitionMTXDetails_C_ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
