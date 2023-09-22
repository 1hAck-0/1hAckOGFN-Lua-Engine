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

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.UserConstructionScript");

	AFort_Entry_Music_Controller_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              New_Music                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music");

	AFort_Entry_Music_Controller_BP_C_Change_Music_Params params;
	params.New_Music = New_Music;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks");

	AFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition* NewMusicPack                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged");

	AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params params;
	params.NewMusicPack = NewMusicPack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lobby_Music_Activate           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              New_Music                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override");

	AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params params;
	params.Lobby_Music_Activate = Lobby_Music_Activate;
	params.New_Music = New_Music;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::MakeNextMusicPackStartFromBeginning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning");

	AFort_Entry_Music_Controller_BP_C_MakeNextMusicPackStartFromBeginning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition* MusicPackToPlayLater           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFort_Entry_Music_Controller_BP_C::DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack");

	AFort_Entry_Music_Controller_BP_C_DelayedPlayMusicPack_Params params;
	params.MusicPackToPlayLater = MusicPackToPlayLater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::ClearDelayedPlayMusicPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack");

	AFort_Entry_Music_Controller_BP_C_ClearDelayedPlayMusicPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
