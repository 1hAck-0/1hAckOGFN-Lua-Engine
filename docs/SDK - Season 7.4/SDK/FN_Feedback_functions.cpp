// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Feedback.Feedback_C.ResetCategoryText
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::ResetCategoryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ResetCategoryText");

	UFeedback_C_ResetCategoryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.UpdateSendButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::UpdateSendButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.UpdateSendButtonEnabled");

	UFeedback_C_UpdateSendButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.TouchToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFeedback_C::TouchToClose(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.TouchToClose");

	UFeedback_C_TouchToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Feedback.Feedback_C.SetupAutoFillPlayerFields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   KillersName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SpectatingName                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeedback_C::SetupAutoFillPlayerFields(struct FText KillersName, struct FText SpectatingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.SetupAutoFillPlayerFields");

	UFeedback_C_SetupAutoFillPlayerFields_Params params;
	params.KillersName = KillersName;
	params.SpectatingName = SpectatingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.Setup For Reporting Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeedback_C::Setup_For_Reporting_Player(struct FText PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Setup For Reporting Player");

	UFeedback_C_Setup_For_Reporting_Player_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.InitializeFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::InitializeFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.InitializeFeedback");

	UFeedback_C_InitializeFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.CanSendFeedback
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeedback_C::CanSendFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.CanSendFeedback");

	UFeedback_C_CanSendFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Feedback.Feedback_C.AddButtonFeedbackTypes
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::AddButtonFeedbackTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.AddButtonFeedbackTypes");

	UFeedback_C_AddButtonFeedbackTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BindDelegates");

	UFeedback_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__SendButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.HandleTextChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFeedback_C::HandleTextChanged(struct FText Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.HandleTextChanged");

	UFeedback_C_HandleTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnActivated");

	UFeedback_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button
// (BlueprintCallable, BlueprintEvent)

void UFeedback_C::ForceSelect_PopulateName_Killer_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button");

	UFeedback_C_ForceSelect_PopulateName_Killer_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button
// (BlueprintCallable, BlueprintEvent)

void UFeedback_C::ForceSelect_PopulateName_Spectator_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button");

	UFeedback_C_ForceSelect_PopulateName_Spectator_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UFeedback_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnBeginIntro");

	UFeedback_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__PlayerReportingCategoryButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnFeedbackTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortUIGameFeedbackType        FeedBackType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::OnFeedbackTypeChanged(EFortUIGameFeedbackType FeedBackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnFeedbackTypeChanged");

	UFeedback_C_OnFeedbackTypeChanged_Params params;
	params.FeedBackType = FeedBackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnReportingCategoryChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            CategoryIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::OnReportingCategoryChanged(int CategoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnReportingCategoryChanged");

	UFeedback_C_OnReportingCategoryChanged_Params params;
	params.CategoryIndex = CategoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__PlayerNameButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnPlayerNameSelectedEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFeedback_C::OnPlayerNameSelectedEvent(struct FText Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnPlayerNameSelectedEvent");

	UFeedback_C_OnPlayerNameSelectedEvent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent");

	UFeedback_C_BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnInitiateDebugInfoForFeedbackComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete");

	UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Construct");

	UFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::ExecuteUbergraph_Feedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ExecuteUbergraph_Feedback");

	UFeedback_C_ExecuteUbergraph_Feedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
