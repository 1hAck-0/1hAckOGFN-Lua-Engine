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

// Function B_Beam.B_Beam_C.UpdateBeamPosAndRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AimTarget                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SimulateOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Beam_C::UpdateBeamPosAndRot(class AActor* AimTarget, struct FLinearColor SimulateOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.UpdateBeamPosAndRot");

	AB_Beam_C_UpdateBeamPosAndRot_Params params;
	params.AimTarget = AimTarget;
	params.SimulateOffset = SimulateOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Beam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.UserConstructionScript");

	AB_Beam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.Timeline
// (BlueprintEvent)

void AB_Beam_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.Timeline");

	AB_Beam_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Beam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.ReceiveBeginPlay");

	AB_Beam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Beam_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.ReceiveTick");

	AB_Beam_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.Update Offset
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Beam_C::Update_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.Update Offset");

	AB_Beam_C_Update_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.CE_Trigger
// (BlueprintCallable, BlueprintEvent)

void AB_Beam_C::CE_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.CE_Trigger");

	AB_Beam_C_CE_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Beam.B_Beam_C.ExecuteUbergraph_B_Beam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Beam_C::ExecuteUbergraph_B_Beam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Beam.B_Beam_C.ExecuteUbergraph_B_Beam");

	AB_Beam_C_ExecuteUbergraph_B_Beam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
