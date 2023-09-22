#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Handle_AffiliateButton
struct UAthenaDirectAcquisitionScreen_C_Handle_AffiliateButton_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
struct UAthenaDirectAcquisitionScreen_C_Focus_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
struct UAthenaDirectAcquisitionScreen_C_GenerateOfferWidget_Params
{
	class UFortStoreFrontOfferInfo*                    OfferData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.NoOffersAvailable
struct UAthenaDirectAcquisitionScreen_C_NoOffersAvailable_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnStartReadingOffers
struct UAthenaDirectAcquisitionScreen_C_OnStartReadingOffers_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnOffersGenerated
struct UAthenaDirectAcquisitionScreen_C_OnOffersGenerated_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnActivated
struct UAthenaDirectAcquisitionScreen_C_OnActivated_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ClearOfferWidgets
struct UAthenaDirectAcquisitionScreen_C_ClearOfferWidgets_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage
struct UAthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage_Params
{
	bool                                               HasOtherPlatformCurrency;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrencyMessageLocText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Construct
struct UAthenaDirectAcquisitionScreen_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnAffiliateUpdated
struct UAthenaDirectAcquisitionScreen_C_OnAffiliateUpdated_Params
{
	struct FString                                     AffiliateName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnDisplayToast
struct UAthenaDirectAcquisitionScreen_C_OnDisplayToast_Params
{
	bool                                               bDisplayToast;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
struct UAthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
