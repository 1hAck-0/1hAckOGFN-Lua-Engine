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

// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendLinkButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered");

	USocialPanel_FriendLinkButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendLinkButton_C::OnCopiedToClipboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard");

	USocialPanel_FriendLinkButton_C_OnCopiedToClipboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendLinkButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered");

	USocialPanel_FriendLinkButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialPanel_FriendLinkButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct");

	USocialPanel_FriendLinkButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFriendLinkShareButtonType     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_FriendLinkButton_C::OnShareButtonTypeSet(EFriendLinkShareButtonType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet");

	USocialPanel_FriendLinkButton_C_OnShareButtonTypeSet_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_FriendLinkButton_C::ExecuteUbergraph_SocialPanel_FriendLinkButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton");

	USocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
