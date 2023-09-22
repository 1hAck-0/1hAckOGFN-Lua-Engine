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

// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Athena_Blade_Aura_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.UserConstructionScript");

	AGCL_Athena_Blade_Aura_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_Athena_Blade_Aura_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnLoopingStart");

	AGCL_Athena_Blade_Aura_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.Unhide
// (BlueprintCallable, BlueprintEvent)

void AGCL_Athena_Blade_Aura_C::Unhide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.Unhide");

	AGCL_Athena_Blade_Aura_C_Unhide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.Show
// (BlueprintCallable, BlueprintEvent)

void AGCL_Athena_Blade_Aura_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.Show");

	AGCL_Athena_Blade_Aura_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Blade_Aura_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.OnRemoval");

	AGCL_Athena_Blade_Aura_C_OnRemoval_Params params;
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


// Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.ExecuteUbergraph_GCL_Athena_Blade_Aura
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Blade_Aura_C::ExecuteUbergraph_GCL_Athena_Blade_Aura(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C.ExecuteUbergraph_GCL_Athena_Blade_Aura");

	AGCL_Athena_Blade_Aura_C_ExecuteUbergraph_GCL_Athena_Blade_Aura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
