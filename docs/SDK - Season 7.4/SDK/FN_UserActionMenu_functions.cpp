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

// Function UserActionMenu.UserActionMenu_C.HandleOnlineIndicatorView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOnlineStatus                  OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::HandleOnlineIndicatorView(EOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.HandleOnlineIndicatorView");

	UUserActionMenu_C_HandleOnlineIndicatorView_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.OnSocialContextSet
// (Event, Protected, BlueprintEvent)

void UUserActionMenu_C::OnSocialContextSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnSocialContextSet");

	UUserActionMenu_C_OnSocialContextSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation");

	UUserActionMenu_C_OnToggleConfirmation_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.OnUserPresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EOnlineStatus                  OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::OnUserPresenceChanged(EOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnUserPresenceChanged");

	UUserActionMenu_C_OnUserPresenceChanged_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.OnEnableBackButtonDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnableBackButtonDisplay       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::OnEnableBackButtonDisplay(bool bEnableBackButtonDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnEnableBackButtonDisplay");

	UUserActionMenu_C_OnEnableBackButtonDisplay_Params params;
	params.bEnableBackButtonDisplay = bEnableBackButtonDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::ExecuteUbergraph_UserActionMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu");

	UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
