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

// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.SpawnEmittersAttachedToWheels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Sockets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USceneComponent*         AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           NoOffsets                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleMult                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UParticleSystemComponent*> SpawnedEmitters1               (Parm, OutParm, ZeroConstructor)

void AGCN_Loop_Ice_Wheels_C::SpawnEmittersAttachedToWheels(class USceneComponent* AttachToComponent, bool NoOffsets, class UParticleSystem* EmitterTemplate, float ScaleMult, TArray<struct FName>* Sockets, TArray<class UParticleSystemComponent*>* SpawnedEmitters1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.SpawnEmittersAttachedToWheels");

	AGCN_Loop_Ice_Wheels_C_SpawnEmittersAttachedToWheels_Params params;
	params.AttachToComponent = AttachToComponent;
	params.NoOffsets = NoOffsets;
	params.EmitterTemplate = EmitterTemplate;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sockets != nullptr)
		*Sockets = params.Sockets;
	if (SpawnedEmitters1 != nullptr)
		*SpawnedEmitters1 = params.SpawnedEmitters1;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.UserConstructionScript");

	AGCN_Loop_Ice_Wheels_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_Ice_Wheels_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnLoopingStart");

	AGCN_Loop_Ice_Wheels_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Wheels_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnRemoval");

	AGCN_Loop_Ice_Wheels_C_OnRemoval_Params params;
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


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_C::BeginExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.BeginExpireTell");

	AGCN_Loop_Ice_Wheels_C_BeginExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ClearExpireTell");

	AGCN_Loop_Ice_Wheels_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_C::ExpireWarningTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExpireWarningTick");

	AGCN_Loop_Ice_Wheels_C_ExpireWarningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.Event ModulateSound
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_C::Event_ModulateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.Event ModulateSound");

	AGCN_Loop_Ice_Wheels_C_Event_ModulateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Wheels_C::ExecuteUbergraph_GCN_Loop_Ice_Wheels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels");

	AGCN_Loop_Ice_Wheels_C_ExecuteUbergraph_GCN_Loop_Ice_Wheels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
