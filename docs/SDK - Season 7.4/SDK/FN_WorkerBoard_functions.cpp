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

// Function WorkerBoard.WorkerBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.UpdateVisibility");

	AWorkerBoard_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.PopulateSurivorArt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::PopulateSurivorArt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.PopulateSurivorArt");

	AWorkerBoard_C_PopulateSurivorArt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.UserConstructionScript");

	AWorkerBoard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.PopulateSuvivorsBoard
// (BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::PopulateSuvivorsBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.PopulateSuvivorsBoard");

	AWorkerBoard_C_PopulateSuvivorsBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWorkerBoard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.ReceiveBeginPlay");

	AWorkerBoard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWorkerBoard_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.CameraChanged");

	AWorkerBoard_C_CameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerBoard.WorkerBoard_C.ExecuteUbergraph_WorkerBoard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWorkerBoard_C::ExecuteUbergraph_WorkerBoard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerBoard.WorkerBoard_C.ExecuteUbergraph_WorkerBoard");

	AWorkerBoard_C_ExecuteUbergraph_WorkerBoard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
