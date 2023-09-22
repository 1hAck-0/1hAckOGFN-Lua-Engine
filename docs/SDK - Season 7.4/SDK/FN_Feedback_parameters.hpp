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

// Function Feedback.Feedback_C.ResetCategoryText
struct UFeedback_C_ResetCategoryText_Params
{
};

// Function Feedback.Feedback_C.UpdateSendButtonEnabled
struct UFeedback_C_UpdateSendButtonEnabled_Params
{
};

// Function Feedback.Feedback_C.TouchToClose
struct UFeedback_C_TouchToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Feedback.Feedback_C.SetupAutoFillPlayerFields
struct UFeedback_C_SetupAutoFillPlayerFields_Params
{
	struct FText                                       KillersName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SpectatingName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Feedback.Feedback_C.Setup For Reporting Player
struct UFeedback_C_Setup_For_Reporting_Player_Params
{
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Feedback.Feedback_C.InitializeFeedback
struct UFeedback_C_InitializeFeedback_Params
{
};

// Function Feedback.Feedback_C.CanSendFeedback
struct UFeedback_C_CanSendFeedback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Feedback.Feedback_C.AddButtonFeedbackTypes
struct UFeedback_C_AddButtonFeedbackTypes_Params
{
};

// Function Feedback.Feedback_C.BindDelegates
struct UFeedback_C_BindDelegates_Params
{
};

// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.HandleTextChanged
struct UFeedback_C_HandleTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Feedback.Feedback_C.OnActivated
struct UFeedback_C_OnActivated_Params
{
};

// Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button
struct UFeedback_C_ForceSelect_PopulateName_Killer_Button_Params
{
};

// Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button
struct UFeedback_C_ForceSelect_PopulateName_Spectator_Button_Params
{
};

// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.OnBeginIntro
struct UFeedback_C_OnBeginIntro_Params
{
};

// Function Feedback.Feedback_C.BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.OnFeedbackTypeChanged
struct UFeedback_C_OnFeedbackTypeChanged_Params
{
	EFortUIGameFeedbackType                            FeedBackType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback.Feedback_C.OnReportingCategoryChanged
struct UFeedback_C_OnReportingCategoryChanged_Params
{
	int                                                CategoryIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback.Feedback_C.BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.OnPlayerNameSelectedEvent
struct UFeedback_C_OnPlayerNameSelectedEvent_Params
{
	struct FText                                       Name;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent
struct UFeedback_C_BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
struct UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params
{
};

// Function Feedback.Feedback_C.Construct
struct UFeedback_C_Construct_Params
{
};

// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
struct UFeedback_C_ExecuteUbergraph_Feedback_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
