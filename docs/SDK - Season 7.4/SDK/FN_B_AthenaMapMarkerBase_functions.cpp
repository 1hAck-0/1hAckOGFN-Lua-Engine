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

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript");

	AB_AthenaMapMarkerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc");

	AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc");

	AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_AthenaMapMarkerBase_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent");

	AB_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPlayerMarkerData       MarkerData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_AthenaMapMarkerBase_C::OnSetupMarker(struct FPlayerMarkerData MarkerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker");

	AB_AthenaMapMarkerBase_C_OnSetupMarker_Params params;
	params.MarkerData = MarkerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnMarkerPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced");

	AB_AthenaMapMarkerBase_C_OnMarkerPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AthenaMapMarkerBase_C::ExecuteUbergraph_B_AthenaMapMarkerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase");

	AB_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
