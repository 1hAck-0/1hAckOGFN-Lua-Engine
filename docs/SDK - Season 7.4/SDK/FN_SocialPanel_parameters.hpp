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

// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
struct USocialPanel_C_Play_Panel_Animation_Sound_Params
{
};

// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
struct USocialPanel_C_ClosePanelAfterAnimation_Params
{
};

// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_1
struct USocialPanel_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent
struct USocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SocialPanel.SocialPanel_C.OnActivated
struct USocialPanel_C_OnActivated_Params
{
};

// Function SocialPanel.SocialPanel_C.ClosePanel
struct USocialPanel_C_ClosePanel_Params
{
};

// Function SocialPanel.SocialPanel_C.PopSocialPanel
struct USocialPanel_C_PopSocialPanel_Params
{
};

// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
struct USocialPanel_C_ExecuteUbergraph_SocialPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
