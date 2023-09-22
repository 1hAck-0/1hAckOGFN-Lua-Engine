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

// Function UserListEntry_XS.UserListEntry_XS_C.HandleOnlineIndicatorView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOnlineStatus                  OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListEntry_XS_C::HandleOnlineIndicatorView(EOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.HandleOnlineIndicatorView");

	UUserListEntry_XS_C_HandleOnlineIndicatorView_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent");

	UUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListEntry_XS_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.OnListItemObjectSet");

	UUserListEntry_XS_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.OnUserPresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EOnlineStatus                  OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListEntry_XS_C::OnUserPresenceChanged(EOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.OnUserPresenceChanged");

	UUserListEntry_XS_C_OnUserPresenceChanged_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UUserListEntry_XS_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.BP_OnUnhovered");

	UUserListEntry_XS_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UUserListEntry_XS_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.BP_OnHovered");

	UUserListEntry_XS_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListEntry_XS.UserListEntry_XS_C.ExecuteUbergraph_UserListEntry_XS
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListEntry_XS_C::ExecuteUbergraph_UserListEntry_XS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserListEntry_XS.UserListEntry_XS_C.ExecuteUbergraph_UserListEntry_XS");

	UUserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
