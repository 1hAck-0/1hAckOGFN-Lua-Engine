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

// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Set Sales Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Sales_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Set_Sales_Text(struct FText Sales_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Set Sales Text");

	UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Set_Sales_Text_Params params;
	params.Sales_Text = Sales_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Construct");

	UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.PreConstruct");

	UAthenaDirectAcquisitionOffer_SalesTextBanner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner");

	UAthenaDirectAcquisitionOffer_SalesTextBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
