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

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetScrollWidget_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnCustomMatchmaking_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileOutroAnim_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileIntroAnim_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close
struct UAthenaMatchmakingOptionsDisplay_v2_C_Touch_To_Close_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSquadFillText_Params
{
	ESquadFillSetting                                  InSquadFillSetting;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelOutroFinshed
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelOutroFinshed_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnBeginIntro
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnBeginIntro_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelIntroFinshed
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelIntroFinshed_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged
struct UAthenaMatchmakingOptionsDisplay_v2_C_RepresentedPlaylistChanged_Params
{
	struct FPlaylistFrontEndData                       NewRepresentedPlaylist;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnTileDoubleClicked_Params
{
	class UCommonButton*                               ButtonClicked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Start Closing Matchmaking Options
struct UAthenaMatchmakingOptionsDisplay_v2_C_Start_Closing_Matchmaking_Options_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ApplyCMSOverrides
struct UAthenaMatchmakingOptionsDisplay_v2_C_ApplyCMSOverrides_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
struct UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnDeactivated
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnDeactivated_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMMButtonStatusBP
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateMMButtonStatusBP_Params
{
	bool                                               bPlaylistIsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFillDisableReason                                 FillDisableReason;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetServerAccessText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetServerAccessText_Params
{
	EServerAccessSetting                               InServerAccessSetting;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSpectatorButtonText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSpectatorButtonText_Params
{
	ESpectatorQueueType                                InSpectatorQueueType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
struct UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
