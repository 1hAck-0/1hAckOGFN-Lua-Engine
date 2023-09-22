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

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP
struct UTournamentEventWindowDetails_C_RefreshDataBP_Params
{
};

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize
struct UTournamentEventWindowDetails_C_EventColorize_Params
{
};

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent
struct UTournamentEventWindowDetails_C_BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails
struct UTournamentEventWindowDetails_C_ExecuteUbergraph_TournamentEventWindowDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.NewEventDispatcher
struct UTournamentEventWindowDetails_C_NewEventDispatcher_Params
{
};

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature
struct UTournamentEventWindowDetails_C_ViewLeaderboard__DelegateSignature_Params
{
	struct FString                                     TournamentId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
