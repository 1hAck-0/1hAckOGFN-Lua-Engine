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

// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_EnvCampFire_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.UserConstructionScript");

	AGCNL_EnvCampFire_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__FinishedFunc
// (BlueprintEvent)

void AGCNL_EnvCampFire_Fire_C::Darken_Logs__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__FinishedFunc");

	AGCNL_EnvCampFire_Fire_C_Darken_Logs__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__UpdateFunc
// (BlueprintEvent)

void AGCNL_EnvCampFire_Fire_C::Darken_Logs__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__UpdateFunc");

	AGCNL_EnvCampFire_Fire_C_Darken_Logs__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_EnvCampFire_Fire_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnLoopingStart");

	AGCNL_EnvCampFire_Fire_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EnvCampFire_Fire_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnRemoval");

	AGCNL_EnvCampFire_Fire_C_OnRemoval_Params params;
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


// Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ExecuteUbergraph_GCNL_EnvCampFire_Fire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_EnvCampFire_Fire_C::ExecuteUbergraph_GCNL_EnvCampFire_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ExecuteUbergraph_GCNL_EnvCampFire_Fire");

	AGCNL_EnvCampFire_Fire_C_ExecuteUbergraph_GCNL_EnvCampFire_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
