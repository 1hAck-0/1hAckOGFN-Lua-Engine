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

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.GetSkeletalMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::GetSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.GetSkeletalMeshes");

	AGCN_Loop_SpookyMist_C_GetSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UserConstructionScript");

	AGCN_Loop_SpookyMist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__FinishedFunc
// (BlueprintEvent)

void AGCN_Loop_SpookyMist_C::FadeInOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__FinishedFunc");

	AGCN_Loop_SpookyMist_C_FadeInOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__UpdateFunc
// (BlueprintEvent)

void AGCN_Loop_SpookyMist_C::FadeInOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.FadeInOut__UpdateFunc");

	AGCN_Loop_SpookyMist_C_FadeInOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_SpookyMist_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart");

	AGCN_Loop_SpookyMist_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval");

	AGCN_Loop_SpookyMist_C_OnRemoval_Params params;
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


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick");

	AGCN_Loop_SpookyMist_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::BeginExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell");

	AGCN_Loop_SpookyMist_C_BeginExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell");

	AGCN_Loop_SpookyMist_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::ExpireWarningTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick");

	AGCN_Loop_SpookyMist_C_ExpireWarningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::UpdateTeamVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility");

	AGCN_Loop_SpookyMist_C_UpdateTeamVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::Audio_Tick(float Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick");

	AGCN_Loop_SpookyMist_C_Audio_Tick_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::StartedInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract");

	AGCN_Loop_SpookyMist_C_StartedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::EndedInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract");

	AGCN_Loop_SpookyMist_C_EndedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::ExecuteUbergraph_GCN_Loop_SpookyMist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist");

	AGCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
