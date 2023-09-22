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

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode
struct UHUDLayoutToolFireModePanel_C_IsInCustomMode_Params
{
	bool                                               IsCustom;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode
struct UHUDLayoutToolFireModePanel_C_SetCustomFireMode_Params
{
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities
struct UHUDLayoutToolFireModePanel_C_SetCustomModeVisibilities_Params
{
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_1
struct UHUDLayoutToolFireModePanel_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings
struct UHUDLayoutToolFireModePanel_C_InitButtonBindings_Params
{
	TArray<class UHUDLayoutToolFireModeButton*>        ArrayOfFireModeButtons;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile
struct UHUDLayoutToolFireModePanel_C_HandleCurSelectedTile_Params
{
	class UFireModeSelectTile_C*                       Tile;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection
struct UHUDLayoutToolFireModePanel_C_InitializeSelection_Params
{
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie
struct UHUDLayoutToolFireModePanel_C_PlayCurFocusedTileMovie_Params
{
	class UFireModeSelectTile_C*                       CurFocusedTile;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused
struct UHUDLayoutToolFireModePanel_C_HandleTileButtonFocused_Params
{
	class UFireModeSelectTile_C*                       Tile;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected
struct UHUDLayoutToolFireModePanel_C_NewTileSelected_Params
{
	class UFireModeSelectTile_C*                       Tile;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState
struct UHUDLayoutToolFireModePanel_C_SetOpenState_Params
{
	bool                                               bNewOpenState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UHUDLayoutToolFireModePanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct
struct UHUDLayoutToolFireModePanel_C_Construct_Params
{
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent
struct UHUDLayoutToolFireModePanel_C_BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent
struct UHUDLayoutToolFireModePanel_C_BndEvt__CustomButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent
struct UHUDLayoutToolFireModePanel_C_BndEvt__PresetsButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed
struct UHUDLayoutToolFireModePanel_C_OnFire_Mode_Changed_Params
{
	EFireModeType                                      NewFireMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel
struct UHUDLayoutToolFireModePanel_C_ExecuteUbergraph_HUDLayoutToolFireModePanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
