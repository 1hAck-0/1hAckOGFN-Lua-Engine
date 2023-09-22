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

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateEditStyleButton
struct UAthenaItemCustomizationSelector_C_UpdateEditStyleButton_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility
struct UAthenaItemCustomizationSelector_C_UpdateToggleFavoriteVisibility_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition
struct UAthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition_Params
{
	class UAthenaCosmeticItemDefinition*               Cosmetic_Item_Definition;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal
struct UAthenaItemCustomizationSelector_C_ShowSavingModal_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem
struct UAthenaItemCustomizationSelector_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
struct UAthenaItemCustomizationSelector_C_ToggleFavorite_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
struct UAthenaItemCustomizationSelector_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
struct UAthenaItemCustomizationSelector_C_Construct_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent
struct UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave
struct UAthenaItemCustomizationSelector_C_OnFinsihedItemSave_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted
struct UAthenaItemCustomizationSelector_C_OnSavingItemStarted_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnActivated
struct UAthenaItemCustomizationSelector_C_OnActivated_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent
struct UAthenaItemCustomizationSelector_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_Params
{
	struct FGameplayTag                                VariantChannel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                VariantTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsOwned;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged
struct UAthenaItemCustomizationSelector_C_OnTabSelectionChanged_Params
{
	bool                                               bShowingVariants;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged
struct UAthenaItemCustomizationSelector_C_OnCurrentItemChanged_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSetup
struct UAthenaItemCustomizationSelector_C_OnFinsihedItemSetup_Params
{
	struct FText                                       CategoryDisplayName;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ItemDisplayTypeName;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAthenaCustomizationCategory                       SelectedCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent
struct UAthenaItemCustomizationSelector_C_BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.RotationInputGiven
struct UAthenaItemCustomizationSelector_C_RotationInputGiven_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ZoomInputGiven
struct UAthenaItemCustomizationSelector_C_ZoomInputGiven_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.FadeItemHeaderBackIn
struct UAthenaItemCustomizationSelector_C_FadeItemHeaderBackIn_Params
{
};

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
struct UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
