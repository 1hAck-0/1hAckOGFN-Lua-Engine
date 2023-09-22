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

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_HeroLoadout_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ReceiveBeginPlay");

	AFrontend_HeroLoadout_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HeroLoadout - Transfrom
// (BlueprintCallable, BlueprintEvent)

void AFrontend_HeroLoadout_C::HeroLoadout___Transfrom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HeroLoadout - Transfrom");

	AFrontend_HeroLoadout_C_HeroLoadout___Transfrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.Command - Transform
// (BlueprintCallable, BlueprintEvent)

void AFrontend_HeroLoadout_C::Command___Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.Command - Transform");

	AFrontend_HeroLoadout_C_Command___Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HandleFrontendCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_HeroLoadout_C::HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HandleFrontendCameraChanged");

	AFrontend_HeroLoadout_C_HandleFrontendCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ExecuteUbergraph_Frontend_HeroLoadout
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_HeroLoadout_C::ExecuteUbergraph_Frontend_HeroLoadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ExecuteUbergraph_Frontend_HeroLoadout");

	AFrontend_HeroLoadout_C_ExecuteUbergraph_Frontend_HeroLoadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
