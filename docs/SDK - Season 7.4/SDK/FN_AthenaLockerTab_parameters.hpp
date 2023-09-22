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

// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation
struct UAthenaLockerTab_C_PlaySlotClickedAnimation_Params
{
	class UAthenaCustomizationSlotButton_C*            SlotToPlayAnimOn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.CanShowEmptyForType
struct UAthenaLockerTab_C_CanShowEmptyForType_Params
{
	EAthenaCustomizationCategory                       CustomizationType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanShowEmpty;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.SelectWidget
struct UAthenaLockerTab_C_SelectWidget_Params
{
	class UAthenaCustomizationSlotButtonWrapper_C*     InSelection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.SetHeaderToBanner
struct UAthenaLockerTab_C_SetHeaderToBanner_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization
struct UAthenaLockerTab_C_BeginPickingCustomization_Params
{
	EAthenaCustomizationCategory                       Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               WidgetToReturnFocusTo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Subslot_Index;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotClicked
struct UAthenaLockerTab_C_HandleSlotClicked_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.GetWidgetForFramingViewedItem
struct UAthenaLockerTab_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.SetItemDetailsToDisplay
struct UAthenaLockerTab_C_SetItemDetailsToDisplay_Params
{
	class UFortItem*                                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.ShowVaultItemByCategory
struct UAthenaLockerTab_C_ShowVaultItemByCategory_Params
{
	EAthenaCustomizationCategory                       CustomizationType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanShowEmpty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotHovered
struct UAthenaLockerTab_C_HandleSlotHovered_Params
{
	EAthenaCustomizationCategory                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DescriptionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.SelectFirstWidget
struct UAthenaLockerTab_C_SelectFirstWidget_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.ShowSavingModal
struct UAthenaLockerTab_C_ShowSavingModal_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.RefreshInputActions
struct UAthenaLockerTab_C_RefreshInputActions_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.SelectInitialWidgetForGamepad
struct UAthenaLockerTab_C_SelectInitialWidgetForGamepad_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.RegisterInputActions
struct UAthenaLockerTab_C_RegisterInputActions_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.OnActivated
struct UAthenaLockerTab_C_OnActivated_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.OnInputModeChanged
struct UAthenaLockerTab_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.OnDeactivated
struct UAthenaLockerTab_C_OnDeactivated_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.Construct
struct UAthenaLockerTab_C_Construct_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.Destruct
struct UAthenaLockerTab_C_Destruct_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.ProcessLoadoutChanged
struct UAthenaLockerTab_C_ProcessLoadoutChanged_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__AthenaCustomizationBannerButton
struct UAthenaLockerTab_C_BndEvt__AthenaCustomizationBannerButton_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent
struct UAthenaLockerTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLockerTab.AthenaLockerTab_C.ProccesTransitionToSelector
struct UAthenaLockerTab_C_ProccesTransitionToSelector_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.RotationInputGiven
struct UAthenaLockerTab_C_RotationInputGiven_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.ZoomInputGiven
struct UAthenaLockerTab_C_ZoomInputGiven_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.FadeItemHeaderBackIn
struct UAthenaLockerTab_C_FadeItemHeaderBackIn_Params
{
};

// Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab
struct UAthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
