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

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
struct UItemReceived_PrePrompt_C_LargeImageLoaded_Params
{
	class UObject*                                     Obj;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
struct UItemReceived_PrePrompt_C_UpdateFromGiftBoxItem_Params
{
	bool                                               bFromSelf;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
struct UItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
struct UItemReceived_PrePrompt_C_OnActivated_Params
{
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
struct UItemReceived_PrePrompt_C_OnGiftBoxItemSet_Params
{
	bool                                               bFromSelf;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_1
struct UItemReceived_PrePrompt_C_CustomEvent_1_Params
{
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnInitialized
struct UItemReceived_PrePrompt_C_OnInitialized_Params
{
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnUserMsgFiltered
struct UItemReceived_PrePrompt_C_OnUserMsgFiltered_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SanitzedMsg;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
struct UItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
