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

// Function B_CameraRainDrops.B_CameraRainDrops.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraRainDrops::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops.B_CameraRainDrops.UserConstructionScript");

	AB_CameraRainDrops_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops.B_CameraRainDrops.Alpha__FinishedFunc
// (BlueprintEvent)

void AB_CameraRainDrops::Alpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops.B_CameraRainDrops.Alpha__FinishedFunc");

	AB_CameraRainDrops_Alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops.B_CameraRainDrops.Alpha__UpdateFunc
// (BlueprintEvent)

void AB_CameraRainDrops::Alpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops.B_CameraRainDrops.Alpha__UpdateFunc");

	AB_CameraRainDrops_Alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops.B_CameraRainDrops.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraRainDrops::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops.B_CameraRainDrops.ReceiveBeginPlay");

	AB_CameraRainDrops_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops.B_CameraRainDrops.ExecuteUbergraph_B_CameraRainDrops
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraRainDrops::ExecuteUbergraph_B_CameraRainDrops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops.B_CameraRainDrops.ExecuteUbergraph_B_CameraRainDrops");

	AB_CameraRainDrops_ExecuteUbergraph_B_CameraRainDrops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
