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

// Function GCN_Athena_Bush.GCN_Athena_Bush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Bush_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.UserConstructionScript");

	AGCN_Athena_Bush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__FinishedFunc
// (BlueprintEvent)

void AGCN_Athena_Bush_C::OpacityFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__FinishedFunc");

	AGCN_Athena_Bush_C_OpacityFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__UpdateFunc
// (BlueprintEvent)

void AGCN_Athena_Bush_C::OpacityFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__UpdateFunc");

	AGCN_Athena_Bush_C_OpacityFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_Bush_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick");

	AGCN_Athena_Bush_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Bush_C::On_Player_Step()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step");

	AGCN_Athena_Bush_C_On_Player_Step_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Athena_Bush_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart");

	AGCN_Athena_Bush_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_Bush_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval");

	AGCN_Athena_Bush_C_OnRemoval_Params params;
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


// Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_Bush_C::ExecuteUbergraph_GCN_Athena_Bush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush");

	AGCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
