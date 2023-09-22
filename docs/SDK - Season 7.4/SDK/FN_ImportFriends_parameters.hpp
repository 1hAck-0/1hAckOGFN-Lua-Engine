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

// Function ImportFriends.ImportFriends_C.SetupNav
struct UImportFriends_C_SetupNav_Params
{
};

// Function ImportFriends.ImportFriends_C.ScaleTextButton
struct UImportFriends_C_ScaleTextButton_Params
{
	int                                                CharThreshold;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UScaleBox*                                   ContainingScaleBox;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UIconTextButton_C*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround
struct UImportFriends_C_ScaleTextboxWithWrappingWorkaround_Params
{
	class UScaleBox*                                   ContainingScaleBox;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CharLimitThreshold;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            TargetText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                WrapAtHorrizontal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.PreConstruct
struct UImportFriends_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.HandleHeaderText
struct UImportFriends_C_HandleHeaderText_Params
{
};

// Function ImportFriends.ImportFriends_C.HandleDescriptionText
struct UImportFriends_C_HandleDescriptionText_Params
{
};

// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
struct UImportFriends_C_OnPanelTypeSet_Params
{
	ESocialImportPanelType                             NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent
struct UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
struct UImportFriends_C_OnIncentivizedSet_Params
{
	bool                                               bIncentivized;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.OnActivated
struct UImportFriends_C_OnActivated_Params
{
};

// Function ImportFriends.ImportFriends_C.OnAnimationFinished
struct UImportFriends_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.OnInputModeChanged
struct UImportFriends_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
struct UImportFriends_C_ExecuteUbergraph_ImportFriends_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
