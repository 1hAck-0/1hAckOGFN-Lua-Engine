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

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText
struct UAthenaMatchmakingModeButton_C_RefreshFillText_Params
{
};

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
struct UAthenaMatchmakingModeButton_C_SetSquadFillText_Params
{
	bool                                               bFill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
struct UAthenaMatchmakingModeButton_C_PlaylistChanged_Params
{
	class UFortPlaylistAthena*                         NewPlaylist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OverrideName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
struct UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Tick
struct UAthenaMatchmakingModeButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
struct UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
