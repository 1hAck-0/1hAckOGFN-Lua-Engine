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

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.UserConstructionScript
struct AFort_Entry_Music_Controller_BP_C_UserConstructionScript_Params
{
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
struct AFort_Entry_Music_Controller_BP_C_Change_Music_Params
{
	class USoundBase*                                  New_Music;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
struct AFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params
{
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
struct AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params
{
	class UAthenaMusicPackItemDefinition*              NewMusicPack;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
struct AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params
{
	bool                                               Lobby_Music_Activate;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  New_Music;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning
struct AFort_Entry_Music_Controller_BP_C_MakeNextMusicPackStartFromBeginning_Params
{
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack
struct AFort_Entry_Music_Controller_BP_C_DelayedPlayMusicPack_Params
{
	class UAthenaMusicPackItemDefinition*              MusicPackToPlayLater;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack
struct AFort_Entry_Music_Controller_BP_C_ClearDelayedPlayMusicPack_Params
{
};

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
struct AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
