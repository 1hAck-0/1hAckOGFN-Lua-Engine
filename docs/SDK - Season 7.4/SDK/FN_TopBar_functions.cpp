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

// Function TopBar.TopBar_C.UninitializeInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UninitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.UninitializeInput");

	UTopBar_C_UninitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ManualMenuToggle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::ManualMenuToggle(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ManualMenuToggle");

	UTopBar_C_ManualMenuToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TopBar.TopBar_C.InitializeInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.InitializeInput");

	UTopBar_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnCloseRequested
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OnCloseRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnCloseRequested");

	UTopBar_C_OnCloseRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.On_TouchZone_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTopBar_C::On_TouchZone_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.On_TouchZone_MouseButtonDown_1");

	UTopBar_C_On_TouchZone_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.HandleSocialPanelAnimComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::HandleSocialPanelAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleSocialPanelAnimComplete");

	UTopBar_C_HandleSocialPanelAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleMainMenuAnimComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::HandleMainMenuAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleMainMenuAnimComplete");

	UTopBar_C_HandleMainMenuAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.CloseSocialMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::CloseSocialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.CloseSocialMenu");

	UTopBar_C_CloseSocialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Set Header Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::Set_Header_Visibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Set Header Visibility");

	UTopBar_C_Set_Header_Visibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ConfigureVisibleItemsForSubGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame");

	UTopBar_C_ConfigureVisibleItemsForSubGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenSocialMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenSocialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenSocialMenu");

	UTopBar_C_OpenSocialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.FireOpenAnalyticsEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::FireOpenAnalyticsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.FireOpenAnalyticsEvent");

	UTopBar_C_FireOpenAnalyticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.UpdateMTXButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UpdateMTXButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.UpdateMTXButton");

	UTopBar_C_UpdateMTXButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ForceMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ForceMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ForceMenuClosed");

	UTopBar_C_ForceMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.GetMainMenuTooltipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBar_C::GetMainMenuTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.GetMainMenuTooltipWidget");

	UTopBar_C_GetMainMenuTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.GetFriendsTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBar_C::GetFriendsTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.GetFriendsTooltipWidget");

	UTopBar_C_GetFriendsTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBar.TopBar_C.HandleActiveInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveInvitesCount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleActiveInvitesCountChanged(int ActiveInvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleActiveInvitesCountChanged");

	UTopBar_C_HandleActiveInvitesCountChanged_Params params;
	params.ActiveInvitesCount = ActiveInvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleAccountPickerResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ControllerIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UserSwitched                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleAccountPickerResult(int ControllerIndex, bool UserSwitched)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleAccountPickerResult");

	UTopBar_C_HandleAccountPickerResult_Params params;
	params.ControllerIndex = ControllerIndex;
	params.UserSwitched = UserSwitched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BindSwitchProfileAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindSwitchProfileAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindSwitchProfileAction");

	UTopBar_C_BindSwitchProfileAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleSwitchProfileAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleSwitchProfileAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleSwitchProfileAction");

	UTopBar_C_HandleSwitchProfileAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TopBar.TopBar_C.HandleFeatureSwitchOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleFeatureSwitchOp(EFortUIFeature Feature)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleFeatureSwitchOp");

	UTopBar_C_HandleFeatureSwitchOp_Params params;
	params.Feature = Feature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.UnbindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::UnbindNavigationDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.UnbindNavigationDelegates");

	UTopBar_C_UnbindNavigationDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BindNavigationDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindNavigationDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindNavigationDelegates");

	UTopBar_C_BindNavigationDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ForceMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::ForceMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ForceMenuOpen");

	UTopBar_C_ForceMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.CreateWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBar_C::CreateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.CreateWidgets");

	UTopBar_C_CreateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.HandleCloseAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::HandleCloseAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.HandleCloseAction");

	UTopBar_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TopBar.TopBar_C.BindPanelControl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBar_C::BindPanelControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BindPanelControl");

	UTopBar_C_BindPanelControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.CloseMainMenu
// (Private, BlueprintCallable, BlueprintEvent)

void UTopBar_C::CloseMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.CloseMainMenu");

	UTopBar_C_CloseMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenMainMenu
// (Private, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenMainMenu");

	UTopBar_C_OpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.DialogResult");

	UTopBar_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UTopBar_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnBeginIntro");

	UTopBar_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UTopBar_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnBeginOutro");

	UTopBar_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UTopBar_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnActivated");

	UTopBar_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Hidden
// (BlueprintCallable, BlueprintEvent)

void UTopBar_C::Hidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Hidden");

	UTopBar_C_Hidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UTopBar_C::BndEvt__MainMenu_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent");

	UTopBar_C_BndEvt__MainMenu_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopBar_C::BndEvt__Social_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent");

	UTopBar_C_BndEvt__Social_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.PreConstruct");

	UTopBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Destruct");

	UTopBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OnAnimationFinished");

	UTopBar_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UTopBar_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent");

	UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ShowSocialConfirmation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MESSAGE                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBar_C::ShowSocialConfirmation(struct FText MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ShowSocialConfirmation");

	UTopBar_C_ShowSocialConfirmation_Params params;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.On Power Increased
// (BlueprintCallable, BlueprintEvent)

void UTopBar_C::On_Power_Increased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.On Power Increased");

	UTopBar_C_On_Power_Increased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.AddIconToScreen
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonLazyImage*        Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopBar_C::AddIconToScreen(class UCommonLazyImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.AddIconToScreen");

	UTopBar_C_AddIconToScreen_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ManualToggleMainMenu
// (BlueprintCallable, BlueprintEvent)

void UTopBar_C::ManualToggleMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ManualToggleMainMenu");

	UTopBar_C_ManualToggleMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__SocialPanel_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UTopBar_C::BndEvt__SocialPanel_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__SocialPanel_K2Node_ComponentBoundEvent");

	UTopBar_C_BndEvt__SocialPanel_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.SetOnlineFriendsCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewOnlineFriendsCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::SetOnlineFriendsCount(int NewOnlineFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.SetOnlineFriendsCount");

	UTopBar_C_SetOnlineFriendsCount_Params params;
	params.NewOnlineFriendsCount = NewOnlineFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.SetActiveInvitesCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewActiveInvitesCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::SetActiveInvitesCount(int NewActiveInvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.SetActiveInvitesCount");

	UTopBar_C_SetActiveInvitesCount_Params params;
	params.NewActiveInvitesCount = NewActiveInvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopBar_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent");

	UTopBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.Construct");

	UTopBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::ExecuteUbergraph_TopBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.ExecuteUbergraph_TopBar");

	UTopBar_C_ExecuteUbergraph_TopBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTopBar_C::OpenAccountPicker__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature");

	UTopBar_C_OpenAccountPicker__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBar_C::MainMenuStateChanged__DelegateSignature(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature");

	UTopBar_C_MainMenuStateChanged__DelegateSignature_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
