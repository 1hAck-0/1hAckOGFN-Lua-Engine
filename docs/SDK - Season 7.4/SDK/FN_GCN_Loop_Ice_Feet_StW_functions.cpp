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

// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Feet_StW_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.UserConstructionScript");

	AGCN_Loop_Ice_Feet_StW_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.OnRemoval");

	AGCN_Loop_Ice_Feet_StW_C_OnRemoval_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;
	params.BurstCameraShakeInstance = BurstCameraShakeInstance;
	params.BurstDecalInstance = BurstDecalInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Feet_StW_C::BeginExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.BeginExpireTell");

	AGCN_Loop_Ice_Feet_StW_C_BeginExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Feet_StW_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ClearExpireTell");

	AGCN_Loop_Ice_Feet_StW_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Feet_StW_C::ExpireWarningTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ExpireWarningTick");

	AGCN_Loop_Ice_Feet_StW_C_ExpireWarningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_Ice_Feet_StW_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.OnLoopingStart");

	AGCN_Loop_Ice_Feet_StW_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Player Step
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Feet_StW_C::On_Player_Step()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Player Step");

	AGCN_Loop_Ice_Feet_StW_C_On_Player_Step_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Hit Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Hit Event");

	AGCN_Loop_Ice_Feet_StW_C_On_Target_Pawn_Hit_Event_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ReceiveTick");

	AGCN_Loop_Ice_Feet_StW_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Landed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::On_Target_Pawn_Landed(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Landed");

	AGCN_Loop_Ice_Feet_StW_C_On_Target_Pawn_Landed_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Movement Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.On Target Pawn Movement Mode Changed");

	AGCN_Loop_Ice_Feet_StW_C_On_Target_Pawn_Movement_Mode_Changed_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ReceiveHit
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

void AGCN_Loop_Ice_Feet_StW_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ReceiveHit");

	AGCN_Loop_Ice_Feet_StW_C_ReceiveHit_Params params;
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


// Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_StW
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Feet_StW_C::ExecuteUbergraph_GCN_Loop_Ice_Feet_StW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Feet_StW.GCN_Loop_Ice_Feet_StW_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_StW");

	AGCN_Loop_Ice_Feet_StW_C_ExecuteUbergraph_GCN_Loop_Ice_Feet_StW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
