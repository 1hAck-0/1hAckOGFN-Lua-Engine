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


// Function MainMenu.MainMenu_C.Handle Low Power Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::Handle_Low_Power_Mode(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Handle Low Power Mode");

	Params::UMainMenu_C_Handle_Low_Power_Mode_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateLowPowerMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInLowPerformanceMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::UpdateLowPowerMessage(bool Passthrough, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetInLowPerformanceMode_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateLowPowerMessage");

	Params::UMainMenu_C_UpdateLowPowerMessage_Params Parms;
	Parms.Passthrough = Passthrough;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInLowPerformanceMode_ReturnValue = CallFunc_GetInLowPerformanceMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortRemoteControlledPawnAthena*K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePawnSet(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePawnSet");

	Params::UMainMenu_C_HandlePawnSet_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena = K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.CrossplayPreferenceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::CrossplayPreferenceChanged(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainMenu_C", "CrossplayPreferenceChanged");

	Params::UMainMenu_C_CrossplayPreferenceChanged_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue = CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateFriendCodes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::UpdateFriendCodes(class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateFriendCodes");

	Params::UMainMenu_C_UpdateFriendCodes_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetButtonSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseLargeButtons                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   TargetIconSize                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Small_Size_Icon                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Large_Size_Icon                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min_Height                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinWidth                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::SetButtonSize(bool UseLargeButtons, const struct FVector2D& TargetIconSize, const struct FVector2D& Small_Size_Icon, const struct FVector2D& Large_Size_Icon, int32 Min_Height, int32 MinWidth)
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetButtonSize");

	Params::UMainMenu_C_SetButtonSize_Params Parms;
	Parms.UseLargeButtons = UseLargeButtons;
	Parms.TargetIconSize = TargetIconSize;
	Parms.Small_Size_Icon = Small_Size_Icon;
	Parms.Large_Size_Icon = Large_Size_Icon;
	Parms.Min_Height = Min_Height;
	Parms.MinWidth = MinWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.RecenterIfHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::RecenterIfHovered(class UWidget* InWidget, bool CallFunc_IsHovered_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "RecenterIfHovered");

	Params::UMainMenu_C_RecenterIfHovered_Params Parms;
	Parms.InWidget = InWidget;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ConfigureSubGameWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyBarAthena_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFullPartyBar_C*             CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::ConfigureSubGameWidgets(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFullPartyBarAthena_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFullPartyBar_C* CallFunc_Create_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UPanelSlot* CallFunc_AddChild_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ConfigureSubGameWidgets");

	Params::UMainMenu_C_ConfigureSubGameWidgets_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_AddChild_ReturnValue1 = CallFunc_AddChild_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Set Icon Button List Column Width
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingGamepad                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::Set_Icon_Button_List_Column_Width(bool IsUsingGamepad, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Set Icon Button List Column Width");

	Params::UMainMenu_C_Set_Icon_Button_List_Column_Width_Params Parms;
	Parms.IsUsingGamepad = IsUsingGamepad;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789                    (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910                  (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011                (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112              (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314          (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415        (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213141516      (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, class UCommonUIContext* CallFunc_GetContext_ReturnValue12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345678910)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindDelegates");

	Params::UMainMenu_C_BindDelegates_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789 = K2Node_CreateDelegate_OutputDelegate123456789;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910 = K2Node_CreateDelegate_OutputDelegate12345678910;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011 = K2Node_CreateDelegate_OutputDelegate1234567891011;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112 = K2Node_CreateDelegate_OutputDelegate123456789101112;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213 = K2Node_CreateDelegate_OutputDelegate12345678910111213;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314 = K2Node_CreateDelegate_OutputDelegate1234567891011121314;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415 = K2Node_CreateDelegate_OutputDelegate123456789101112131415;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213141516 = K2Node_CreateDelegate_OutputDelegate12345678910111213141516;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ProcessFriendCodes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::ProcessFriendCodes(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ProcessFriendCodes");

	Params::UMainMenu_C_ProcessFriendCodes_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue = CallFunc_GetNumFriendCodesToIssue_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue1 = CallFunc_GetNumFriendCodesToIssue_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnIssueFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFriendCode                 FriendCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenu_C::OnIssueFriendCodes(bool Success, struct FFriendCode& FriendCode)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnIssueFriendCodes");

	Params::UMainMenu_C_OnIssueFriendCodes_Params Parms;
	Parms.Success = Success;
	Parms.FriendCode = FriendCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.GetTotalNumFriendCodes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Num_Codes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumFriendCodes                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumFriendCodesToIssue_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFriendCode                 CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::GetTotalNumFriendCodes(int32* Num_Codes, int32 NumFriendCodes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue, int32 CallFunc_GetNumFriendCodesToIssue_ReturnValue1, const struct FFriendCode& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "GetTotalNumFriendCodes");

	Params::UMainMenu_C_GetTotalNumFriendCodes_Params Parms;
	Parms.NumFriendCodes = NumFriendCodes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue = CallFunc_GetNumFriendCodesToIssue_ReturnValue;
	Parms.CallFunc_GetNumFriendCodesToIssue_ReturnValue1 = CallFunc_GetNumFriendCodesToIssue_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue1 = CallFunc_EqualEqual_StrStr_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num_Codes != nullptr)
		*Num_Codes = Parms.Num_Codes;

}


// Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFriendCode>         FriendCodes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainMenu_C::OnQueryUnredeemedFriendCodes(bool Success, TArray<struct FFriendCode>& FriendCodes)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnQueryUnredeemedFriendCodes");

	Params::UMainMenu_C_OnQueryUnredeemedFriendCodes_Params Parms;
	Parms.Success = Success;
	Parms.FriendCodes = FriendCodes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.RefreshFriendCodesButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalNumFriendCodes_Num_Codes                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlatformSupportFriendCodes_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalNumFriendCodes_Num_Codes1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UMainMenu_C::RefreshFriendCodesButton(class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetTotalNumFriendCodes_Num_Codes, bool CallFunc_DoesPlatformSupportFriendCodes_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetTotalNumFriendCodes_Num_Codes1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "RefreshFriendCodesButton");

	Params::UMainMenu_C_RefreshFriendCodesButton_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTotalNumFriendCodes_Num_Codes = CallFunc_GetTotalNumFriendCodes_Num_Codes;
	Parms.CallFunc_DoesPlatformSupportFriendCodes_ReturnValue = CallFunc_DoesPlatformSupportFriendCodes_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTotalNumFriendCodes_Num_Codes1 = CallFunc_GetTotalNumFriendCodes_Num_Codes1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPartyState         New_State                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePartyStateChanged(enum class EFortPartyState New_State, enum class EFortPartyState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, bool Temp_bool_Variable1234567, bool Temp_bool_Variable12345678, bool Temp_bool_Variable123456789, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyStateChanged");

	Params::UMainMenu_C_HandlePartyStateChanged_Params Parms;
	Parms.New_State = New_State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.Temp_bool_Variable123456 = Temp_bool_Variable123456;
	Parms.Temp_bool_Variable1234567 = Temp_bool_Variable1234567;
	Parms.Temp_bool_Variable12345678 = Temp_bool_Variable12345678;
	Parms.Temp_bool_Variable123456789 = Temp_bool_Variable123456789;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleMatchmakingStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleMatchmakingStarted()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleMatchmakingStarted");

	Params::UMainMenu_C_HandleMatchmakingStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleLobbyDisconnected()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLobbyDisconnected");

	Params::UMainMenu_C_HandleLobbyDisconnected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleLobbyStarted()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLobbyStarted");

	Params::UMainMenu_C_HandleLobbyStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleMatchmakingComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleMatchmakingComplete");

	Params::UMainMenu_C_HandleMatchmakingComplete_Params Parms;
	Parms.Result = Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleActiveInvitesAmountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ActiveInvitesAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandleActiveInvitesAmountChanged(int32 ActiveInvitesAmount, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleActiveInvitesAmountChanged");

	Params::UMainMenu_C_HandleActiveInvitesAmountChanged_Params Parms;
	Parms.ActiveInvitesAmount = ActiveInvitesAmount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              Party_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::HandlePartyTypeChanged(enum class EPartyType Party_Type)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyTypeChanged");

	Params::UMainMenu_C_HandlePartyTypeChanged_Params Parms;
	Parms.Party_Type = Party_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyJoined
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandlePartyJoined()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyJoined");

	Params::UMainMenu_C_HandlePartyJoined_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     FeatureState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonReason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState, enum class EFortUIFeatureStateReason Reason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartybarUIFeatureChanged");

	Params::UMainMenu_C_HandlePartybarUIFeatureChanged_Params Parms;
	Parms.Feature = Feature;
	Parms.FeatureState = FeatureState;
	Parms.Reason = Reason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemovedIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::HandleRemotePlayerRemoved(int32 RemovedIndex)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleRemotePlayerRemoved");

	Params::UMainMenu_C_HandleRemotePlayerRemoved_Params Parms;
	Parms.RemovedIndex = RemovedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         NewMemberState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMainMenu_C::HandleRemotePlayerStateChanged(const struct FFortTeamMemberInfo& NewMemberState)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleRemotePlayerStateChanged");

	Params::UMainMenu_C_HandleRemotePlayerStateChanged_Params Parms;
	Parms.NewMemberState = NewMemberState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePartyLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandlePartyLeft()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePartyLeft");

	Params::UMainMenu_C_HandlePartyLeft_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         MemberState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UMainMenu_C::HandleLocalPlayerStateChanged(struct FFortTeamMemberInfo& MemberState)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleLocalPlayerStateChanged");

	Params::UMainMenu_C_HandleLocalPlayerStateChanged_Params Parms;
	Parms.MemberState = MemberState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandlePrivacySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              PartyPrivacyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FriendsOfFriends                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::HandlePrivacySelected(enum class EPartyType PartyPrivacyType, bool FriendsOfFriends, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandlePrivacySelected");

	Params::UMainMenu_C_HandlePrivacySelected_Params Parms;
	Parms.PartyPrivacyType = PartyPrivacyType;
	Parms.FriendsOfFriends = FriendsOfFriends;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OpenPartyPrivacy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::OpenPartyPrivacy(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OpenPartyPrivacy");

	Params::UMainMenu_C_OpenPartyPrivacy_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OpenPartyInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    UIManager                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              K2Node_DynamicCast_AsParty_Finder                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::OpenPartyInvites(class UFortUIManagerWidget_NUI* UIManager, bool CallFunc_IsTencentBuild_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OpenPartyInvites");

	Params::UMainMenu_C_OpenPartyInvites_Params Parms;
	Parms.UIManager = UIManager;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsParty_Finder = K2Node_DynamicCast_AsParty_Finder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetPrivacyButtonData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Button_Text                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UMainMenu_C::SetPrivacyButtonData(class UTexture2D* Image, class FText Button_Text, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetPrivacyButtonData");

	Params::UMainMenu_C_SetPrivacyButtonData_Params Parms;
	Parms.Image = Image;
	Parms.Button_Text = Button_Text;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdatePrivacyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPartyType              Overide_Party_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_Overide_Party_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPartyType              Party_Type                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPartyType              CallFunc_GetPartyPrivacySetting_OutPartyType                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPartyPrivacySetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::UpdatePrivacyButton(enum class EPartyType Overide_Party_Type, bool Use_Overide_Party_Type, enum class EPartyType Party_Type, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EPartyType CallFunc_GetPartyPrivacySetting_OutPartyType, bool CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly, bool CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly, bool CallFunc_GetPartyPrivacySetting_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdatePrivacyButton");

	Params::UMainMenu_C_UpdatePrivacyButton_Params Parms;
	Parms.Overide_Party_Type = Overide_Party_Type;
	Parms.Use_Overide_Party_Type = Use_Overide_Party_Type;
	Parms.Party_Type = Party_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPartyPrivacySetting_OutPartyType = CallFunc_GetPartyPrivacySetting_OutPartyType;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly = CallFunc_GetPartyPrivacySetting_OutLeaderFriendsOnly;
	Parms.CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly = CallFunc_GetPartyPrivacySetting_OutLeaderInvitesOnly;
	Parms.CallFunc_GetPartyPrivacySetting_ReturnValue = CallFunc_GetPartyPrivacySetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.IsOutpostOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutpostOwner                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerOutpost*K2Node_DynamicCast_AsFort_Player_Controller_Outpost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutpostOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::IsOutpostOwner(bool* OutpostOwner, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "IsOutpostOwner");

	Params::UMainMenu_C_IsOutpostOwner_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Outpost = K2Node_DynamicCast_AsFort_Player_Controller_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsOutpostOwner_ReturnValue = CallFunc_IsOutpostOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutpostOwner != nullptr)
		*OutpostOwner = Parms.OutpostOwner;

}


// Function MainMenu.MainMenu_C.PushDailyRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::PushDailyRewards(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123)
{
	static auto Func = Class->GetFunction("MainMenu_C", "PushDailyRewards");

	Params::UMainMenu_C_PushDailyRewards_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ProcessPartyBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::ProcessPartyBar()
{
	static auto Func = Class->GetFunction("MainMenu_C", "ProcessPartyBar");

	Params::UMainMenu_C_ProcessPartyBar_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsOutpostOwner_OutpostOwner                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::UpdateButtonStates(bool CallFunc_IsOutpostOwner_OutpostOwner, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasCompletedQuest_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateButtonStates");

	Params::UMainMenu_C_UpdateButtonStates_Params Parms;
	Parms.CallFunc_IsOutpostOwner_OutpostOwner = CallFunc_IsOutpostOwner_OutpostOwner;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.UpdateDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HelpText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenu_C::UpdateDescriptionText(class FText HelpText)
{
	static auto Func = Class->GetFunction("MainMenu_C", "UpdateDescriptionText");

	Params::UMainMenu_C_UpdateDescriptionText_Params Parms;
	Parms.HelpText = HelpText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InitializeMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowLogout_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UIconTextButton_C*>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrivacyWidget_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShowFriendCodesSelection_C* CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutpostOwner_OutpostOwner                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ArePartyFeaturesEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllowQuit_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMessageCenterWidget_C*      CallFunc_Create_ReturnValue12                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNews_C*                     CallFunc_Create_ReturnValue123                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPermissionsRoot_C*          CallFunc_Create_ReturnValue1234                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULegalInfo_C*                CallFunc_Create_ReturnValue12345                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenu_C*              CallFunc_Create_ReturnValue123456                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::InitializeMainMenu(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_AllowLogout_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, bool CallFunc_IsMobileApp_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1234, class UPrivacyWidget_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UShowFriendCodesSelection_C* CallFunc_Create_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345, bool CallFunc_IsOutpostOwner_OutpostOwner, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, bool CallFunc_ArePartyFeaturesEnabled_ReturnValue, bool CallFunc_AllowQuit_ReturnValue, bool CallFunc_IsInZone_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable123456, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable12, bool Temp_bool_Variable123, enum class ESlateVisibility K2Node_Select12_Default, enum class ESlateVisibility K2Node_Select123_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class UMessageCenterWidget_C* CallFunc_Create_ReturnValue12, class UNews_C* CallFunc_Create_ReturnValue123, class UPermissionsRoot_C* CallFunc_Create_ReturnValue1234, class ULegalInfo_C* CallFunc_Create_ReturnValue12345, class UOptionsMenu_C* CallFunc_Create_ReturnValue123456)
{
	static auto Func = Class->GetFunction("MainMenu_C", "InitializeMainMenu");

	Params::UMainMenu_C_InitializeMainMenu_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_AllowLogout_ReturnValue = CallFunc_AllowLogout_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.CallFunc_IsOutpostOwner_OutpostOwner = CallFunc_IsOutpostOwner_OutpostOwner;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_ArePartyFeaturesEnabled_ReturnValue = CallFunc_ArePartyFeaturesEnabled_ReturnValue;
	Parms.CallFunc_AllowQuit_ReturnValue = CallFunc_AllowQuit_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue1 = CallFunc_IsInZone_ReturnValue1;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_GetOwningPlayer_ReturnValue12 = CallFunc_GetOwningPlayer_ReturnValue12;
	Parms.CallFunc_Create_ReturnValue12 = CallFunc_Create_ReturnValue12;
	Parms.CallFunc_Create_ReturnValue123 = CallFunc_Create_ReturnValue123;
	Parms.CallFunc_Create_ReturnValue1234 = CallFunc_Create_ReturnValue1234;
	Parms.CallFunc_Create_ReturnValue12345 = CallFunc_Create_ReturnValue12345;
	Parms.CallFunc_Create_ReturnValue123456 = CallFunc_Create_ReturnValue123456;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetupTestUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFlagStatus             CallFunc_CheckFlag_OutStatus                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::SetupTestUI(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFlagStatus CallFunc_CheckFlag_OutStatus, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetupTestUI");

	Params::UMainMenu_C_SetupTestUI_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CheckFlag_OutStatus = CallFunc_CheckFlag_OutStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("MainMenu_C", "DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0");

	Params::UMainMenu_C_DialogResult_6DDAC27E47A3D5A11BE436A3ED3ADEA0_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("MainMenu_C", "DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7");

	Params::UMainMenu_C_DialogResult_5FDF347E45DFDFC5D3596B9DA0EB60E7_Params Parms;
	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnLoaded_C98E19534FBAE9329EE3CBBEA98305BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::OnLoaded_C98E19534FBAE9329EE3CBBEA98305BF(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnLoaded_C98E19534FBAE9329EE3CBBEA98305BF");

	Params::UMainMenu_C_OnLoaded_C98E19534FBAE9329EE3CBBEA98305BF_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_761_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_1102_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_1129_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_1157_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_338_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_375_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_467_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_545_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_584_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_626_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_737_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetCenterWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::SetCenterWidget()
{
	static auto Func = Class->GetFunction("MainMenu_C", "SetCenterWidget");

	Params::UMainMenu_C_SetCenterWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LeaveUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::LeaveUnhovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "LeaveUnhovered");

	Params::UMainMenu_C_LeaveUnhovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LeaveGameHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::LeaveGameHovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "LeaveGameHovered");

	Params::UMainMenu_C_LeaveGameHovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindLeaveHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::BindLeaveHovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindLeaveHovered");

	Params::UMainMenu_C_BindLeaveHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BindLeaveUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::BindLeaveUnhovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "BindLeaveUnhovered");

	Params::UMainMenu_C_BindLeaveUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_643_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_232_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_434_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_250_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_134_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_420_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_457_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_459_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_419_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_328_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_184_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_C::Destruct()
{
	static auto Func = Class->GetFunction("MainMenu_C", "Destruct");

	Params::UMainMenu_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11929_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PartyInvites_K2Node_ComponentBoundEvent_11976_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12023_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_12072_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12121_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_12172_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12223_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_12276_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_186_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleChangeGameModeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleChangeGameModeHovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleChangeGameModeHovered");

	Params::UMainMenu_C_HandleChangeGameModeHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::HandleChangeGameModeUnhovered()
{
	static auto Func = Class->GetFunction("MainMenu_C", "HandleChangeGameModeUnhovered");

	Params::UMainMenu_C_HandleChangeGameModeUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Handle Game Mode Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::Handle_Game_Mode_Unhovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Handle Game Mode Unhovered");

	Params::UMainMenu_C_Handle_Game_Mode_Unhovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Handle Game Mode Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::Handle_Game_Mode_Hovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "Handle Game Mode Hovered");

	Params::UMainMenu_C_Handle_Game_Mode_Hovered_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update Visibility__DelegateSignature");

	Params::UMainMenu_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_144_Update_Visibility__DelegateSignature_Params Parms;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_481_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_600_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_321_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_8_OnUpdateVisibility__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenu_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent_8_OnUpdateVisibility__DelegateSignature(bool Visibility)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__HelpButton_K2Node_ComponentBoundEvent_8_OnUpdateVisibility__DelegateSignature");

	Params::UMainMenu_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_8_OnUpdateVisibility__DelegateSignature_Params Parms;
	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_196_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent_196_OnButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__HelpButton_K2Node_ComponentBoundEvent_196_OnButtonHovered__DelegateSignature");

	Params::UMainMenu_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_196_OnButtonHovered__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenu_C::Construct()
{
	static auto Func = Class->GetFunction("MainMenu_C", "Construct");

	Params::UMainMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_295_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_295_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_295_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_295_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MainMenu_C", "BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMainMenu_C_BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetAthenaCodeOfConductURL_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowWebURL_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowCrossplayWarningDialog_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button123                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button12                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_GetButton_Leave12                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1234567891011                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue123456789101112                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetUITestingClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12345678910111213                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1234567891011121314               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123456789101112131415             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue12345678910111213141516           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567891011121314151617         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue12                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue123                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// class UBoostsRoot_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1234                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718192021(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617181920 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516171819   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415161718     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314151617       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213141516         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112131415           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011121314             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue1                               ()
// enum class EFortDialogResult       Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910111213               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789101112                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button1                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Visibility1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue123456789101112131415161718       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Visibility                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue12345678910111213141516171819     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue12345                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBacchusControlsHelp_C*      K2Node_DynamicCast_AsBacchus_Controls_Help                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue123456                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue12                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutTool_C*            K2Node_DynamicCast_AsHUDLayout_Tool                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567891011121314151617181920   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const class FString& CallFunc_GetAthenaCodeOfConductURL_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShowWebURL_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame Temp_byte_Variable12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, bool CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue, bool CallFunc_ShouldShowCrossplayWarningDialog_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonInputContext* CallFunc_GetContext_ReturnValue12345, bool Temp_bool_Variable1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1234567, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950, class FText CallFunc_GetEmptyText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, bool CallFunc_IsInZone_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142, class UCommonButton* K2Node_CustomEvent_Button123, class UIconTextButton_C* CallFunc_GetButton_Leave, class UCommonButton* K2Node_CustomEvent_Button12, class UIconTextButton_C* CallFunc_GetButton_Leave1, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041, class UFortHUDContext* CallFunc_GetContext_ReturnValue123456789, class UIconTextButton_C* CallFunc_GetButton_Leave12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637, class UCommonUIContext* CallFunc_GetContext_ReturnValue12345678910, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567891011, class UCommonUIContext* CallFunc_GetContext_ReturnValue123456789101112, class UClass* CallFunc_GetUITestingClass_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345678910111213, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567891011121314, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456789101112131415, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910111213141516, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011121314151617, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue12, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue123, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425, enum class EFortDialogResult Temp_byte_Variable12345678, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UBoostsRoot_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1234, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718192021, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617181920, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516171819, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415161718, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314151617, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213141516, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112131415, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011121314, class FText CallFunc_GetEmptyText_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable123456789, bool K2Node_SwitchEnum1_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910111213, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789101112, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011, class UCommonButton* K2Node_CustomEvent_Button1, class UCommonButton* K2Node_CustomEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_ComponentBoundEvent_Visibility1, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567, class FName Temp_name_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button123456, class UFortHUDContext* CallFunc_GetContext_ReturnValue123456789101112131415161718, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_ReturnValue1, bool K2Node_ComponentBoundEvent_Visibility, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UCommonUIContext* CallFunc_GetContext_ReturnValue12345678910111213141516171819, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue12345, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue12, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue1, class UBacchusControlsHelp_C* K2Node_DynamicCast_AsBacchus_Controls_Help, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue12, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button123, enum class ESlateVisibility K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue123456, bool CallFunc_IsValid_ReturnValue123, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue12, class UHUDLayoutTool_C* K2Node_DynamicCast_AsHUDLayout_Tool, bool K2Node_DynamicCast_bSuccess1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011121314151617181920, bool CallFunc_IsInZone_ReturnValue1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select12_Default)
{
	static auto Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::UMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetAthenaCodeOfConductURL_ReturnValue = CallFunc_GetAthenaCodeOfConductURL_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ShowWebURL_ReturnValue = CallFunc_ShowWebURL_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue = CallFunc_ShouldShowMainMenuFriendsListButton_ReturnValue;
	Parms.CallFunc_ShouldShowCrossplayWarningDialog_ReturnValue = CallFunc_ShouldShowCrossplayWarningDialog_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445464748;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344454647;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243444546;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142434445;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041424344;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940414243;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839404142;
	Parms.K2Node_CustomEvent_Button123 = K2Node_CustomEvent_Button123;
	Parms.CallFunc_GetButton_Leave = CallFunc_GetButton_Leave;
	Parms.K2Node_CustomEvent_Button12 = K2Node_CustomEvent_Button12;
	Parms.CallFunc_GetButton_Leave1 = CallFunc_GetButton_Leave1;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738394041;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.CallFunc_GetButton_Leave12 = CallFunc_GetButton_Leave12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637383940;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536373839;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435363738;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334353637;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1234567891011 = CallFunc_GetContext_ReturnValue1234567891011;
	Parms.CallFunc_GetContext_ReturnValue123456789101112 = CallFunc_GetContext_ReturnValue123456789101112;
	Parms.CallFunc_GetUITestingClass_ReturnValue = CallFunc_GetUITestingClass_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue1 = CallFunc_GetInputManager_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12345678910111213 = CallFunc_GetContext_ReturnValue12345678910111213;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233343536;
	Parms.CallFunc_GetContext_ReturnValue1234567891011121314 = CallFunc_GetContext_ReturnValue1234567891011121314;
	Parms.CallFunc_GetContext_ReturnValue123456789101112131415 = CallFunc_GetContext_ReturnValue123456789101112131415;
	Parms.CallFunc_GetContext_ReturnValue12345678910111213141516 = CallFunc_GetContext_ReturnValue12345678910111213141516;
	Parms.CallFunc_GetContext_ReturnValue1234567891011121314151617 = CallFunc_GetContext_ReturnValue1234567891011121314151617;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132333435;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031323334;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930313233;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829303132;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728293031;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627282930;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526272829;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425262728;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324252627;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue12 = CallFunc_GetUIManagerWidget_ReturnValue12;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223242526;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue123 = CallFunc_GetUIManagerWidget_ReturnValue123;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122232425;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1234 = CallFunc_GetUIManagerWidget_ReturnValue1234;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021222324;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920212223;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819202122;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718192021 = K2Node_ComponentBoundEvent_Button123456789101112131415161718192021;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617181920 = K2Node_ComponentBoundEvent_Button1234567891011121314151617181920;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516171819 = K2Node_ComponentBoundEvent_Button12345678910111213141516171819;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415161718 = K2Node_ComponentBoundEvent_Button123456789101112131415161718;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314151617 = K2Node_ComponentBoundEvent_Button1234567891011121314151617;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213141516 = K2Node_ComponentBoundEvent_Button12345678910111213141516;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112131415 = K2Node_ComponentBoundEvent_Button123456789101112131415;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011121314 = K2Node_ComponentBoundEvent_Button1234567891011121314;
	Parms.CallFunc_GetEmptyText_ReturnValue1 = CallFunc_GetEmptyText_ReturnValue1;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Button12345678910111213 = K2Node_ComponentBoundEvent_Button12345678910111213;
	Parms.K2Node_ComponentBoundEvent_Button123456789101112 = K2Node_ComponentBoundEvent_Button123456789101112;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011 = K2Node_ComponentBoundEvent_Button1234567891011;
	Parms.K2Node_CustomEvent_Button1 = K2Node_CustomEvent_Button1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Visibility1 = K2Node_ComponentBoundEvent_Visibility1;
	Parms.K2Node_ComponentBoundEvent_Button12345678910 = K2Node_ComponentBoundEvent_Button12345678910;
	Parms.K2Node_ComponentBoundEvent_Button123456789 = K2Node_ComponentBoundEvent_Button123456789;
	Parms.K2Node_ComponentBoundEvent_Button12345678 = K2Node_ComponentBoundEvent_Button12345678;
	Parms.K2Node_ComponentBoundEvent_Button1234567 = K2Node_ComponentBoundEvent_Button1234567;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_ComponentBoundEvent_Button123456 = K2Node_ComponentBoundEvent_Button123456;
	Parms.CallFunc_GetContext_ReturnValue123456789101112131415161718 = CallFunc_GetContext_ReturnValue123456789101112131415161718;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Visibility = K2Node_ComponentBoundEvent_Visibility;
	Parms.K2Node_ComponentBoundEvent_Button12345 = K2Node_ComponentBoundEvent_Button12345;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.K2Node_ComponentBoundEvent_Button1234 = K2Node_ComponentBoundEvent_Button1234;
	Parms.CallFunc_GetContext_ReturnValue12345678910111213141516171819 = CallFunc_GetContext_ReturnValue12345678910111213141516171819;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue12345 = CallFunc_GetUIManagerWidget_ReturnValue12345;
	Parms.CallFunc_GetInputManager_ReturnValue12 = CallFunc_GetInputManager_ReturnValue12;
	Parms.CallFunc_GetCachedWidget_ReturnValue1 = CallFunc_GetCachedWidget_ReturnValue1;
	Parms.K2Node_DynamicCast_AsBacchus_Controls_Help = K2Node_DynamicCast_AsBacchus_Controls_Help;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button123 = K2Node_ComponentBoundEvent_Button123;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue123456 = CallFunc_GetUIManagerWidget_ReturnValue123456;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.CallFunc_GetCachedWidget_ReturnValue12 = CallFunc_GetCachedWidget_ReturnValue12;
	Parms.K2Node_DynamicCast_AsHUDLayout_Tool = K2Node_DynamicCast_AsHUDLayout_Tool;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetContext_ReturnValue1234567891011121314151617181920 = CallFunc_GetContext_ReturnValue1234567891011121314151617181920;
	Parms.CallFunc_IsInZone_ReturnValue1 = CallFunc_IsInZone_ReturnValue1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue1 = CallFunc_GetRuntimeOptions_ReturnValue1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnRequestShowSocialWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::OnRequestShowSocialWidget__DelegateSignature()
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnRequestShowSocialWidget__DelegateSignature");

	Params::UMainMenu_C_OnRequestShowSocialWidget__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenu_C::OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto Func = Class->GetFunction("MainMenu_C", "OnRequestShowFeedbackWidget__DelegateSignature");

	Params::UMainMenu_C_OnRequestShowFeedbackWidget__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
