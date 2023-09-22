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

// Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Athena_Carrot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.UserConstructionScript");

	AGCL_Athena_Carrot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.Timeline
// (BlueprintEvent)

void AGCL_Athena_Carrot_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.Timeline");

	AGCL_Athena_Carrot_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_Athena_Carrot_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.OnLoopingStart");

	AGCL_Athena_Carrot_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Carrot_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.OnRemoval");

	AGCL_Athena_Carrot_C_OnRemoval_Params params;
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


// Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.ExecuteUbergraph_GCL_Athena_Carrot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Carrot_C::ExecuteUbergraph_GCL_Athena_Carrot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Carrot.GCL_Athena_Carrot_C.ExecuteUbergraph_GCL_Athena_Carrot");

	AGCL_Athena_Carrot_C_ExecuteUbergraph_GCL_Athena_Carrot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
