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

// Function OnlineStatusPanel.OnlineStatusPanel_C.OnFocused
// (Event, Protected, BlueprintEvent)

void UOnlineStatusPanel_C::OnFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusPanel.OnlineStatusPanel_C.OnFocused");

	UOnlineStatusPanel_C_OnFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineStatusPanel.OnlineStatusPanel_C.ExecuteUbergraph_OnlineStatusPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnlineStatusPanel_C::ExecuteUbergraph_OnlineStatusPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusPanel.OnlineStatusPanel_C.ExecuteUbergraph_OnlineStatusPanel");

	UOnlineStatusPanel_C_ExecuteUbergraph_OnlineStatusPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
