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

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnRep_RemainingFuseTime
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_TNT_C::OnRep_RemainingFuseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnRep_RemainingFuseTime");

	AB_Prj_Athena_TNT_C_OnRep_RemainingFuseTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.MakeOrthogonalZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                InRotation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_TNT_C::MakeOrthogonalZ(struct FRotator InRotation, struct FVector Normal, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.MakeOrthogonalZ");

	AB_Prj_Athena_TNT_C_MakeOrthogonalZ_Params params;
	params.InRotation = InRotation;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Spline Point Locations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor)

void AB_Prj_Athena_TNT_C::Spline_Point_Locations(TArray<struct FVector> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Spline Point Locations");

	AB_Prj_Athena_TNT_C_Spline_Point_Locations_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_TNT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.UserConstructionScript");

	AB_Prj_Athena_TNT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.FuseEnded
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_TNT_C::FuseEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.FuseEnded");

	AB_Prj_Athena_TNT_C_FuseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_StartFuse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_TNT_C::Event_StartFuse(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_StartFuse");

	AB_Prj_Athena_TNT_C_Event_StartFuse_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_TNT_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnExploded");

	AB_Prj_Athena_TNT_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_TNT_C::OnStop(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnStop");

	AB_Prj_Athena_TNT_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_TNT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveBeginPlay");

	AB_Prj_Athena_TNT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_TNT_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent(struct FHitResult ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent");

	AB_Prj_Athena_TNT_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_BuildingActorDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_TNT_C::Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_BuildingActorDied");

	AB_Prj_Athena_TNT_C_Event_BuildingActorDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_OnVehicleDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_TNT_C::Event_OnVehicleDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_OnVehicleDestroyed");

	AB_Prj_Athena_TNT_C_Event_OnVehicleDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Lerp
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_TNT_C::Lerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Lerp");

	AB_Prj_Athena_TNT_C_Lerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Athena_TNT_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveDestroyed");

	AB_Prj_Athena_TNT_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ExecuteUbergraph_B_Prj_Athena_TNT
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_TNT_C::ExecuteUbergraph_B_Prj_Athena_TNT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ExecuteUbergraph_B_Prj_Athena_TNT");

	AB_Prj_Athena_TNT_C_ExecuteUbergraph_B_Prj_Athena_TNT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
