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

// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_MegaStorm_DamageRing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.UserConstructionScript");

	AGCNL_MegaStorm_DamageRing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline
// (BlueprintEvent)

void AGCNL_MegaStorm_DamageRing_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline");

	AGCNL_MegaStorm_DamageRing_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_MegaStorm_DamageRing_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay");

	AGCNL_MegaStorm_DamageRing_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_MegaStorm_DamageRing_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart");

	AGCNL_MegaStorm_DamageRing_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_MegaStorm_DamageRing_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval");

	AGCNL_MegaStorm_DamageRing_C_OnRemoval_Params params;
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


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset
// (BlueprintCallable, BlueprintEvent)

void AGCNL_MegaStorm_DamageRing_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset");

	AGCNL_MegaStorm_DamageRing_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_MegaStorm_DamageRing_C::ExecuteUbergraph_GCNL_MegaStorm_DamageRing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing");

	AGCNL_MegaStorm_DamageRing_C_ExecuteUbergraph_GCNL_MegaStorm_DamageRing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
