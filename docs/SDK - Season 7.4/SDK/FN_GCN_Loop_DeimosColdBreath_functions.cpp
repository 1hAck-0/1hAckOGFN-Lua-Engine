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

// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_DeimosColdBreath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.UserConstructionScript");

	AGCN_Loop_DeimosColdBreath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_DeimosColdBreath_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.OnLoopingStart");

	AGCN_Loop_DeimosColdBreath_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_DeimosColdBreath_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.OnRemoval");

	AGCN_Loop_DeimosColdBreath_C_OnRemoval_Params params;
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


// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.Begin Overlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_DeimosColdBreath_C::Begin_Overlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.Begin Overlap");

	AGCN_Loop_DeimosColdBreath_C_Begin_Overlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.End Overlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_DeimosColdBreath_C::End_Overlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.End Overlap");

	AGCN_Loop_DeimosColdBreath_C_End_Overlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.ExecuteUbergraph_GCN_Loop_DeimosColdBreath
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_DeimosColdBreath_C::ExecuteUbergraph_GCN_Loop_DeimosColdBreath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C.ExecuteUbergraph_GCN_Loop_DeimosColdBreath");

	AGCN_Loop_DeimosColdBreath_C_ExecuteUbergraph_GCN_Loop_DeimosColdBreath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
