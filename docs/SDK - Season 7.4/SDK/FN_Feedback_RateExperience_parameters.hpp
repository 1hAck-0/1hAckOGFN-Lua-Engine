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

// Function Feedback_RateExperience.Feedback_RateExperience_C.CreateToolTip
struct UFeedback_RateExperience_C_CreateToolTip_Params
{
	class UWidget*                                     Star_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                WidgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.CloseWidget
struct UFeedback_RateExperience_C_CloseWidget_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SendAnalyticsEvent
struct UFeedback_RateExperience_C_SendAnalyticsEvent_Params
{
	struct FString                                     FeedbackSentBy;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SetupStarButtons
struct UFeedback_RateExperience_C_SetupStarButtons_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SetStarCount
struct UFeedback_RateExperience_C_SetStarCount_Params
{
	int                                                Star_Count;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.Construct
struct UFeedback_RateExperience_C_Construct_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
struct UFeedback_RateExperience_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__SendButton_K2Node_ComponentBoundEvent
struct UFeedback_RateExperience_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnActivated
struct UFeedback_RateExperience_C_OnActivated_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnClientPartyStateChanged
struct UFeedback_RateExperience_C_OnClientPartyStateChanged_Params
{
	EFortPartyState                                    PartyState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnStarButtonClicked
struct UFeedback_RateExperience_C_OnStarButtonClicked_Params
{
	class UCommonButton*                               Button_Clicked;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnInputMethodChanged
struct UFeedback_RateExperience_C_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.Destruct
struct UFeedback_RateExperience_C_Destruct_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt_
struct UFeedback_RateExperience_C_BndEvt__Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.ExecuteUbergraph_Feedback_RateExperience
struct UFeedback_RateExperience_C_ExecuteUbergraph_Feedback_RateExperience_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
