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

// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanelWeGameFriendButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnHovered");

	USocialPanelWeGameFriendButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanelWeGameFriendButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnUnhovered");

	USocialPanelWeGameFriendButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.ExecuteUbergraph_SocialPanelWeGameFriendButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanelWeGameFriendButton_C::ExecuteUbergraph_SocialPanelWeGameFriendButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.ExecuteUbergraph_SocialPanelWeGameFriendButton");

	USocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
