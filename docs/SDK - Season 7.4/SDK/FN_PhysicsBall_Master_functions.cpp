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

// Function PhysicsBall_Master.PhysicsBall_Master_C.ImpactFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overlap_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ImpactFX(class AActor* HitActor, struct FVector SpawnLocation, bool Overlap_)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ImpactFX");

	APhysicsBall_Master_C_ImpactFX_Params params;
	params.HitActor = HitActor;
	params.SpawnLocation = SpawnLocation;
	params.Overlap_ = Overlap_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.MakeBallDormant
// (Public, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::MakeBallDormant()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.MakeBallDormant");

	APhysicsBall_Master_C_MakeBallDormant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.SetBallVelocityAndStartTicking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewVelocity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::SetBallVelocityAndStartTicking(struct FVector NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.SetBallVelocityAndStartTicking");

	APhysicsBall_Master_C_SetBallVelocityAndStartTicking_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnRep_PlotTrajectory
// (BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::OnRep_PlotTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.OnRep_PlotTrajectory");

	APhysicsBall_Master_C_OnRep_PlotTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.GetHitScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitVelocity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APhysicsBall_Master_C::GetHitScale(struct FVector HitLocation, struct FVector HitVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.GetHitScale");

	APhysicsBall_Master_C_GetHitScale_Params params;
	params.HitLocation = HitLocation;
	params.HitVelocity = HitVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.SetTickingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldTick                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::SetTickingEnabled(bool ShouldTick)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.SetTickingEnabled");

	APhysicsBall_Master_C_SetTickingEnabled_Params params;
	params.ShouldTick = ShouldTick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitVelocity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HitMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ApplyImpulseToBall(struct FVector HitLocation, struct FVector HitVelocity, float HitMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall");

	APhysicsBall_Master_C_ApplyImpulseToBall_Params params;
	params.HitLocation = HitLocation;
	params.HitVelocity = HitVelocity;
	params.HitMagnitude = HitMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::UpdateDirectionAndRotationRate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate");

	APhysicsBall_Master_C_UpdateDirectionAndRotationRate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript");

	APhysicsBall_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick");

	APhysicsBall_Master_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APhysicsBall_Master_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay");

	APhysicsBall_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ProjectileStop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APhysicsBall_Master_C::ProjectileStop(struct FHitResult ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ProjectileStop");

	APhysicsBall_Master_C_ProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APhysicsBall_Master_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveHit");

	APhysicsBall_Master_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnReplicatedVelocityStartOrStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bStart                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::OnReplicatedVelocityStartOrStop(bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.OnReplicatedVelocityStartOrStop");

	APhysicsBall_Master_C_OnReplicatedVelocityStartOrStop_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.DrawDebugTrajectory
// (BlueprintCallable, BlueprintEvent)

void APhysicsBall_Master_C::DrawDebugTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.DrawDebugTrajectory");

	APhysicsBall_Master_C_DrawDebugTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APhysicsBall_Master_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent");

	APhysicsBall_Master_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_Params params;
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


// Function PhysicsBall_Master.PhysicsBall_Master_C.OnPawnTouchedMe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   TouchingPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::OnPawnTouchedMe(class APawn* TouchingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.OnPawnTouchedMe");

	APhysicsBall_Master_C_OnPawnTouchedMe_Params params;
	params.TouchingPawn = TouchingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APhysicsBall_Master_C::ExecuteUbergraph_PhysicsBall_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master");

	APhysicsBall_Master_C_ExecuteUbergraph_PhysicsBall_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
