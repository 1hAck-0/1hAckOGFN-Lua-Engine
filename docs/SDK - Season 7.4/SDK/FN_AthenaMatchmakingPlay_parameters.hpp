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

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
struct UAthenaMatchmakingPlay_C_OpenPlayOptions_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnLoaded
struct UAthenaMatchmakingPlay_C_OnLoaded_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
struct UAthenaMatchmakingPlay_C_Construct_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
struct UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
struct UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params
{
	struct FText                                       PlayButtonText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
struct UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params
{
	struct FText                                       CancelButtonText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChanged
struct UAthenaMatchmakingPlay_C_PlaylistChanged_Params
{
	struct FPlaylistFrontEndData                       NewPlaylist;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       PlaylistCMSOverrideName;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EFortLobbyType                                     LobbyType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent
struct UAthenaMatchmakingPlay_C_BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetSquadFillText
struct UAthenaMatchmakingPlay_C_SetSquadFillText_Params
{
	bool                                               InCurrentSquadFill;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnNewModeViolatorUpdated
struct UAthenaMatchmakingPlay_C_OnNewModeViolatorUpdated_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.UpdateCustomViolatorText
struct UAthenaMatchmakingPlay_C_UpdateCustomViolatorText_Params
{
	struct FText                                       ModeName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       SubText;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Animate
struct UAthenaMatchmakingPlay_C_Animate_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnMatchmakingFinishedBlueprint
struct UAthenaMatchmakingPlay_C_OnMatchmakingFinishedBlueprint_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenCreativeOptions_NativizeMe
struct UAthenaMatchmakingPlay_C_OpenCreativeOptions_NativizeMe_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
struct UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature
struct UAthenaMatchmakingPlay_C_OnPlaylistChanged__DelegateSignature_Params
{
	struct FPlaylistFrontEndData                       Playlist_Data;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Playlist_CMS_Override;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	EFortLobbyType                                     Lobby_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
struct UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
