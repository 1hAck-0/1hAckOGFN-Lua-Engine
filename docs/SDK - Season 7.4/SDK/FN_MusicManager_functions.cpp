// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::ResetMusicBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ResetMusicBools");

	AMusicManager_C_ResetMusicBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.UserConstructionScript");

	AMusicManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc");

	AMusicManager_C_Gameplay_Music_Fader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc");

	AMusicManager_C_Gameplay_Music_Fader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Stop Boss Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Boss_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Stop Boss Music");

	AMusicManager_C_Stop_Boss_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Play Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Play_Boss_Music(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Play Boss Music");

	AMusicManager_C_Play_Boss_Music_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Start Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Start_Boss_DBNO_Music(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Start Boss DBNO Music");

	AMusicManager_C_Start_Boss_DBNO_Music_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Stop Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Boss_DBNO_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Stop Boss DBNO Music");

	AMusicManager_C_Stop_Boss_DBNO_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Player Fighting Boss DBNO
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Player_Fighting_Boss_DBNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Player Fighting Boss DBNO");

	AMusicManager_C_Player_Fighting_Boss_DBNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Start Weak Point Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Start_Weak_Point_Music(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Start Weak Point Music");

	AMusicManager_C_Start_Weak_Point_Music_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Stop Weakpoint Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Weakpoint_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Stop Weakpoint Music");

	AMusicManager_C_Stop_Weakpoint_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>     CurrentDayPhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>     PreviousDayPhase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtCreation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnDayPhaseChanged");

	AMusicManager_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::OnUpdateMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnUpdateMusic");

	AMusicManager_C_OnUpdateMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::PlayAmbientMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayAmbientMusic");

	AMusicManager_C_PlayAmbientMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMusicManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ReceiveBeginPlay");

	AMusicManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::On_Music_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.On Music Tick");

	AMusicManager_C_On_Music_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset*         NewMusicAsset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::PlayStinger(class UFortMusicAsset* NewMusicAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayStinger");

	AMusicManager_C_PlayStinger_Params params;
	params.NewMusicAsset = NewMusicAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Music Fade In");

	AMusicManager_C_Music_Fade_In_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Music Fade Out");

	AMusicManager_C_Music_Fade_Out_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*         Voice                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.On Stinger Completed");

	AMusicManager_C_On_Stinger_Completed_Params params;
	params.Voice = Voice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Gather_Combat_Graph_Tresholds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds");

	AMusicManager_C_Gather_Combat_Graph_Tresholds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnMusicBankChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMusicManagerBank*   NewBank                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::OnMusicBankChanged(class UFortMusicManagerBank* NewBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnMusicBankChanged");

	AMusicManager_C_OnMusicBankChanged_Params params;
	params.NewBank = NewBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnPlayerDowned
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMusicManager_C::OnPlayerDowned(struct FFortPlayerDeathReport DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnPlayerDowned");

	AMusicManager_C_OnPlayerDowned_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Play Countdown Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Play_Countdown_Music(float Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Play Countdown Music");

	AMusicManager_C_Play_Countdown_Music_Params params;
	params.Counter = Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Play Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Play_Mission_Music(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Play Mission Music");

	AMusicManager_C_Play_Mission_Music_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Stop Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         Mission_Music                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMusicManager_C::Stop_Mission_Music(class UAudioComponent* Mission_Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Stop Mission Music");

	AMusicManager_C_Stop_Mission_Music_Params params;
	params.Mission_Music = Mission_Music;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager");

	AMusicManager_C_ExecuteUbergraph_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
