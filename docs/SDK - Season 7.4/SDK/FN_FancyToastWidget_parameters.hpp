#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp
struct UFancyToastWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown
struct UFancyToastWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FancyToastWidget.FancyToastWidget_C.SetAndShowText
struct UFancyToastWidget_C_SetAndShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FancyToastWidget.FancyToastWidget_C.ShowToast
struct UFancyToastWidget_C_ShowToast_Params
{
	struct FFortToastDisplayInfo                       DisplayInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FancyToastWidget.FancyToastWidget_C.OnLoaded
struct UFancyToastWidget_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FancyToastWidget.FancyToastWidget_C.OnShowToast
struct UFancyToastWidget_C_OnShowToast_Params
{
	struct FFortToastDisplayInfo                       DispalyInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FancyToastWidget.FancyToastWidget_C.Start Toast Animation
struct UFancyToastWidget_C_Start_Toast_Animation_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.On Idle Finished
struct UFancyToastWidget_C_On_Idle_Finished_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.SimulateAthenaStoreToast
struct UFancyToastWidget_C_SimulateAthenaStoreToast_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.Clicked
struct UFancyToastWidget_C_Clicked_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.CompleteToast
struct UFancyToastWidget_C_CompleteToast_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.RemoveWidget
struct UFancyToastWidget_C_RemoveWidget_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
struct UFancyToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2
struct UFancyToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3
struct UFancyToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget
struct UFancyToastWidget_C_ExecuteUbergraph_FancyToastWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FancyToastWidget.FancyToastWidget_C.OnToastClicked__DelegateSignature
struct UFancyToastWidget_C_OnToastClicked__DelegateSignature_Params
{
};

// Function FancyToastWidget.FancyToastWidget_C.OnFinishedToast__DelegateSignature
struct UFancyToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
