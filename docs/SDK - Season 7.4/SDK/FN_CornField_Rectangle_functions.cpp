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

// Function CornField_Rectangle.CornField_Rectangle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACornField_Rectangle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CornField_Rectangle.CornField_Rectangle_C.UserConstructionScript");

	ACornField_Rectangle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornField_Rectangle.CornField_Rectangle_C.BndEvt__OverlapBox_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACornField_Rectangle_C::BndEvt__OverlapBox_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornField_Rectangle.CornField_Rectangle_C.BndEvt__OverlapBox_K2Node_ComponentBoundEvent");

	ACornField_Rectangle_C_BndEvt__OverlapBox_K2Node_ComponentBoundEvent_Params params;
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


// Function CornField_Rectangle.CornField_Rectangle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACornField_Rectangle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CornField_Rectangle.CornField_Rectangle_C.ReceiveBeginPlay");

	ACornField_Rectangle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornField_Rectangle.CornField_Rectangle_C.MaterialWobble
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACornField_Rectangle_C::MaterialWobble(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornField_Rectangle.CornField_Rectangle_C.MaterialWobble");

	ACornField_Rectangle_C_MaterialWobble_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CornField_Rectangle.CornField_Rectangle_C.ExecuteUbergraph_CornField_Rectangle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACornField_Rectangle_C::ExecuteUbergraph_CornField_Rectangle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CornField_Rectangle.CornField_Rectangle_C.ExecuteUbergraph_CornField_Rectangle");

	ACornField_Rectangle_C_ExecuteUbergraph_CornField_Rectangle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
