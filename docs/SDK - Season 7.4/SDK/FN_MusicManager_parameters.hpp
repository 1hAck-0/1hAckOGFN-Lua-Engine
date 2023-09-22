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

// Function MusicManager.MusicManager_C.ResetMusicBools
struct AMusicManager_C_ResetMusicBools_Params
{
};

// Function MusicManager.MusicManager_C.UserConstructionScript
struct AMusicManager_C_UserConstructionScript_Params
{
};

// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
struct AMusicManager_C_Gameplay_Music_Fader__FinishedFunc_Params
{
};

// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
struct AMusicManager_C_Gameplay_Music_Fader__UpdateFunc_Params
{
};

// Function MusicManager.MusicManager_C.Stop Boss Music
struct AMusicManager_C_Stop_Boss_Music_Params
{
};

// Function MusicManager.MusicManager_C.Play Boss Music
struct AMusicManager_C_Play_Boss_Music_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Start Boss DBNO Music
struct AMusicManager_C_Start_Boss_DBNO_Music_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Stop Boss DBNO Music
struct AMusicManager_C_Stop_Boss_DBNO_Music_Params
{
};

// Function MusicManager.MusicManager_C.Player Fighting Boss DBNO
struct AMusicManager_C_Player_Fighting_Boss_DBNO_Params
{
};

// Function MusicManager.MusicManager_C.Start Weak Point Music
struct AMusicManager_C_Start_Weak_Point_Music_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Stop Weakpoint Music
struct AMusicManager_C_Stop_Weakpoint_Music_Params
{
};

// Function MusicManager.MusicManager_C.OnDayPhaseChanged
struct AMusicManager_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.OnUpdateMusic
struct AMusicManager_C_OnUpdateMusic_Params
{
};

// Function MusicManager.MusicManager_C.PlayAmbientMusic
struct AMusicManager_C_PlayAmbientMusic_Params
{
};

// Function MusicManager.MusicManager_C.ReceiveBeginPlay
struct AMusicManager_C_ReceiveBeginPlay_Params
{
};

// Function MusicManager.MusicManager_C.On Music Tick
struct AMusicManager_C_On_Music_Tick_Params
{
};

// Function MusicManager.MusicManager_C.PlayStinger
struct AMusicManager_C_PlayStinger_Params
{
	class UFortMusicAsset*                             NewMusicAsset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Music Fade In
struct AMusicManager_C_Music_Fade_In_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Music Fade Out
struct AMusicManager_C_Music_Fade_Out_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.On Stinger Completed
struct AMusicManager_C_On_Stinger_Completed_Params
{
	class UFortMusicVoice*                             Voice;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds
struct AMusicManager_C_Gather_Combat_Graph_Tresholds_Params
{
};

// Function MusicManager.MusicManager_C.OnMusicBankChanged
struct AMusicManager_C_OnMusicBankChanged_Params
{
	class UFortMusicManagerBank*                       NewBank;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.OnPlayerDowned
struct AMusicManager_C_OnPlayerDowned_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MusicManager.MusicManager_C.Play Countdown Music
struct AMusicManager_C_Play_Countdown_Music_Params
{
	float                                              Counter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Play Mission Music
struct AMusicManager_C_Play_Mission_Music_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.Stop Mission Music
struct AMusicManager_C_Stop_Mission_Music_Params
{
	class UAudioComponent*                             Mission_Music;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
struct AMusicManager_C_ExecuteUbergraph_MusicManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
