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

// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
// (Public, BlueprintCallable, BlueprintEvent)

void USocialPanel_C::Play_Panel_Animation_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.Play Panel Animation Sound");

	USocialPanel_C_Play_Panel_Animation_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void USocialPanel_C::ClosePanelAfterAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation");

	USocialPanel_C_ClosePanelAfterAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanel_C::OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.OnMouseButtonDown_1");

	USocialPanel_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USocialPanel_C::BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent");

	USocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USocialPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.OnActivated");

	USocialPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.ClosePanel
// (Event, Protected, BlueprintEvent)

void USocialPanel_C::ClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.ClosePanel");

	USocialPanel_C_ClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.PopSocialPanel
// (BlueprintCallable, BlueprintEvent)

void USocialPanel_C::PopSocialPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.PopSocialPanel");

	USocialPanel_C_PopSocialPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_C::ExecuteUbergraph_SocialPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel");

	USocialPanel_C_ExecuteUbergraph_SocialPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
