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

// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFancyToastWidget_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp");

	UFancyToastWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFancyToastWidget_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown");

	UFancyToastWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FancyToastWidget.FancyToastWidget_C.SetAndShowText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFancyToastWidget_C::SetAndShowText(struct FText Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.SetAndShowText");

	UFancyToastWidget_C_SetAndShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.ShowToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo   DisplayInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFancyToastWidget_C::ShowToast(struct FFortToastDisplayInfo DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.ShowToast");

	UFancyToastWidget_C_ShowToast_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFancyToastWidget_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnLoaded");

	UFancyToastWidget_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.OnShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo   DispalyInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFancyToastWidget_C::OnShowToast(struct FFortToastDisplayInfo DispalyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnShowToast");

	UFancyToastWidget_C_OnShowToast_Params params;
	params.DispalyInfo = DispalyInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.Start Toast Animation
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::Start_Toast_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.Start Toast Animation");

	UFancyToastWidget_C_Start_Toast_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.On Idle Finished
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::On_Idle_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.On Idle Finished");

	UFancyToastWidget_C_On_Idle_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.SimulateAthenaStoreToast
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::SimulateAthenaStoreToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.SimulateAthenaStoreToast");

	UFancyToastWidget_C_SimulateAthenaStoreToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.Clicked
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.Clicked");

	UFancyToastWidget_C_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.CompleteToast
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::CompleteToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.CompleteToast");

	UFancyToastWidget_C_CompleteToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.RemoveWidget");

	UFancyToastWidget_C_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UFancyToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1");

	UFancyToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UFancyToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2");

	UFancyToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UFancyToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3");

	UFancyToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFancyToastWidget_C::ExecuteUbergraph_FancyToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget");

	UFancyToastWidget_C_ExecuteUbergraph_FancyToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.OnToastClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::OnToastClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnToastClicked__DelegateSignature");

	UFancyToastWidget_C_OnToastClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FancyToastWidget.FancyToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFancyToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FancyToastWidget.FancyToastWidget_C.OnFinishedToast__DelegateSignature");

	UFancyToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
