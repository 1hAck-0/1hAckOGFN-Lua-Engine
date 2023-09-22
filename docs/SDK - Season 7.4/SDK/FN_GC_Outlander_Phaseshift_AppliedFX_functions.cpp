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

// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Destroy Duplicate Character Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Destroy_Duplicate_Character_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Destroy Duplicate Character Meshes");

	AGC_Outlander_Phaseshift_AppliedFX_C_Destroy_Duplicate_Character_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Duplicate Character Meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Outlander_Phaseshift_AppliedFX_C::Duplicate_Character_Meshes(class AFortPlayerPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Duplicate Character Meshes");

	AGC_Outlander_Phaseshift_AppliedFX_C_Duplicate_Character_Meshes_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.UserConstructionScript");

	AGC_Outlander_Phaseshift_AppliedFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__FinishedFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Phase_Shift_Activation_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__FinishedFunc");

	AGC_Outlander_Phaseshift_AppliedFX_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__UpdateFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Phase_Shift_Activation_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Phase Shift Activation Timeline__UpdateFunc");

	AGC_Outlander_Phaseshift_AppliedFX_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__FinishedFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Teleport_PP_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__FinishedFunc");

	AGC_Outlander_Phaseshift_AppliedFX_C_Teleport_PP_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__UpdateFunc
// (BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Teleport_PP_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Teleport PP TL__UpdateFunc");

	AGC_Outlander_Phaseshift_AppliedFX_C_Teleport_PP_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnApplication");

	AGC_Outlander_Phaseshift_AppliedFX_C_OnApplication_Params params;
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


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnRemoval");

	AGC_Outlander_Phaseshift_AppliedFX_C_OnRemoval_Params params;
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


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Outlander_Phaseshift_AppliedFX_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.OnLoopingStart");

	AGC_Outlander_Phaseshift_AppliedFX_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Activate PP
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Activate_PP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Activate PP");

	AGC_Outlander_Phaseshift_AppliedFX_C_Activate_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Remove PP
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Remove_PP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Remove PP");

	AGC_Outlander_Phaseshift_AppliedFX_C_Remove_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Spawn Spline Actor
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Outlander_Phaseshift_AppliedFX_C::Spawn_Spline_Actor(class AFortPlayerPawn* Player_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Spawn Spline Actor");

	AGC_Outlander_Phaseshift_AppliedFX_C_Spawn_Spline_Actor_Params params;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Stop Splines if Valid
// (BlueprintCallable, BlueprintEvent)

void AGC_Outlander_Phaseshift_AppliedFX_C::Stop_Splines_if_Valid()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.Stop Splines if Valid");

	AGC_Outlander_Phaseshift_AppliedFX_C_Stop_Splines_if_Valid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Outlander_Phaseshift_AppliedFX_C::ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C.ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX");

	AGC_Outlander_Phaseshift_AppliedFX_C_ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
