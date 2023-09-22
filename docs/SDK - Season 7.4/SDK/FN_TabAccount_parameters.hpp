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

// Function TabAccount.TabAccount_C.CenterAppropriateWidget
struct UTabAccount_C_CenterAppropriateWidget_Params
{
};

// Function TabAccount.TabAccount_C.PrivacySettingsFromSelection
struct UTabAccount_C_PrivacySettingsFromSelection_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMcpPrivacySettings                         McpPrivacySettings;                                       // (Parm, OutParm)
};

// Function TabAccount.TabAccount_C.PrivacySettingsToSelection
struct UTabAccount_C_PrivacySettingsToSelection_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.OnStWContentUninstalled
struct UTabAccount_C_OnStWContentUninstalled_Params
{
};

// Function TabAccount.TabAccount_C.GetTencentId
struct UTabAccount_C_GetTencentId_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.InitializeWebsiteConfiguration
struct UTabAccount_C_InitializeWebsiteConfiguration_Params
{
};

// Function TabAccount.TabAccount_C.Build Player Id Analytic Attribute
struct UTabAccount_C_Build_Player_Id_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.Build Player Name Analytic Attribute
struct UTabAccount_C_Build_Player_Name_Analytic_Attribute_Params
{
	struct FFortAnalyticsEventAttribute                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TabAccount.TabAccount_C.Fire Enter Live Stream Analytic
struct UTabAccount_C_Fire_Enter_Live_Stream_Analytic_Params
{
};

// Function TabAccount.TabAccount_C.Initialize Data
struct UTabAccount_C_Initialize_Data_Params
{
};

// Function TabAccount.TabAccount_C.Update Data
struct UTabAccount_C_Update_Data_Params
{
};

// Function TabAccount.TabAccount_C.DialogResult
struct UTabAccount_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.CenterOnTab
struct UTabAccount_C_CenterOnTab_Params
{
};

// Function TabAccount.TabAccount_C.Construct
struct UTabAccount_C_Construct_Params
{
};

// Function TabAccount.TabAccount_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_Params
{
	struct FText                                       NewTooltipText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TabAccount.TabAccount_C.BndEvt__URLButton_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__IconTextButton_C
struct UTabAccount_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_Logout_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__Button_Logout_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.SetRefundRequestText
struct UTabAccount_C_SetRefundRequestText_Params
{
	int                                                RefundsRemaining;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalRefunds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DaysToRefund;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.UpdateOptionsTab
struct UTabAccount_C_UpdateOptionsTab_Params
{
};

// Function TabAccount.TabAccount_C.BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.OnReadPrivacySettings
struct UTabAccount_C_OnReadPrivacySettings_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMcpPrivacySettings                         Settings;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TabAccount.TabAccount_C.BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent
struct UTabAccount_C_BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabAccount.TabAccount_C.ExecuteUbergraph_TabAccount
struct UTabAccount_C_ExecuteUbergraph_TabAccount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
