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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::InitCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency");

	UStoreMain_OfferDetails_C_InitCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::InitStoreTypeVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals");

	UStoreMain_OfferDetails_C_InitStoreTypeVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::UnregisterInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput");

	UStoreMain_OfferDetails_C_UnregisterInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::RegisterInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput");

	UStoreMain_OfferDetails_C_RegisterInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::PopDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails");

	UStoreMain_OfferDetails_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init");

	UStoreMain_OfferDetails_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack");

	UStoreMain_OfferDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::HandlePurchaseComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete");

	UStoreMain_OfferDetails_C_HandlePurchaseComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct");

	UStoreMain_OfferDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_OfferDetails_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent");

	UStoreMain_OfferDetails_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMain_OfferDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent");

	UStoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails");

	UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
