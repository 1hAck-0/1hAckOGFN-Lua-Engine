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

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnBackActionExecuted
struct UAthenaReplayBrowserTab_C_OnBackActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameActionExecuted
struct UAthenaReplayBrowserTab_C_OnRenameActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteActionExecuted
struct UAthenaReplayBrowserTab_C_OnDeleteActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayActionExecuted
struct UAthenaReplayBrowserTab_C_OnPlayActionExecuted_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.StartAthenaLobbyMusic
struct UAthenaReplayBrowserTab_C_StartAthenaLobbyMusic_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.RefreshReplayFolderState
struct UAthenaReplayBrowserTab_C_RefreshReplayFolderState_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DoesSupportReplayFolder
struct UAthenaReplayBrowserTab_C_DoesSupportReplayFolder_Params
{
	bool                                               IsSupported;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnShowLoadingThrobber
struct UAthenaReplayBrowserTab_C_OnShowLoadingThrobber_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStateChanged
struct UAthenaReplayBrowserTab_C_OnActionStateChanged_Params
{
	bool                                               ActionInProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SetupInputActionHandlers
struct UAthenaReplayBrowserTab_C_SetupInputActionHandlers_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.CloseRenameDialog
struct UAthenaReplayBrowserTab_C_CloseRenameDialog_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnConfirmRename
struct UAthenaReplayBrowserTab_C_OnConfirmRename_Params
{
	struct FText                                       NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.HideInputActions
struct UAthenaReplayBrowserTab_C_HideInputActions_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.FocusList
struct UAthenaReplayBrowserTab_C_FocusList_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.SelectReplay
struct UAthenaReplayBrowserTab_C_SelectReplay_Params
{
	class UObject*                                     ReplayInfoObject;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult
struct UAthenaReplayBrowserTab_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_E89869AF460753E34CA097BC86722E95
struct UAthenaReplayBrowserTab_C_DialogResult_E89869AF460753E34CA097BC86722E95_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DialogResult_F681A46A43F230E95DCC3F994D03E83C
struct UAthenaReplayBrowserTab_C_DialogResult_F681A46A43F230E95DCC3F994D03E83C_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRowsUpdated
struct UAthenaReplayBrowserTab_C_OnRowsUpdated_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActivated
struct UAthenaReplayBrowserTab_C_OnActivated_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.DeleteReplay
struct UAthenaReplayBrowserTab_C_DeleteReplay_Params
{
	class UAthenaReplayBrowserRowProxyInstance*        RowProxy;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__CommonListView
struct UAthenaReplayBrowserTab_C_BndEvt__CommonListView_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.Construct
struct UAthenaReplayBrowserTab_C_Construct_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.PlayReplay
struct UAthenaReplayBrowserTab_C_PlayReplay_Params
{
	class UAthenaReplayBrowserRowProxyInstance*        RowProxy;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnInputModeChanged
struct UAthenaReplayBrowserTab_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__ReplayListView_K2Node_ComponentBoundEvent
struct UAthenaReplayBrowserTab_C_BndEvt__ReplayListView_K2Node_ComponentBoundEvent_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnDeleteFailed
struct UAthenaReplayBrowserTab_C_OnDeleteFailed_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnRenameFailed
struct UAthenaReplayBrowserTab_C_OnRenameFailed_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnSaveFailed
struct UAthenaReplayBrowserTab_C_OnSaveFailed_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnPlayFailed
struct UAthenaReplayBrowserTab_C_OnPlayFailed_Params
{
	struct FText                                       Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent
struct UAthenaReplayBrowserTab_C_BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionStarted
struct UAthenaReplayBrowserTab_C_OnActionStarted_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.OnActionFinished
struct UAthenaReplayBrowserTab_C_OnActionFinished_Params
{
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ShowDeleteInvalidDialog
struct UAthenaReplayBrowserTab_C_ShowDeleteInvalidDialog_Params
{
	struct FText                                       Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       MESSAGE;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaReplayBrowserTab.AthenaReplayBrowserTab_C.ExecuteUbergraph_AthenaReplayBrowserTab
struct UAthenaReplayBrowserTab_C_ExecuteUbergraph_AthenaReplayBrowserTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
