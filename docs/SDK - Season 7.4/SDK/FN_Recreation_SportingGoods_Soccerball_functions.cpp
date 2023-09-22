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

// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecreation_SportingGoods_Soccerball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.UserConstructionScript");

	ARecreation_SportingGoods_Soccerball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.Reset Ball Hit Sound
// (BlueprintCallable, BlueprintEvent)

void ARecreation_SportingGoods_Soccerball_C::Reset_Ball_Hit_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.Reset Ball Hit Sound");

	ARecreation_SportingGoods_Soccerball_C_Reset_Ball_Hit_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARecreation_SportingGoods_Soccerball_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent");

	ARecreation_SportingGoods_Soccerball_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_Params params;
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


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.ExecuteUbergraph_Recreation_SportingGoods_Soccerball
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecreation_SportingGoods_Soccerball_C::ExecuteUbergraph_Recreation_SportingGoods_Soccerball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.ExecuteUbergraph_Recreation_SportingGoods_Soccerball");

	ARecreation_SportingGoods_Soccerball_C_ExecuteUbergraph_Recreation_SportingGoods_Soccerball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
