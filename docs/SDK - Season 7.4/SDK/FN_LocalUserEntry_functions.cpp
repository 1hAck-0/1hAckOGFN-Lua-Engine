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

// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELocalUserOnlineStatus         InLocalUserOnlineStatus        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserEntry_C::HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView");

	ULocalUserEntry_C_HandleOnlineIndicatorView_Params params;
	params.InLocalUserOnlineStatus = InLocalUserOnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULocalUserEntry_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered");

	ULocalUserEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULocalUserEntry_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered");

	ULocalUserEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ELocalUserOnlineStatus         OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserEntry_C::OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged");

	ULocalUserEntry_C_OnOnlineStatusChanged_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserEntry_C::ExecuteUbergraph_LocalUserEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry");

	ULocalUserEntry_C_ExecuteUbergraph_LocalUserEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
