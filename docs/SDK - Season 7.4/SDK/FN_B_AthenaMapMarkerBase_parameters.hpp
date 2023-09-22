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

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
struct AB_AthenaMapMarkerBase_C_UserConstructionScript_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__FinishedFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__UpdateFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent
struct AB_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
struct AB_AthenaMapMarkerBase_C_OnSetupMarker_Params
{
	struct FPlayerMarkerData                           MarkerData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
struct AB_AthenaMapMarkerBase_C_OnMarkerPlaced_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
struct AB_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
