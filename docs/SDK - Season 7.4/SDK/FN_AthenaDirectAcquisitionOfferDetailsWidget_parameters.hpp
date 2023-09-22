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

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPurchaseButtonForQuantity
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPurchaseButtonForQuantity_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetNumBattlepassStars
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetNumBattlepassStars_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetHasBattlepassStars
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetHasBattlepassStars_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowHideGiftingButton
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_ShowHideGiftingButton_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetOwnedIndex
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetOwnedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsNonRefundable
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_IsNonRefundable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DisableGiftButton
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DisableGiftButton_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.EnableGiftButton
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_EnableGiftButton_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsDynamicBundle
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_IsDynamicBundle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DoesOfferAllowQuantity
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DoesOfferAllowQuantity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPurchaseButtonStateAndText
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPurchaseButtonStateAndText_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupDynamicBundle
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupDynamicBundle_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetSalesText
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetSalesText_Params
{
	struct FText                                       NewParam;                                                 // (Parm, OutParm)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrerollItemHeaderInfo
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrerollItemHeaderInfo_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetDisplayName
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetDisplayName_Params
{
	struct FFortItemQuantityPair                       ItemQuantityPair;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetSortedItems
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetSortedItems_Params
{
	TArray<struct FFortItemQuantityPair>               ItemQuantityPairs;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsItemDefOwned
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_IsItemDefOwned_Params
{
	class UFortItemDefinition*                         ItemDef;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateDetails
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateDetails_Params
{
	class UFortItem*                                   Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetPagingVisibility
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetPagingVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetOfferDetailsSlotMargin
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetOfferDetailsSlotMargin_Params
{
	struct FMargin                                     Margin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CreateAndAddRewardItem
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_CreateAndAddRewardItem_Params
{
	struct FFortItemQuantityPair                       ItemQuantity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               SortedItemQuantities;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowDescription
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetShowDescription_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowDetails
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetShowDetails_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowCard
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetShowCard_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetCardSize
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetCardSize_Params
{
	EFortItemCardSize                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsSingleGrantedItem
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_IsSingleGrantedItem_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Owned Bundle Item Count
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Owned_Bundle_Item_Count_Params
{
	int                                                Owned_Items;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                UnOwned_Items;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoneOwned;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllOwned;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer_RefreshButtons
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateFromOffer_RefreshButtons_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CanGiftOffer
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_CanGiftOffer_Params
{
	EOfferPurchaseError                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleGetVBucksClicked
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleGetVBucksClicked_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCamera
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCamera_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePreviewButton
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdatePreviewButton_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateViewedItem
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateViewedItem_Params
{
	class UFortItem*                                   ViewedItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.FixupBackpack
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_FixupBackpack_Params
{
	class UFortItemDefinition*                         ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               AllItemQuantityPairs;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAthenaSeasonReward_C*                       RewardWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DeclinePurchase
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DeclinePurchase_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecutePurchase
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecutePurchase_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCatalogOfferName
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCatalogOfferName_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemList
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateItemList_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetWidgetForFramingViewedItem
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupSaleInfo
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupSaleInfo_Params
{
	bool                                               bHasSale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BannerOverrideTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       NormalPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHasBattlePassStars;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfBattlePassStars;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateSaleStatus
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateSaleStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePurchaseQuantity
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdatePurchaseQuantity_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateAvailability
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateAvailability_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Update_Locked_Information_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_AttemptPurchase_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandlePurchaseOfferComplete_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPurchasedItemInfo>                  PurchasedItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrice_Params
{
	class UWidget*                                     PriceContainer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  NormalPriceText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     SalePriceContainer;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  SalePriceText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      CurrencyImage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PopDetails_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateFromOffer_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DialogResult
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnActivated_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnUpdateStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Show Not Enough Currency
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Show_Not_Enough_Currency_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountLeft
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountLeft_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountRight
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountRight_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnBeginIntro
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnBeginIntro_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleVaultViewItem
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleVaultViewItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCenterandBinding
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateCenterandBinding_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnDeactivated
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnDeactivated_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemViewModeBP
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateItemViewModeBP_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DelayGiftTimerUp
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DelayGiftTimerUp_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnOfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
