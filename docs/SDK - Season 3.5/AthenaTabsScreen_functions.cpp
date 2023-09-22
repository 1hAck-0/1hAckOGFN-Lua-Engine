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


// Function AthenaTabsScreen.AthenaTabsScreen_C.SetTopBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTopBar_C*                   InTopbar                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::SetTopBar(class UTopBar_C* InTopbar)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "SetTopBar");

	Params::UAthenaTabsScreen_C_SetTopBar_Params Parms;
	Parms.InTopbar = InTopbar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabSelected(class FName TabName, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabSelected");

	Params::UAthenaTabsScreen_C_HandleTabSelected_Params Parms;
	Parms.TabName = TabName;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UClass* Temp_class_Variable, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class UClass* Temp_class_Variable1, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, class UClass* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabCreated");

	Params::UAthenaTabsScreen_C_HandleTabCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "OnActivated");

	Params::UAthenaTabsScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "OnDeactivated");

	Params::UAthenaTabsScreen_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           TabWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabContentCreated");

	Params::UAthenaTabsScreen_C_HandleTabContentCreated_Params Parms;
	Parms.TabId = TabId;
	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTabsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "Construct");

	Params::UAthenaTabsScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature");

	Params::UAthenaTabsScreen_C_BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTabsScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "PreConstruct");

	Params::UAthenaTabsScreen_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActiveFriendsCountUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveFriendsCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::OnActiveFriendsCountUpdated(int32 ActiveFriendsCount)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "OnActiveFriendsCountUpdated");

	Params::UAthenaTabsScreen_C_OnActiveFriendsCountUpdated_Params Parms;
	Parms.ActiveFriendsCount = ActiveFriendsCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.DisableTabsHotfixedOffTabs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::DisableTabsHotfixedOffTabs(class FName TabId, class UCommonButton* NewParam)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "DisableTabsHotfixedOffTabs");

	Params::UAthenaTabsScreen_C_DisableTabsHotfixedOffTabs_Params Parms;
	Parms.TabId = TabId;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue           (ConstParm, ZeroConstructor, ReferenceParm)
// class FName                        K2Node_CustomEvent_TabId1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           K2Node_CustomEvent_TabWidget                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_Root_C*           K2Node_DynamicCast_AsStore_Main_Root                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin1                                        (IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabListRegistrationInfoCallFunc_GetPreregisteredTabInfo_OutTabInfo                      (ContainsInstancedReference)
// bool                               CallFunc_GetPreregisteredTabInfo_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess123                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List12                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1234                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List123                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12345                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ActiveFriendsCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortSocialItem*>     CallFunc_GetActiveFriendsList_OutActiveFriends                   (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortLeaderboardContext*     CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShowLeaderboards_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTabsScreen_C::ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class FName>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, class FName K2Node_CustomEvent_TabId1, class UCommonUserWidget* K2Node_CustomEvent_TabWidget, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class FString>& K2Node_MakeArray_Array, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List1, bool K2Node_DynamicCast_bSuccess12, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class FName K2Node_ComponentBoundEvent_TabId, const struct FFortTabListRegistrationInfo& CallFunc_GetPreregisteredTabInfo_OutTabInfo, bool CallFunc_GetPreregisteredTabInfo_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_IsBROnly_ReturnValue, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Array_Contains_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List12, bool K2Node_DynamicCast_bSuccess1234, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List123, bool K2Node_DynamicCast_bSuccess12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 K2Node_CustomEvent_ActiveFriendsCount, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FName K2Node_CustomEvent_TabId, class UCommonButton* K2Node_CustomEvent_NewParam, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_CanShowLeaderboards_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaTabsScreen_C", "ExecuteUbergraph_AthenaTabsScreen");

	Params::UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue = CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue;
	Parms.K2Node_CustomEvent_TabId1 = K2Node_CustomEvent_TabId1;
	Parms.K2Node_CustomEvent_TabWidget = K2Node_CustomEvent_TabWidget;
	Parms.K2Node_DynamicCast_AsStore_Main_Root = K2Node_DynamicCast_AsStore_Main_Root;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List = K2Node_DynamicCast_AsHorizontal_Tab_List;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List1 = K2Node_DynamicCast_AsHorizontal_Tab_List1;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin1 = K2Node_MakeStruct_Margin1;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.CallFunc_GetPreregisteredTabInfo_OutTabInfo = CallFunc_GetPreregisteredTabInfo_OutTabInfo;
	Parms.CallFunc_GetPreregisteredTabInfo_ReturnValue = CallFunc_GetPreregisteredTabInfo_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TabId1 = K2Node_ComponentBoundEvent_TabId1;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess123 = K2Node_DynamicCast_bSuccess123;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12 = CallFunc_EqualEqual_NameName_ReturnValue12;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List12 = K2Node_DynamicCast_AsHorizontal_Tab_List12;
	Parms.K2Node_DynamicCast_bSuccess1234 = K2Node_DynamicCast_bSuccess1234;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List123 = K2Node_DynamicCast_AsHorizontal_Tab_List123;
	Parms.K2Node_DynamicCast_bSuccess12345 = K2Node_DynamicCast_bSuccess12345;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_ActiveFriendsCount = K2Node_CustomEvent_ActiveFriendsCount;
	Parms.CallFunc_GetActiveFriendsList_OutActiveFriends = CallFunc_GetActiveFriendsList_OutActiveFriends;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_CanShowLeaderboards_ReturnValue = CallFunc_CanShowLeaderboards_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue123 = CallFunc_EqualEqual_NameName_ReturnValue123;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
