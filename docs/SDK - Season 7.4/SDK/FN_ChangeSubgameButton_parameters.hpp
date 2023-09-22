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

// Function ChangeSubgameButton.ChangeSubgameButton_C.Change Main Menu Music State
struct UChangeSubgameButton_C_Change_Main_Menu_Music_State_Params
{
	bool                                               Set_Lobby_Music_State;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult
struct UChangeSubgameButton_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.Construct
struct UChangeSubgameButton_C_Construct_Params
{
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent
struct UChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.Destruct
struct UChangeSubgameButton_C_Destruct_Params
{
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter
struct UChangeSubgameButton_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton
struct UChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChangeSubgameButton.ChangeSubgameButton_C.OnClicked__DelegateSignature
struct UChangeSubgameButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
