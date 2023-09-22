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

// Function ChatWidget.ChatWidget_C.HandlePreShowConfirmationDialog
struct UChatWidget_C_HandlePreShowConfirmationDialog_Params
{
	class UFortUIManagerWidget_NUI*                    Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortDialogDescription_NUI                  DialogDescription;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChatWidget.ChatWidget_C.HandleControllerSendMessagePressed
struct UChatWidget_C_HandleControllerSendMessagePressed_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandleRightTabPressed
struct UChatWidget_C_HandleRightTabPressed_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandleLeftTabPressed
struct UChatWidget_C_HandleLeftTabPressed_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandleExitPressed
struct UChatWidget_C_HandleExitPressed_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.InitializeChat
struct UChatWidget_C_InitializeChat_Params
{
};

// Function ChatWidget.ChatWidget_C.BindDelegates
struct UChatWidget_C_BindDelegates_Params
{
};

// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
struct UChatWidget_C_HandleCursorModeChanged_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
struct UChatWidget_C_HandleShowChatWindow_Params
{
	EFortUIFeature                                     Feature;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                FeatureState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          FeatureStateReason;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
struct UChatWidget_C_HandeChatEnteredEvent_Params
{
	bool                                               bEnteringChat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
struct UChatWidget_C_UpdateChatUserListIcon_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
struct UChatWidget_C_Set_Chat_Shortcut_Visibility_Params
{
	ESlateVisibility                                   New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Set Chat Visibility
struct UChatWidget_C_Set_Chat_Visibility_Params
{
	ESlateVisibility                                   New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Destruct
struct UChatWidget_C_Destruct_Params
{
};

// Function ChatWidget.ChatWidget_C.Construct
struct UChatWidget_C_Construct_Params
{
};

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent
struct UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_Params
{
	bool                                               bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.OnActivated
struct UChatWidget_C_OnActivated_Params
{
};

// Function ChatWidget.ChatWidget_C.OnDeactivated
struct UChatWidget_C_OnDeactivated_Params
{
};

// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
struct UChatWidget_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
struct UChatWidget_C_ExecuteUbergraph_ChatWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.OnEnteredChat__DelegateSignature
struct UChatWidget_C_OnEnteredChat__DelegateSignature_Params
{
	bool                                               EnteredChat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
