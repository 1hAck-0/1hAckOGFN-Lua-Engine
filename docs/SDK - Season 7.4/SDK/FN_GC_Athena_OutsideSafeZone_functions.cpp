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

// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.RemoveStormAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawnAthena               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.RemoveStormAudio");

	AGC_Athena_OutsideSafeZone_C_RemoveStormAudio_Params params;
	params.PlayerPawnAthena = PlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.AddStormAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawnAthena               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.AddStormAudio");

	AGC_Athena_OutsideSafeZone_C_AddStormAudio_Params params;
	params.PlayerPawnAthena = PlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnExecute
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_Athena_OutsideSafeZone_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnExecute");

	AGC_Athena_OutsideSafeZone_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.UserConstructionScript");

	AGC_Athena_OutsideSafeZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Timeline
// (BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Timeline");

	AGC_Athena_OutsideSafeZone_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Athena_OutsideSafeZone_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart");

	AGC_Athena_OutsideSafeZone_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval");

	AGC_Athena_OutsideSafeZone_C_OnRemoval_Params params;
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


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnApplication");

	AGC_Athena_OutsideSafeZone_C_OnApplication_Params params;
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


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::ExecuteUbergraph_GC_Athena_OutsideSafeZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone");

	AGC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
