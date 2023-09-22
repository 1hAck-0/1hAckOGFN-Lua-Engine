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

// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTutorialToastWidget_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonUp");

	UTutorialToastWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTutorialToastWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonDown");

	UTutorialToastWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialToastWidget.TutorialToastWidget_C.SetAndShowText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTutorialToastWidget_C::SetAndShowText(struct FText Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.SetAndShowText");

	UTutorialToastWidget_C_SetAndShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.ShowToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo   DisplayInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialToastWidget_C::ShowToast(struct FFortToastDisplayInfo DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.ShowToast");

	UTutorialToastWidget_C_ShowToast_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialToastWidget_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnLoaded");

	UTutorialToastWidget_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.OnShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo   DispalyInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialToastWidget_C::OnShowToast(struct FFortToastDisplayInfo DispalyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnShowToast");

	UTutorialToastWidget_C_OnShowToast_Params params;
	params.DispalyInfo = DispalyInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.Start Toast Animation
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::Start_Toast_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.Start Toast Animation");

	UTutorialToastWidget_C_Start_Toast_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.On Idle Finished
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::On_Idle_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.On Idle Finished");

	UTutorialToastWidget_C_On_Idle_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.SimulateAthenaStoreToast
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::SimulateAthenaStoreToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.SimulateAthenaStoreToast");

	UTutorialToastWidget_C_SimulateAthenaStoreToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.Clicked
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.Clicked");

	UTutorialToastWidget_C_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.CompleteToast
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::CompleteToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.CompleteToast");

	UTutorialToastWidget_C_CompleteToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.RemoveWidget");

	UTutorialToastWidget_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UTutorialToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1");

	UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UTutorialToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2");

	UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UTutorialToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3");

	UTutorialToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.ExecuteUbergraph_TutorialToastWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialToastWidget_C::ExecuteUbergraph_TutorialToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.ExecuteUbergraph_TutorialToastWidget");

	UTutorialToastWidget_C_ExecuteUbergraph_TutorialToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.OnToastClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::OnToastClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnToastClicked__DelegateSignature");

	UTutorialToastWidget_C_OnToastClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialToastWidget.TutorialToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTutorialToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialToastWidget.TutorialToastWidget_C.OnFinishedToast__DelegateSignature");

	UTutorialToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
