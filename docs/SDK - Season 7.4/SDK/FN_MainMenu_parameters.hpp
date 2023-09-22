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

// Function MainMenu.MainMenu_C.ShowMinigameButtons
struct UMainMenu_C_ShowMinigameButtons_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerControllerAthena*                 Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.TryPushWidgetAsModalPanel
struct UMainMenu_C_TryPushWidgetAsModalPanel_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.TryPushWidgetAsActivateablePanel
struct UMainMenu_C_TryPushWidgetAsActivateablePanel_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inHideHeader;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inHideFooter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inHideChatWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.UpdateCreativeButtonsVisibility
struct UMainMenu_C_UpdateCreativeButtonsVisibility_Params
{
};

// Function MainMenu.MainMenu_C.TeleportToCreativeIslandDock
struct UMainMenu_C_TeleportToCreativeIslandDock_Params
{
};

// Function MainMenu.MainMenu_C.TeleportToCreativeHub
struct UMainMenu_C_TeleportToCreativeHub_Params
{
};

// Function MainMenu.MainMenu_C.UpdateMatchOptionsWidgetVisibility
struct UMainMenu_C_UpdateMatchOptionsWidgetVisibility_Params
{
};

// Function MainMenu.MainMenu_C.UpdateDescriptionTextWhenHovered
struct UMainMenu_C_UpdateDescriptionTextWhenHovered_Params
{
	struct FText                                       HelpText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.UpdateRespawnWidgetVisibility
struct UMainMenu_C_UpdateRespawnWidgetVisibility_Params
{
};

// Function MainMenu.MainMenu_C.MatchMakingFlowChanged
struct UMainMenu_C_MatchMakingFlowChanged_Params
{
	bool                                               bFlowActive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Update Team Select Visibility
struct UMainMenu_C_Update_Team_Select_Visibility_Params
{
};

// Function MainMenu.MainMenu_C.RefreshEpicFriendsButton
struct UMainMenu_C_RefreshEpicFriendsButton_Params
{
};

// Function MainMenu.MainMenu_C.HandleOpened
struct UMainMenu_C_HandleOpened_Params
{
};

// Function MainMenu.MainMenu_C.SetLegalButtonVisibility
struct UMainMenu_C_SetLegalButtonVisibility_Params
{
};

// Function MainMenu.MainMenu_C.SetSupportButtonVisibility
struct UMainMenu_C_SetSupportButtonVisibility_Params
{
};

// Function MainMenu.MainMenu_C.GetFriendsListVisibility
struct UMainMenu_C_GetFriendsListVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Handle Low Power Mode
struct UMainMenu_C_Handle_Low_Power_Mode_Params
{
};

// Function MainMenu.MainMenu_C.UpdateLowPowerMessage
struct UMainMenu_C_UpdateLowPowerMessage_Params
{
	bool                                               PassThrough;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandlePawnSet
struct UMainMenu_C_HandlePawnSet_Params
{
};

// Function MainMenu.MainMenu_C.CrossplayPreferenceChanged
struct UMainMenu_C_CrossplayPreferenceChanged_Params
{
};

// Function MainMenu.MainMenu_C.UpdateFriendCodes
struct UMainMenu_C_UpdateFriendCodes_Params
{
};

// Function MainMenu.MainMenu_C.SetButtonSize
struct UMainMenu_C_SetButtonSize_Params
{
	bool                                               UseLargeButtons;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.RecenterIfHovered
struct UMainMenu_C_RecenterIfHovered_Params
{
	class UWidget*                                     InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.ConfigureSubGameWidgets
struct UMainMenu_C_ConfigureSubGameWidgets_Params
{
};

// Function MainMenu.MainMenu_C.Set Icon Button List Column Width
struct UMainMenu_C_Set_Icon_Button_List_Column_Width_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BindDelegates
struct UMainMenu_C_BindDelegates_Params
{
};

// Function MainMenu.MainMenu_C.ProcessFriendCodes
struct UMainMenu_C_ProcessFriendCodes_Params
{
};

// Function MainMenu.MainMenu_C.OnIssueFriendCodes
struct UMainMenu_C_OnIssueFriendCodes_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFriendCode                                 FriendCode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainMenu.MainMenu_C.GetTotalNumFriendCodes
struct UMainMenu_C_GetTotalNumFriendCodes_Params
{
	int                                                Num_Codes;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes
struct UMainMenu_C_OnQueryUnredeemedFriendCodes_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFriendCode>                         FriendCodes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MainMenu.MainMenu_C.RefreshFriendCodesButton
struct UMainMenu_C_RefreshFriendCodesButton_Params
{
};

// Function MainMenu.MainMenu_C.HandlePartyStateChanged
struct UMainMenu_C_HandlePartyStateChanged_Params
{
	EFortPartyState                                    New_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandleMatchmakingStarted
struct UMainMenu_C_HandleMatchmakingStarted_Params
{
};

// Function MainMenu.MainMenu_C.HandleLobbyDisconnected
struct UMainMenu_C_HandleLobbyDisconnected_Params
{
};

// Function MainMenu.MainMenu_C.HandleLobbyStarted
struct UMainMenu_C_HandleLobbyStarted_Params
{
};

// Function MainMenu.MainMenu_C.HandleMatchmakingComplete
struct UMainMenu_C_HandleMatchmakingComplete_Params
{
	EMatchmakingCompleteResult                         Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandlePartyTypeChanged
struct UMainMenu_C_HandlePartyTypeChanged_Params
{
	EPartyType                                         Party_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandlePartyJoined
struct UMainMenu_C_HandlePartyJoined_Params
{
};

// Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged
struct UMainMenu_C_HandlePartybarUIFeatureChanged_Params
{
	EFortUIFeature                                     Feature;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                FeatureState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved
struct UMainMenu_C_HandleRemotePlayerRemoved_Params
{
	int                                                RemovedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged
struct UMainMenu_C_HandleRemotePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         NewMemberState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenu.MainMenu_C.HandlePartyLeft
struct UMainMenu_C_HandlePartyLeft_Params
{
};

// Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged
struct UMainMenu_C_HandleLocalPlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         MemberState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainMenu.MainMenu_C.SetPrivacyButtonData
struct UMainMenu_C_SetPrivacyButtonData_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Button_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenu.MainMenu_C.UpdatePrivacyButton
struct UMainMenu_C_UpdatePrivacyButton_Params
{
	EPartyType                                         Overide_Party_Type;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Overide_Party_Type;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.IsOutpostOwner
struct UMainMenu_C_IsOutpostOwner_Params
{
	bool                                               OutpostOwner;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.ProcessPartyBar
struct UMainMenu_C_ProcessPartyBar_Params
{
};

// Function MainMenu.MainMenu_C.UpdateButtonStates
struct UMainMenu_C_UpdateButtonStates_Params
{
};

// Function MainMenu.MainMenu_C.UpdateDescriptionText
struct UMainMenu_C_UpdateDescriptionText_Params
{
	struct FText                                       HelpText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainMenu.MainMenu_C.InitializeMainMenu
struct UMainMenu_C_InitializeMainMenu_Params
{
};

// Function MainMenu.MainMenu_C.SetupTestUI
struct UMainMenu_C_SetupTestUI_Params
{
};

// Function MainMenu.MainMenu_C.DialogResult
struct UMainMenu_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete
struct UMainMenu_C_OnComplete_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_F4FDD57C433534964F91CEA573640043
struct UMainMenu_C_OnComplete_F4FDD57C433534964F91CEA573640043_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_EA68C188494ED222629C9EA23005B3E8
struct UMainMenu_C_OnComplete_EA68C188494ED222629C9EA23005B3E8_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_A0EE53B440EA88311754E3988CB20A51
struct UMainMenu_C_OnComplete_A0EE53B440EA88311754E3988CB20A51_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_BF542C8148A522CA2B86D2B79E3DE45F
struct UMainMenu_C_OnComplete_BF542C8148A522CA2B86D2B79E3DE45F_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_B4219C334180ECD39A1111ADFDFD0134
struct UMainMenu_C_OnComplete_B4219C334180ECD39A1111ADFDFD0134_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnComplete_FD193BA749C77FF415E2E881281A10CE
struct UMainMenu_C_OnComplete_FD193BA749C77FF415E2E881281A10CE_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BindLeaveHovered
struct UMainMenu_C_BindLeaveHovered_Params
{
};

// Function MainMenu.MainMenu_C.BindLeaveUnhovered
struct UMainMenu_C_BindLeaveUnhovered_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.HandleChangeGameModeHovered
struct UMainMenu_C_HandleChangeGameModeHovered_Params
{
};

// Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered
struct UMainMenu_C_HandleChangeGameModeUnhovered_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__Challenges_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__Challenges_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__RespawnButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__RespawnButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__FriendsListButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__MyIsland_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__MyIsland_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Construct
struct UMainMenu_C_Construct_Params
{
};

// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.SetCenterWidget
struct UMainMenu_C_SetCenterWidget_Params
{
};

// Function MainMenu.MainMenu_C.LeaveUnhovered
struct UMainMenu_C_LeaveUnhovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Destruct
struct UMainMenu_C_Destruct_Params
{
};

// Function MainMenu.MainMenu_C.Handle Game Mode Unhovered
struct UMainMenu_C_Handle_Game_Mode_Unhovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.Handle Game Mode Hovered
struct UMainMenu_C_Handle_Game_Mode_Hovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C
struct UMainMenu_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.LeaveGameHovered
struct UMainMenu_C_LeaveGameHovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent
struct UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.UpdateMinigameButtons
struct UMainMenu_C_UpdateMinigameButtons_Params
{
};

// Function MainMenu.MainMenu_C.Bind To State Change Delegate
struct UMainMenu_C_Bind_To_State_Change_Delegate_Params
{
};

// Function MainMenu.MainMenu_C.OnMinigameStateChanged
struct UMainMenu_C_OnMinigameStateChanged_Params
{
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct UMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.OnRequestClose__DelegateSignature
struct UMainMenu_C_OnRequestClose__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.OnRequestShowPlayerReportWidget__DelegateSignature
struct UMainMenu_C_OnRequestShowPlayerReportWidget__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.OnRequestShowSocialWidget__DelegateSignature
struct UMainMenu_C_OnRequestShowSocialWidget__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature
struct UMainMenu_C_OnRequestShowFeedbackWidget__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
