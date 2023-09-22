#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FrontEnd.FrontEnd_C.InitChatVisibilityButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "InitChatVisibilityButton");

	Params::UFrontEnd_C_InitChatVisibilityButton_Params Parms;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.UpdatePttVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPTTState               PTTState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanPTT_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush12                                   ()
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPTTState               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            ()

void UFrontEnd_C::UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush12, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, const struct FSlateBrush& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "UpdatePttVisibility");

	Params::UFrontEnd_C_UpdatePttVisibility_Params Parms;
	Parms.PTTState = PTTState;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCanPTT_ReturnValue = CallFunc_GetCanPTT_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_SlateBrush12 = K2Node_MakeStruct_SlateBrush12;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetOverlayTitleBarVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetOverlayTitleBarVisibility(bool Visible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetOverlayTitleBarVisibility");

	Params::UFrontEnd_C_SetOverlayTitleBarVisibility_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PlayEventMovieIfNecessary
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayingEventMovie                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::PlayEventMovieIfNecessary(bool* PlayingEventMovie, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PlayEventMovieIfNecessary");

	Params::UFrontEnd_C_PlayEventMovieIfNecessary_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie = CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayingEventMovie != nullptr)
		*PlayingEventMovie = Parms.PlayingEventMovie;

}


// Function FrontEnd.FrontEnd_C.NeedsToPlayEventMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NeedsToPlayEventMovie                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "NeedsToPlayEventMovie");

	Params::UFrontEnd_C_NeedsToPlayEventMovie_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NeedsToPlayEventMovie != nullptr)
		*NeedsToPlayEventMovie = Parms.NeedsToPlayEventMovie;

}


// Function FrontEnd.FrontEnd_C.UpdateVisibilityState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideHeader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideFooter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideChat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "UpdateVisibilityState");

	Params::UFrontEnd_C_UpdateVisibilityState_Params Parms;
	Parms.HideHeader = HideHeader;
	Parms.HideFooter = HideFooter;
	Parms.HideChat = HideChat;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue12 = CallFunc_Not_PreBool_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetChatWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetChatWidgetVisibility(bool Visible, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetChatWidgetVisibility");

	Params::UFrontEnd_C_SetChatWidgetVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.InitForSubGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaTabsScreen_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabsScreen_C*           CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::InitForSubGame(bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UMainTabsScreen_C* CallFunc_Create_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum1_CmpSuccess)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "InitForSubGame");

	Params::UFrontEnd_C_InitForSubGame_Params Parms;
	Parms.CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie = CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue = CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1 = CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.GetActiveTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ActiveTab                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabsScreen_C*           K2Node_DynamicCast_AsMain_Tabs_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "GetActiveTab");

	Params::UFrontEnd_C_GetActiveTab_Params Parms;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tabs_Screen = K2Node_DynamicCast_AsMain_Tabs_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveTab != nullptr)
		*ActiveTab = Parms.ActiveTab;

}


// Function FrontEnd.FrontEnd_C.HandleWidgetStackChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopContentWidget_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingNavigationOp_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool CallFunc_HasPendingNavigationOp_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleWidgetStackChanged");

	Params::UFrontEnd_C_HandleWidgetStackChanged_Params Parms;
	Parms.Widget = Widget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PopContentWidget_ReturnValue = CallFunc_PopContentWidget_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;
	Parms.CallFunc_HasPendingNavigationOp_ReturnValue = CallFunc_HasPendingNavigationOp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)

void UFrontEnd_C::UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "UnbindDelegates");

	Params::UFrontEnd_C_UnbindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandlePopContentStackOp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_PopContentWidget_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandlePopContentStackOp");

	Params::UFrontEnd_C_HandlePopContentStackOp_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PopContentWidget_ReturnValue = CallFunc_PopContentWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PopContentWidgetInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_PopWigdet_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UFrontEnd_C::PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PopContentWidgetInternal");

	Params::UFrontEnd_C_PopContentWidgetInternal_Params Parms;
	Parms.State = State;
	Parms.CallFunc_PopWigdet_ReturnValue = CallFunc_PopWigdet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontEnd.FrontEnd_C.HandleQuestRewardClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    K2Node_DynamicCast_AsFort_Quest_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestType          CallFunc_GetQuestType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestRewardClaimed");

	Params::UFrontEnd_C_HandleQuestRewardClaimed_Params Parms;
	Parms.Quest = Quest;
	Parms.Rewards = Rewards;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Quest_Item_Definition = K2Node_DynamicCast_AsFort_Quest_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestType_ReturnValue = CallFunc_GetQuestType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)

