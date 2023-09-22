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

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Mini Bundle Item Location
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Mini_Bundle_Item_Location_Params
{
	int                                                Bundle_Item_Index;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              HBox_Row;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Bundle Item Anim Speed
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Bundle_Item_Anim_Speed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Get Bundle Info from Item Def
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Get_Bundle_Info_from_Item_Def_Params
{
	class UFortAccountItemDefinition*                  Item_Definition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBundledItemInfo                            Bundled_Item_Info;                                        // (Parm, OutParm)
	bool                                               bFoundItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_PopScreen_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_UpdateFromOffer_Params
{
	class UFortAccountItemDefinition*                  Item_Definition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnOfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnActivated_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased__K2Node_WidgetAnimationEvent_1_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Remove Widget and Return to Last Menu
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Remove_Widget_and_Return_to_Last_Menu_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Next Item
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Show_Next_Item_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BundleBlurOut
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_BundleBlurOut_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased___Bundle_Item__K2Node_WidgetAnimationEvent_3_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_WidgetAnimationEvt_Purchased___Bundle_Item____FAST_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Init Bundle Layout
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Init_Bundle_Layout_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Populate Bundle Mini-Cards
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Populate_Bundle_Mini_Cards_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Bundle Mini Item Card
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Show_Bundle_Mini_Item_Card_Params
{
};

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
