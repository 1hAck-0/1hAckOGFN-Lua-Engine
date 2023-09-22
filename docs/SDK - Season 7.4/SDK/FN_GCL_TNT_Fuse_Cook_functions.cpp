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

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.WarningSetup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Warning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCL_TNT_Fuse_Cook_C::WarningSetup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.WarningSetup");

	AGCL_TNT_Fuse_Cook_C_WarningSetup_Params params;
	params.Warning = Warning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Opacity != nullptr)
		*Opacity = params.Opacity;
	if (Color != nullptr)
		*Color = params.Color;
	if (Size != nullptr)
		*Size = params.Size;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Spline Setup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Spline_Location                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCL_TNT_Fuse_Cook_C::Spline_Setup(float Alpha, struct FVector* Spline_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Spline Setup");

	AGCL_TNT_Fuse_Cook_C_Spline_Setup_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spline_Location != nullptr)
		*Spline_Location = params.Spline_Location;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript");

	AGCL_TNT_Fuse_Cook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__FinishedFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Movement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__FinishedFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Movement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__UpdateFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Movement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Movement__UpdateFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Movement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__FinishedFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Stage_1_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__FinishedFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Stage_1_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__UpdateFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Stage_1_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 1 Timeline__UpdateFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Stage_1_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__FinishedFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Stage_2_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__FinishedFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Stage_2_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__UpdateFunc
// (BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Fuse_Stage_2_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Fuse Stage 2 Timeline__UpdateFunc");

	AGCL_TNT_Fuse_Cook_C_Fuse_Stage_2_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_TNT_Fuse_Cook_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart");

	AGCL_TNT_Fuse_Cook_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_TNT_Fuse_Cook_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnRemoval");

	AGCL_TNT_Fuse_Cook_C_OnRemoval_Params params;
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


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 1 Fuse Particles
// (BlueprintCallable, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Control_Stage_1_Fuse_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 1 Fuse Particles");

	AGCL_TNT_Fuse_Cook_C_Control_Stage_1_Fuse_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 2 Fuse Particles
// (BlueprintCallable, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::Control_Stage_2_Fuse_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.Control Stage 2 Fuse Particles");

	AGCL_TNT_Fuse_Cook_C_Control_Stage_2_Fuse_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_TNT_Fuse_Cook_C::ExecuteUbergraph_GCL_TNT_Fuse_Cook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook");

	AGCL_TNT_Fuse_Cook_C_ExecuteUbergraph_GCL_TNT_Fuse_Cook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
