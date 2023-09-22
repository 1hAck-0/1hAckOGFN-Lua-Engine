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

// Function Frontend.FrontEnd_C.PlaySpeech
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SampleRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              AssetFile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::PlaySpeech(struct FString Filename, int SampleRate, class USoundWave* AssetFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.PlaySpeech");

	AFrontEnd_C_PlaySpeech_Params params;
	params.Filename = Filename;
	params.SampleRate = SampleRate;
	params.AssetFile = AssetFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::EnableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.EnableTutorial");

	AFrontEnd_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ReceiveBeginPlay");

	AFrontEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AFrontEnd_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.OnMatchStarted");

	AFrontEnd_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd");

	AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
