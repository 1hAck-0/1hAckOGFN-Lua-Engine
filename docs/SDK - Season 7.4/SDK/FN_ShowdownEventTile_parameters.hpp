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

// Function ShowdownEventTile.ShowdownEventTile_C.SetData
struct UShowdownEventTile_C_SetData_Params
{
	struct FString                                     TournamentInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EventInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ShowdownEventTile.ShowdownEventTile_C.Construct
struct UShowdownEventTile_C_Construct_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked
struct UShowdownEventTile_C_BP_OnClicked_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventIntro
struct UShowdownEventTile_C_EventIntro_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventResize
struct UShowdownEventTile_C_EventResize_Params
{
	bool                                               Out;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered
struct UShowdownEventTile_C_BP_OnHovered_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered
struct UShowdownEventTile_C_BP_OnUnhovered_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected
struct UShowdownEventTile_C_BP_OnSelected_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected
struct UShowdownEventTile_C_BP_OnDeselected_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath
struct UShowdownEventTile_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath
struct UShowdownEventTile_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventSetState
struct UShowdownEventTile_C_EventSetState_Params
{
	EFortShowdownEventState                            EventState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventColorize
struct UShowdownEventTile_C_EventColorize_Params
{
	struct FFortTournamentDisplayInfo                  DisplayInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch
struct UShowdownEventTile_C_EventColorizeDispatch_Params
{
	struct FFortTournamentDisplayInfo                  DisplayInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle
struct UShowdownEventTile_C_EventMultiRoundStyle_Params
{
};

// Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile
struct UShowdownEventTile_C_ExecuteUbergraph_ShowdownEventTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature
struct UShowdownEventTile_C_OnWindowSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
