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

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleBack");

	UStoreMain_Root_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleRedeem(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleRedeem");

	UStoreMain_Root_C_HandleRedeem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetupForCampaignUpsell()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell");

	UStoreMain_Root_C_SetupForCampaignUpsell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetupFirstFocusableTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile");

	UStoreMain_Root_C_SetupFirstFocusableTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::LayoutVBuckTiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles");

	UStoreMain_Root_C_LayoutVBuckTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStoreMain_Root_C::Get_Main_Tab_Reference()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference");

	UStoreMain_Root_C_Get_Main_Tab_Reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::Start_Ambient_Sound(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound");

	UStoreMain_Root_C_Start_Ambient_Sound_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::UpdateCurrencyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification");

	UStoreMain_Root_C_UpdateCurrencyNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Focus");

	UStoreMain_Root_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable");

	UStoreMain_Root_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated");

	UStoreMain_Root_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnActivated");

	UStoreMain_Root_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnDeactivated");

	UStoreMain_Root_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers");

	UStoreMain_Root_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::ClearOfferWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets");

	UStoreMain_Root_C_ClearOfferWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnAddedToActivationStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack");

	UStoreMain_Root_C_OnAddedToActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnRemovedFromActivationStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack");

	UStoreMain_Root_C_OnRemovedFromActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           HasOtherPlatformCurrency       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrencyMessageLocText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_Root_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText CurrencyMessageLocText)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage");

	UStoreMain_Root_C_OnUpdateOtherPlatformMTXMessage_Params params;
	params.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	params.CurrencyMessageLocText = CurrencyMessageLocText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* OfferData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget");

	UStoreMain_Root_C_GenerateOfferWidget_Params params;
	params.OfferData = OfferData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled
// (Event, Public, BlueprintEvent)

void UStoreMain_Root_C::OnPurchasingDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled");

	UStoreMain_Root_C_OnPurchasingDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root");

	UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
