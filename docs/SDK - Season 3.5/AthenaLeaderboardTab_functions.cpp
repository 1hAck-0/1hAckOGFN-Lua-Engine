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


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.HandleBackAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::HandleBackAction(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "HandleBackAction");

	Params::UAthenaLeaderboardTab_C_HandleBackAction_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ToggleDisabledTabVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldBeDisabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::ToggleDisabledTabVisuals(bool bShouldBeDisabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "ToggleDisabledTabVisuals");

	Params::UAthenaLeaderboardTab_C_ToggleDisabledTabVisuals_Params Parms;
	Parms.bShouldBeDisabled = bShouldBeDisabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnShowQueryThrobber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnShowQueryThrobber()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnShowQueryThrobber");

	Params::UAthenaLeaderboardTab_C_OnShowQueryThrobber_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bQueryInProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAthenaLeaderboardTab_C::OnQueryStateChanged(bool bQueryInProgress, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryStateChanged");

	Params::UAthenaLeaderboardTab_C_OnQueryStateChanged_Params Parms;
	Parms.bQueryInProgress = bQueryInProgress;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue = CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnFriendTypeChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommitted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::OnFriendTypeChangeGamepad(bool* bCommitted, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnFriendTypeChangeGamepad");

	Params::UAthenaLeaderboardTab_C_OnFriendTypeChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommitted != nullptr)
		*bCommitted = Parms.bCommitted;

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnPlaylistChangeGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommitted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLeaderboardTab_C::OnPlaylistChangeGamepad(bool* bCommitted, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnPlaylistChangeGamepad");

	Params::UAthenaLeaderboardTab_C_OnPlaylistChangeGamepad_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bCommitted != nullptr)
		*bCommitted = Parms.bCommitted;

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "Construct");

	Params::UAthenaLeaderboardTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveWidgetIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature_Params Parms;
	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateTabButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaPlaylistLeaderboardDataPlaylistTabData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateTabButtonText");

	Params::UAthenaLeaderboardTab_C_OnUpdateTabButtonText_Params Parms;
	Parms.Button = Button;
	Parms.PlaylistTabData = PlaylistTabData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateLeaderboardListUI
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardRowProxyInstance*LocalUserRow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        QueryErrorStr                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateLeaderboardListUI");

	Params::UAthenaLeaderboardTab_C_OnUpdateLeaderboardListUI_Params Parms;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.LocalUserRow = LocalUserRow;
	Parms.QueryErrorStr = QueryErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnUpdateListHeader
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaPlaylistLeaderboardDataPlaylistTabData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTab_C::OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnUpdateListHeader");

	Params::UAthenaLeaderboardTab_C_OnUpdateListHeader_Params Parms;
	Parms.PlaylistTabData = PlaylistTabData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnDeactivated");

	Params::UAthenaLeaderboardTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnQueryFinished()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryFinished");

	Params::UAthenaLeaderboardTab_C_OnQueryFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnQueryStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnQueryStarted()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnQueryStarted");

	Params::UAthenaLeaderboardTab_C_OnQueryStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLeaderboardTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "OnActivated");

	Params::UAthenaLeaderboardTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLeaderboardTab_C_BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLeaderboardTab.AthenaLeaderboardTab_C.ExecuteUbergraph_AthenaLeaderboardTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowLeaderboards_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanShowGlobalLeaderboards_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567891011                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_ActiveWidget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ActiveWidgetIndex                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_Event_Button                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaPlaylistLeaderboardDataK2Node_Event_PlaylistTabData1                                    (ConstParm)
