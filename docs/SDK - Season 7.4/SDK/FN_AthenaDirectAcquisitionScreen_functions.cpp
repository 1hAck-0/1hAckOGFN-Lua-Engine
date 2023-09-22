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

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Handle_AffiliateButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::Handle_AffiliateButton(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Handle_AffiliateButton");

	UAthenaDirectAcquisitionScreen_C_Handle_AffiliateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus");

	UAthenaDirectAcquisitionScreen_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* OfferData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget");

	UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params params;
	params.OfferData = OfferData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable");

	UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers");

	UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated");

	UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated");

	UAthenaDirectAcquisitionScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::ClearOfferWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets");

	UAthenaDirectAcquisitionScreen_C_ClearOfferWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           HasOtherPlatformCurrency       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrencyMessageLocText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaDirectAcquisitionScreen_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText CurrencyMessageLocText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage");

	UAthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage_Params params;
	params.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	params.CurrencyMessageLocText = CurrencyMessageLocText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Construct");

	UAthenaDirectAcquisitionScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnAffiliateUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AffiliateName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaDirectAcquisitionScreen_C::OnAffiliateUpdated(struct FString AffiliateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnAffiliateUpdated");

	UAthenaDirectAcquisitionScreen_C_OnAffiliateUpdated_Params params;
	params.AffiliateName = AffiliateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnDisplayToast
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bDisplayToast                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::OnDisplayToast(bool bDisplayToast)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnDisplayToast");

	UAthenaDirectAcquisitionScreen_C_OnDisplayToast_Params params;
	params.bDisplayToast = bDisplayToast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionScreen_C::ExecuteUbergraph_AthenaDirectAcquisitionScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen");

	UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
