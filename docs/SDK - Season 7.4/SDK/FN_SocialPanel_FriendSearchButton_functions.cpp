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

// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.On_ClickCapture_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanel_FriendSearchButton_C::On_ClickCapture_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.On_ClickCapture_MouseButtonDown_1");

	USocialPanel_FriendSearchButton_C_On_ClickCapture_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnHovered");

	USocialPanel_FriendSearchButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnUnhovered");

	USocialPanel_FriendSearchButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.ExecuteUbergraph_SocialPanel_FriendSearchButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_FriendSearchButton_C::ExecuteUbergraph_SocialPanel_FriendSearchButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.ExecuteUbergraph_SocialPanel_FriendSearchButton");

	USocialPanel_FriendSearchButton_C_ExecuteUbergraph_SocialPanel_FriendSearchButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