// bool                               K2Node_Event_bWasSuccessful                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardRowProxyInstance*K2Node_Event_LocalUserRow                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_QueryErrorStr                                       (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaLeaderboardTabButton_C*K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaPlaylistLeaderboardDataK2Node_Event_PlaylistTabData                                     (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123456789101112                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678910111213                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select12345_Default                                       ()
// bool                               Temp_bool_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator12                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess123                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator123                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1234                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowLeaderboards_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select123456_Default                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBackAction_PassThrough                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue123                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1234567_Default                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select12345678_Default                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLeaderboardTab_C::ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable12, bool CallFunc_CanShowLeaderboards_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable123, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable1234, bool CallFunc_CanShowGlobalLeaderboards_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, bool Temp_bool_Variable12345, enum class ESlateVisibility Temp_byte_Variable12345678910, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1234567891011, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_ComponentBoundEvent_Value1, int32 K2Node_ComponentBoundEvent_Value, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_Map_Remove_ReturnValue, class UCommonButton* K2Node_Event_Button, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData1, bool K2Node_Event_bWasSuccessful, class UFortLeaderboardRowProxyInstance* K2Node_Event_LocalUserRow, class FText K2Node_Event_QueryErrorStr, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UAthenaLeaderboardTabButton_C* K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button, bool K2Node_DynamicCast_bSuccess, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Variable123456, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456789101112, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345678910111213, enum class ESlateVisibility K2Node_Select123_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select1234_Default, class FText K2Node_Select12345_Default, bool Temp_bool_Variable1234567, bool CallFunc_SelectTabByID_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsBROnly_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator1, bool K2Node_DynamicCast_bSuccess12, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator12, bool K2Node_DynamicCast_bSuccess123, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator123, bool K2Node_DynamicCast_bSuccess1234, bool CallFunc_IsBROnly_ReturnValue1, bool CallFunc_IsBROnly_ReturnValue12, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, bool CallFunc_CanShowLeaderboards_ReturnValue1, int32 Temp_int_Variable, enum class ESlateVisibility K2Node_Select123456_Default, int32 Temp_int_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_HandleBackAction_PassThrough, bool CallFunc_IsBROnly_ReturnValue123, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable12345678, enum class ESlateVisibility K2Node_Select1234567_Default, int32 K2Node_Select12345678_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaLeaderboardTab_C", "ExecuteUbergraph_AthenaLeaderboardTab");

	Params::UAthenaLeaderboardTab_C_ExecuteUbergraph_AthenaLeaderboardTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_CanShowLeaderboards_ReturnValue = CallFunc_CanShowLeaderboards_ReturnValue;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.CallFunc_CanShowGlobalLeaderboards_ReturnValue = CallFunc_CanShowGlobalLeaderboards_ReturnValue;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable1234567891011 = Temp_byte_Variable1234567891011;
	Parms.K2Node_ComponentBoundEvent_TabId1 = K2Node_ComponentBoundEvent_TabId1;
	Parms.K2Node_ComponentBoundEvent_TabButton1 = K2Node_ComponentBoundEvent_TabButton1;
	Parms.K2Node_ComponentBoundEvent_ActiveWidget = K2Node_ComponentBoundEvent_ActiveWidget;
	Parms.K2Node_ComponentBoundEvent_ActiveWidgetIndex = K2Node_ComponentBoundEvent_ActiveWidgetIndex;
	Parms.K2Node_ComponentBoundEvent_Value1 = K2Node_ComponentBoundEvent_Value1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_Event_PlaylistTabData1 = K2Node_Event_PlaylistTabData1;
	Parms.K2Node_Event_bWasSuccessful = K2Node_Event_bWasSuccessful;
	Parms.K2Node_Event_LocalUserRow = K2Node_Event_LocalUserRow;
	Parms.K2Node_Event_QueryErrorStr = K2Node_Event_QueryErrorStr;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button = K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PlaylistTabData = K2Node_Event_PlaylistTabData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_bool_Variable123456 = Temp_bool_Variable123456;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue = CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue;
	Parms.Temp_byte_Variable123456789101112 = Temp_byte_Variable123456789101112;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable12345678910111213 = Temp_byte_Variable12345678910111213;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.Temp_bool_Variable1234567 = Temp_bool_Variable1234567;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Rotator1 = K2Node_DynamicCast_AsAthena_Rotator1;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_ComponentBoundEvent_Button123 = K2Node_ComponentBoundEvent_Button123;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.K2Node_DynamicCast_AsAthena_Rotator12 = K2Node_DynamicCast_AsAthena_Rotator12;
	Parms.K2Node_DynamicCast_bSuccess123 = K2Node_DynamicCast_bSuccess123;
	Parms.K2Node_DynamicCast_AsAthena_Rotator123 = K2Node_DynamicCast_AsAthena_Rotator123;
	Parms.K2Node_DynamicCast_bSuccess1234 = K2Node_DynamicCast_bSuccess1234;
	Parms.CallFunc_IsBROnly_ReturnValue1 = CallFunc_IsBROnly_ReturnValue1;
	Parms.CallFunc_IsBROnly_ReturnValue12 = CallFunc_IsBROnly_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_CanShowLeaderboards_ReturnValue1 = CallFunc_CanShowLeaderboards_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select123456_Default = K2Node_Select123456_Default;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_HandleBackAction_PassThrough = CallFunc_HandleBackAction_PassThrough;
	Parms.CallFunc_IsBROnly_ReturnValue123 = CallFunc_IsBROnly_ReturnValue123;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue1 = CallFunc_IsMobileGame_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable12345678 = Temp_bool_Variable12345678;
	Parms.K2Node_Select1234567_Default = K2Node_Select1234567_Default;
	Parms.K2Node_Select12345678_Default = K2Node_Select12345678_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
