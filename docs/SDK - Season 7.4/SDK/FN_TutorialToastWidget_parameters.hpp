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

// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonUp
struct UTutorialToastWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonDown
struct UTutorialToastWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutorialToastWidget.TutorialToastWidget_C.SetAndShowText
struct UTutorialToastWidget_C_SetAndShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TutorialToastWidget.TutorialToastWidget_C.ShowToast
struct UTutorialToastWidget_C_ShowToast_Params
{
	struct FFortToastDisplayInfo                       DisplayInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TutorialToastWidget.TutorialToastWidget_C.OnLoaded
struct UTutorialToastWidget_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialToastWidget.TutorialToastWidget_C.OnShowToast
struct UTutorialToastWidget_C_OnShowToast_Params
{
	struct FFortToastDisplayInfo                       DispalyInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TutorialToastWidget.TutorialToastWidget_C.Start Toast Animation
struct UTutorialToastWidget_C_Start_Toast_Animation_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.On Idle Finished
struct UTutorialToastWidget_C_On_Idle_Finished_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.SimulateAthenaStoreToast
struct UTutorialToastWidget_C_SimulateAthenaStoreToast_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.Clicked
struct UTutorialToastWidget_C_Clicked_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.CompleteToast
struct UTutorialToastWidget_C_CompleteToast_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.RemoveWidget
struct UTutorialToastWidget_C_RemoveWidget_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
struct UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2
struct UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3
struct UTutorialToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.ExecuteUbergraph_TutorialToastWidget
struct UTutorialToastWidget_C_ExecuteUbergraph_TutorialToastWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialToastWidget.TutorialToastWidget_C.OnToastClicked__DelegateSignature
struct UTutorialToastWidget_C_OnToastClicked__DelegateSignature_Params
{
};

// Function TutorialToastWidget.TutorialToastWidget_C.OnFinishedToast__DelegateSignature
struct UTutorialToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
