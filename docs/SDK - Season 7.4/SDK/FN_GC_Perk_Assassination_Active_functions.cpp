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

// Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.HandleFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGC_Perk_Assassination_Active_C::HandleFX(class AActor* Target, class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.HandleFX");

	AGC_Perk_Assassination_Active_C_HandleFX_Params params;
	params.Target = Target;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Perk_Assassination_Active_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.UserConstructionScript");

	AGC_Perk_Assassination_Active_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Perk_Assassination_Active_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.OnLoopingStart");

	AGC_Perk_Assassination_Active_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Perk_Assassination_Active_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.OnApplication");

	AGC_Perk_Assassination_Active_C_OnApplication_Params params;
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


// Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.ExecuteUbergraph_GC_Perk_Assassination_Active
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Perk_Assassination_Active_C::ExecuteUbergraph_GC_Perk_Assassination_Active(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C.ExecuteUbergraph_GC_Perk_Assassination_Active");

	AGC_Perk_Assassination_Active_C_ExecuteUbergraph_GC_Perk_Assassination_Active_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
