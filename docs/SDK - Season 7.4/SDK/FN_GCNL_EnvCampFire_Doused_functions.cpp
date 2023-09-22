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

// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_EnvCampFire_Doused_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.UserConstructionScript");

	AGCNL_EnvCampFire_Doused_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__FinishedFunc
// (BlueprintEvent)

void AGCNL_EnvCampFire_Doused_C::Fade_Doused_Smoke__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__FinishedFunc");

	AGCNL_EnvCampFire_Doused_C_Fade_Doused_Smoke__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__UpdateFunc
// (BlueprintEvent)

void AGCNL_EnvCampFire_Doused_C::Fade_Doused_Smoke__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__UpdateFunc");

	AGCNL_EnvCampFire_Doused_C_Fade_Doused_Smoke__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_EnvCampFire_Doused_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnLoopingStart");

	AGCNL_EnvCampFire_Doused_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EnvCampFire_Doused_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnRemoval");

	AGCNL_EnvCampFire_Doused_C_OnRemoval_Params params;
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


// Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.ExecuteUbergraph_GCNL_EnvCampFire_Doused
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EnvCampFire_Doused_C::ExecuteUbergraph_GCNL_EnvCampFire_Doused(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.ExecuteUbergraph_GCNL_EnvCampFire_Doused");

	AGCNL_EnvCampFire_Doused_C_ExecuteUbergraph_GCNL_EnvCampFire_Doused_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
