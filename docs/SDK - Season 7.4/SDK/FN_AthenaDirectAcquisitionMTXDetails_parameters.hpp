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

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.GetWidgetForFramingViewedItem
struct UAthenaDirectAcquisitionMTXDetails_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton
struct UAthenaDirectAcquisitionMTXDetails_C_InitPurchaseButton_Params
{
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails
struct UAthenaDirectAcquisitionMTXDetails_C_PopDetails_Params
{
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init
struct UAthenaDirectAcquisitionMTXDetails_C_Init_Params
{
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack
struct UAthenaDirectAcquisitionMTXDetails_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete
struct UAthenaDirectAcquisitionMTXDetails_C_HandlePurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPurchasedItemInfo>                  PurchasedItems;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Construct
struct UAthenaDirectAcquisitionMTXDetails_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent
struct UAthenaDirectAcquisitionMTXDetails_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleRealMoneyPurchaseComplete
struct UAthenaDirectAcquisitionMTXDetails_C_HandleRealMoneyPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails
struct UAthenaDirectAcquisitionMTXDetails_C_ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
