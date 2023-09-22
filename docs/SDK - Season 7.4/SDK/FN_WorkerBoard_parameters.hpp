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

// Function WorkerBoard.WorkerBoard_C.UpdateVisibility
struct AWorkerBoard_C_UpdateVisibility_Params
{
};

// Function WorkerBoard.WorkerBoard_C.PopulateSurivorArt
struct AWorkerBoard_C_PopulateSurivorArt_Params
{
};

// Function WorkerBoard.WorkerBoard_C.UserConstructionScript
struct AWorkerBoard_C_UserConstructionScript_Params
{
};

// Function WorkerBoard.WorkerBoard_C.PopulateSuvivorsBoard
struct AWorkerBoard_C_PopulateSuvivorsBoard_Params
{
};

// Function WorkerBoard.WorkerBoard_C.ReceiveBeginPlay
struct AWorkerBoard_C_ReceiveBeginPlay_Params
{
};

// Function WorkerBoard.WorkerBoard_C.CameraChanged
struct AWorkerBoard_C_CameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WorkerBoard.WorkerBoard_C.ExecuteUbergraph_WorkerBoard
struct AWorkerBoard_C_ExecuteUbergraph_WorkerBoard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