void UFrontEnd_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "BindDelegates");

	Params::UFrontEnd_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleEnterFrontend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            UIState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            LocalUIState                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleEnterFrontend");

	Params::UFrontEnd_C_HandleEnterFrontend_Params Parms;
	Parms.UIState = UIState;
	Parms.LocalUIState = LocalUIState;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetFooterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::SetFooterVisibility(bool Visible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetFooterVisibility");

	Params::UFrontEnd_C_SetFooterVisibility_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PopContentWidget_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::PopContentWidget_Internal()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PopContentWidget_Internal");

	Params::UFrontEnd_C_PopContentWidget_Internal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.SetHeaderVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::SetHeaderVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "SetHeaderVisibility");

	Params::UFrontEnd_C_SetHeaderVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PushContentWidget_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HideHeader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideFooter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PushContentWidget_Internal");

	Params::UFrontEnd_C_PushContentWidget_Internal_Params Parms;
	Parms.InWidget = InWidget;
	Parms.HideHeader = HideHeader;
	Parms.HideFooter = HideFooter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.RegisterScriptedActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIState            InPreviousUIState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue12)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "RegisterScriptedActions");

	Params::UFrontEnd_C_RegisterScriptedActions_Params Parms;
	Parms.InPreviousUIState = InPreviousUIState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleMainMenuStateChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ActiveTab                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select1_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleMainMenuStateChanged");

	Params::UFrontEnd_C_HandleMainMenuStateChanged_Params Parms;
	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetActiveTab_ActiveTab = CallFunc_GetActiveTab_ActiveTab;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.On_MainAreaDarken_MouseButtonUp
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UFrontEnd_C::On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "On_MainAreaDarken_MouseButtonUp");

	Params::UFrontEnd_C_On_MainAreaDarken_MouseButtonUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontEnd.FrontEnd_C.HandleQuestsCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestsCompleted");

	Params::UFrontEnd_C_HandleQuestsCompleted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::HandleLobbyDisconnected()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleLobbyDisconnected");

	Params::UFrontEnd_C_HandleLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UFrontEnd_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "PushContentWidgetInternal");

	Params::UFrontEnd_C_PushContentWidgetInternal_Params Parms;
	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            NextUIState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::OnExitState(enum class EFortUIState NextUIState)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnExitState");

	Params::UFrontEnd_C_OnExitState_Params Parms;
	Parms.NextUIState = NextUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Destruct()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Destruct");

	Params::UFrontEnd_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.DailyRewardsTokenGranted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::DailyRewardsTokenGranted()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "DailyRewardsTokenGranted");

	Params::UFrontEnd_C_DailyRewardsTokenGranted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_FinishedModalWindows
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_FinishedModalWindows");

	Params::UFrontEnd_C_HandleClientEvent_FinishedModalWindows_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnFrontEndVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHideHeader                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideFooter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHideChatWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnFrontEndVisibilityUpdated");

	Params::UFrontEnd_C_OnFrontEndVisibilityUpdated_Params Parms;
	Parms.bHideHeader = bHideHeader;
	Parms.bHideFooter = bHideFooter;
	Parms.bHideChatWidget = bHideChatWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_EventMovieFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_EventMovieFinishedPlaying");

	Params::UFrontEnd_C_HandleClientEvent_EventMovieFinishedPlaying_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleClientEvent_NotPlayingEventMovie
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UFrontEnd_C::HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleClientEvent_NotPlayingEventMovie");

	Params::UFrontEnd_C_HandleClientEvent_NotPlayingEventMovie_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.RequestOpenSocialMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::RequestOpenSocialMenu()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "RequestOpenSocialMenu");

	Params::UFrontEnd_C_RequestOpenSocialMenu_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnGiftNotifyReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontEnd_C::OnGiftNotifyReceived()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnGiftNotifyReceived");

	Params::UFrontEnd_C_OnGiftNotifyReceived_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Gifting Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Gifting_Complete()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Gifting Complete");

	Params::UFrontEnd_C_Gifting_Complete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Check For Gifts
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Check_For_Gifts()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Check For Gifts");

	Params::UFrontEnd_C_Check_For_Gifts_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnGiftBoxRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::OnGiftBoxRemoved(bool bSuccess)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnGiftBoxRemoved");

	Params::UFrontEnd_C_OnGiftBoxRemoved_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEnd_C::Construct()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Construct");

	Params::UFrontEnd_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.Loading Screen Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::Loading_Screen_Changed(bool IsVisible)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "Loading Screen Changed");

	Params::UFrontEnd_C_Loading_Screen_Changed_Params Parms;
	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UFrontEnd_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.HandleQuestsGranted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>      Quests                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEnd_C::HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "HandleQuestsGranted");

	Params::UFrontEnd_C_HandleQuestsGranted_Params Parms;
	Parms.Quests = Quests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEnd_C::BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature");

	Params::UFrontEnd_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature_Params Parms;
	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature");

	Params::UFrontEnd_C_BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.On Can PTT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEnd_C::On_Can_PTT()
{
	static auto Func = Class->GetFunction("FrontEnd_C", "On Can PTT");

	Params::UFrontEnd_C_On_Can_PTT_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "OnEnterState");

	Params::UFrontEnd_C_OnEnterState_Params Parms;
	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEnd.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests1                                       (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContentPushState           K2Node_Event_State                                               (NoDestructor)
// enum class EFortUIState            K2Node_Event_NextUIState                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent12                           (ConstParm, NoDestructor)
// enum class EPTTState               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHideHeader                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideFooter                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHideChatWidget                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent1                            (ConstParm, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemReceived_Base_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsVisible                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemReceivedFlowActive_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGiftBoxItemDefinition*  CallFunc_GetGiftBoxDefinition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemReceived_PrePrompt_C*   K2Node_DynamicCast_AsItem_Received_Pre_Prompt                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestItem*>      K2Node_CustomEvent_Quests                                        (ConstParm, ZeroConstructor, ReferenceParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDailyRewardAvailable_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1234567891011                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456789101112                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678910111213                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1234567891011121314               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGiftBoxItem*            CallFunc_GetNextGiftBox_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEnd_C::ExecuteUbergraph_FrontEnd(int32 EntryPoint, enum class EPTTState Temp_byte_Variable, enum class EPTTState Temp_byte_Variable1, enum class EPTTState Temp_byte_Variable12, enum class EPTTState Temp_byte_Variable123, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPTTState CallFunc_GetPTTState_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue123, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests1, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EFortUIState K2Node_Event_NextUIState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1234, enum class EPTTState CallFunc_GetPTTState_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, enum class EPTTState K2Node_Select_Default, class UClass* Temp_class_Variable, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UClass* Temp_class_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1234, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, bool K2Node_Event_bSuccess, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, bool K2Node_CustomEvent_IsVisible, bool CallFunc_GetItemReceivedFlowActive_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue, class UItemReceived_PrePrompt_C* K2Node_DynamicCast_AsItem_Received_Pre_Prompt, bool K2Node_DynamicCast_bSuccess, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, class UFortMcpContext* CallFunc_GetContext_ReturnValue12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UClass* K2Node_Select12_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234567891011, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910111213, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class EFortUIState K2Node_Event_PreviousUIState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234567891011121314, class UFortGiftBoxItem* CallFunc_GetNextGiftBox_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEnd_C", "ExecuteUbergraph_FrontEnd");

	Params::UFrontEnd_C_ExecuteUbergraph_FrontEnd_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPTTState_ReturnValue = CallFunc_GetPTTState_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.K2Node_CustomEvent_Quests1 = K2Node_CustomEvent_Quests1;
	Parms.CallFunc_GetPTTState_ReturnValue1 = CallFunc_GetPTTState_ReturnValue1;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_Event_NextUIState = K2Node_Event_NextUIState;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetPTTState_ReturnValue12 = CallFunc_GetPTTState_ReturnValue12;
	Parms.K2Node_HandleClientEvent_EventSource12 = K2Node_HandleClientEvent_EventSource12;
	Parms.K2Node_HandleClientEvent_EventFocus12 = K2Node_HandleClientEvent_EventFocus12;
	Parms.K2Node_HandleClientEvent_ClientEvent12 = K2Node_HandleClientEvent_ClientEvent12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_Event_bHideHeader = K2Node_Event_bHideHeader;
	Parms.K2Node_Event_bHideFooter = K2Node_Event_bHideFooter;
	Parms.K2Node_Event_bHideChatWidget = K2Node_Event_bHideChatWidget;
	Parms.K2Node_HandleClientEvent_EventSource1 = K2Node_HandleClientEvent_EventSource1;
	Parms.K2Node_HandleClientEvent_EventFocus1 = K2Node_HandleClientEvent_EventFocus1;
	Parms.K2Node_HandleClientEvent_ClientEvent1 = K2Node_HandleClientEvent_ClientEvent1;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue = CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.K2Node_CustomEvent_IsVisible = K2Node_CustomEvent_IsVisible;
	Parms.CallFunc_GetItemReceivedFlowActive_ReturnValue = CallFunc_GetItemReceivedFlowActive_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue = CallFunc_GetGiftBoxDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Received_Pre_Prompt = K2Node_DynamicCast_AsItem_Received_Pre_Prompt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Quests = K2Node_CustomEvent_Quests;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward = CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward;
	Parms.CallFunc_IsDailyRewardAvailable_ReturnValue = CallFunc_IsDailyRewardAvailable_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_GetContext_ReturnValue1234567891011 = CallFunc_GetContext_ReturnValue1234567891011;
	Parms.CallFunc_GetContext_ReturnValue123456789101112 = CallFunc_GetContext_ReturnValue123456789101112;
	Parms.CallFunc_GetContext_ReturnValue12345678910111213 = CallFunc_GetContext_ReturnValue12345678910111213;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.CallFunc_GetContext_ReturnValue1234567891011121314 = CallFunc_GetContext_ReturnValue1234567891011121314;
	Parms.CallFunc_GetNextGiftBox_ReturnValue = CallFunc_GetNextGiftBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
