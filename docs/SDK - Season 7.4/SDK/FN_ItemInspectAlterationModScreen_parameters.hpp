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

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.HasOptions
struct UItemInspectAlterationModScreen_C_HasOptions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseIngredients
struct UItemInspectAlterationModScreen_C_UpdatePurchaseIngredients_Params
{
	TArray<struct FFortItemQuantityPair>               Ingredients;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateShowPurchaseOptions
struct UItemInspectAlterationModScreen_C_UpdateShowPurchaseOptions_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseDetails
struct UItemInspectAlterationModScreen_C_UpdatePurchaseDetails_Params
{
	bool                                               SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseButtons
struct UItemInspectAlterationModScreen_C_UpdatePurchaseButtons_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
struct UItemInspectAlterationModScreen_C_UpdateColors_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
struct UItemInspectAlterationModScreen_C_SetupTriangles_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
struct UItemInspectAlterationModScreen_C_SetupHeaderColors_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.DialogResult_AB7FE45A4C61900417D8EAB93574F424
struct UItemInspectAlterationModScreen_C_DialogResult_AB7FE45A4C61900417D8EAB93574F424_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
struct UItemInspectAlterationModScreen_C_OnAlterationModificationCompleted_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
struct UItemInspectAlterationModScreen_C_RefreshItemAndAlterationsBP_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnActivated
struct UItemInspectAlterationModScreen_C_OnActivated_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent
struct UItemInspectAlterationModScreen_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.Construct
struct UItemInspectAlterationModScreen_C_Construct_Params
{
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent
struct UItemInspectAlterationModScreen_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
struct UItemInspectAlterationModScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnItemSlotChanged
struct UItemInspectAlterationModScreen_C_OnItemSlotChanged_Params
{
	bool                                               SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationOptionChanged
struct UItemInspectAlterationModScreen_C_OnAlterationOptionChanged_Params
{
	class UFortAlterationOption*                       CurrentAlterationOption;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
struct UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
