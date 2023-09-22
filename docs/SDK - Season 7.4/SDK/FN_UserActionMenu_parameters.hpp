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

// Function UserActionMenu.UserActionMenu_C.HandleOnlineIndicatorView
struct UUserActionMenu_C_HandleOnlineIndicatorView_Params
{
	EOnlineStatus                                      OnlineStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserActionMenu.UserActionMenu_C.OnSocialContextSet
struct UUserActionMenu_C_OnSocialContextSet_Params
{
};

// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
struct UUserActionMenu_C_OnToggleConfirmation_Params
{
	bool                                               bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserActionMenu.UserActionMenu_C.OnUserPresenceChanged
struct UUserActionMenu_C_OnUserPresenceChanged_Params
{
	EOnlineStatus                                      OnlineStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserActionMenu.UserActionMenu_C.OnEnableBackButtonDisplay
struct UUserActionMenu_C_OnEnableBackButtonDisplay_Params
{
	bool                                               bEnableBackButtonDisplay;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
struct UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
