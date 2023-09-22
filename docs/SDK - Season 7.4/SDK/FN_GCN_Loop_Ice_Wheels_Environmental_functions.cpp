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

// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.SpawnEmittersAttachedToWheels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Sockets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USceneComponent*         AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ShoppingCart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UParticleSystemComponent*> SpawnedEmitters1               (Parm, OutParm, ZeroConstructor)

void AGCN_Loop_Ice_Wheels_Environmental_C::SpawnEmittersAttachedToWheels(class USceneComponent* AttachToComponent, bool ShoppingCart, class UParticleSystem* EmitterTemplate, TArray<struct FName>* Sockets, TArray<class UParticleSystemComponent*>* SpawnedEmitters1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.SpawnEmittersAttachedToWheels");

	AGCN_Loop_Ice_Wheels_Environmental_C_SpawnEmittersAttachedToWheels_Params params;
	params.AttachToComponent = AttachToComponent;
	params.ShoppingCart = ShoppingCart;
	params.EmitterTemplate = EmitterTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sockets != nullptr)
		*Sockets = params.Sockets;
	if (SpawnedEmitters1 != nullptr)
		*SpawnedEmitters1 = params.SpawnedEmitters1;
}


// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_Ice_Wheels_Environmental_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.UserConstructionScript");

	AGCN_Loop_Ice_Wheels_Environmental_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_Ice_Wheels_Environmental_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnLoopingStart");

	AGCN_Loop_Ice_Wheels_Environmental_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Wheels_Environmental_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.OnRemoval");

	AGCN_Loop_Ice_Wheels_Environmental_C_OnRemoval_Params params;
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


// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Wheels_Environmental_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ReceiveTick");

	AGCN_Loop_Ice_Wheels_Environmental_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_Ice_Wheels_Environmental_C::ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental");

	AGCN_Loop_Ice_Wheels_Environmental_C_ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
