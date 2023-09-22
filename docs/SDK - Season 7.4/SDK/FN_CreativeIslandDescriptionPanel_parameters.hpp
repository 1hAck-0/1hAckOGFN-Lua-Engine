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

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.HandleInputModeChange
struct UCreativeIslandDescriptionPanel_C_HandleInputModeChange_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveMenu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ToggleAddBulletDisplays
struct UCreativeIslandDescriptionPanel_C_ToggleAddBulletDisplays_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.AddDescriptionBox
struct UCreativeIslandDescriptionPanel_C_AddDescriptionBox_Params
{
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.DoCustomNavigation_1
struct UCreativeIslandDescriptionPanel_C_DoCustomNavigation_1_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnFocusReceived
struct UCreativeIslandDescriptionPanel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UCreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_C
struct UCreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Construct
struct UCreativeIslandDescriptionPanel_C_Construct_Params
{
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnAccept
struct UCreativeIslandDescriptionPanel_C_OnAccept_Params
{
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Close
struct UCreativeIslandDescriptionPanel_C_Close_Params
{
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent
struct UCreativeIslandDescriptionPanel_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowSpinner
struct UCreativeIslandDescriptionPanel_C_ShowSpinner_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowError
struct UCreativeIslandDescriptionPanel_C_ShowError_Params
{
	struct FString                                     Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnSaveCallBack
struct UCreativeIslandDescriptionPanel_C_OnSaveCallBack_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent
struct UCreativeIslandDescriptionPanel_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent
struct UCreativeIslandDescriptionPanel_C_BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ExecuteUbergraph_CreativeIslandDescriptionPanel
struct UCreativeIslandDescriptionPanel_C_ExecuteUbergraph_CreativeIslandDescriptionPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnPreviewDisplay__DelegateSignature
struct UCreativeIslandDescriptionPanel_C_OnPreviewDisplay__DelegateSignature_Params
{
};

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnClose__DelegateSignature
struct UCreativeIslandDescriptionPanel_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
