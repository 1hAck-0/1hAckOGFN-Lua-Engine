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

// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraLens_Teleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.UserConstructionScript");

	AB_CameraLens_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Teleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ReceiveBeginPlay");

	AB_CameraLens_Teleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ExecuteUbergraph_B_CameraLens_Teleport
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Teleport_C::ExecuteUbergraph_B_CameraLens_Teleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ExecuteUbergraph_B_CameraLens_Teleport");

	AB_CameraLens_Teleport_C_ExecuteUbergraph_B_CameraLens_Teleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
