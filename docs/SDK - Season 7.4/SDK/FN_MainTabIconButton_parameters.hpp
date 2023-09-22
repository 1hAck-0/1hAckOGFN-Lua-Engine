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

// Function MainTabIconButton.MainTabIconButton_C.SetBangType
struct UMainTabIconButton_C_SetBangType_Params
{
	EFortBangType                                      NewBangType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
struct UMainTabIconButton_C_StopTabCallout_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.TabAdded
struct UMainTabIconButton_C_TabAdded_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed
struct UMainTabIconButton_C_TabDialogClosed_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
struct UMainTabIconButton_C_TabAnimateInFinished_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.SetWrapperNameIDs
struct UMainTabIconButton_C_SetWrapperNameIDs_Params
{
	struct FName                                       InTutorialNameID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InBangNameID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
struct UMainTabIconButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeature                                     UIFeature;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       UIFeatureRevealText;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
struct UMainTabIconButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabIconButton.MainTabIconButton_C.ShowText
struct UMainTabIconButton_C_ShowText_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.Set Icon
struct UMainTabIconButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainTabIconButton.MainTabIconButton_C.Set Text
struct UMainTabIconButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
struct UMainTabIconButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
struct UMainTabIconButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnSelected
struct UMainTabIconButton_C_BP_OnSelected_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnDeselected
struct UMainTabIconButton_C_BP_OnDeselected_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.Construct
struct UMainTabIconButton_C_Construct_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnHovered
struct UMainTabIconButton_C_BP_OnHovered_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnUnhovered
struct UMainTabIconButton_C_BP_OnUnhovered_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded
struct UMainTabIconButton_C_HandleTabAdded_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished
struct UMainTabIconButton_C_HandleTabAnimateInFinished_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed
struct UMainTabIconButton_C_HandleTabDialogCLosed_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged
struct UMainTabIconButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout
struct UMainTabIconButton_C_Handle_StopTabCallout_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BndEvt__ToastWidget_K2Node_ComponentBoundEvent
struct UMainTabIconButton_C_BndEvt__ToastWidget_K2Node_ComponentBoundEvent_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnDisabled
struct UMainTabIconButton_C_BP_OnDisabled_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.BP_OnEnabled
struct UMainTabIconButton_C_BP_OnEnabled_Params
{
};

// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
struct UMainTabIconButton_C_ExecuteUbergraph_MainTabIconButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
