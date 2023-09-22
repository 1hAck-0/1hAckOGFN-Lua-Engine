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

// Function CornField_Rectangle.CornField_Rectangle_C.UserConstructionScript
struct ACornField_Rectangle_C_UserConstructionScript_Params
{
};

// Function CornField_Rectangle.CornField_Rectangle_C.BndEvt__OverlapBox_K2Node_ComponentBoundEvent
struct ACornField_Rectangle_C_BndEvt__OverlapBox_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CornField_Rectangle.CornField_Rectangle_C.ReceiveBeginPlay
struct ACornField_Rectangle_C_ReceiveBeginPlay_Params
{
};

// Function CornField_Rectangle.CornField_Rectangle_C.MaterialWobble
struct ACornField_Rectangle_C_MaterialWobble_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CornField_Rectangle.CornField_Rectangle_C.ExecuteUbergraph_CornField_Rectangle
struct ACornField_Rectangle_C_ExecuteUbergraph_CornField_Rectangle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
