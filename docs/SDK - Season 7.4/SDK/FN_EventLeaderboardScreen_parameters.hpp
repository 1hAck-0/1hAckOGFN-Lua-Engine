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

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
struct UEventLeaderboardScreen_C_Init_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent
struct UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
struct UEventLeaderboardScreen_C_EventColorize_Params
{
	struct FFortTournamentDisplayInfo                  TournamentDisplayInfo;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
struct UEventLeaderboardScreen_C_EventIntro_Params
{
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
struct UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params
{
	class UFortEventLeaderboardEntryData*              EntryData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete
struct UEventLeaderboardScreen_C_OnLeaderboardPageRequestComplete_Params
{
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested
struct UEventLeaderboardScreen_C_OnLeaderboardPageRequested_Params
{
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Tick
struct UEventLeaderboardScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
struct UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
struct UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
