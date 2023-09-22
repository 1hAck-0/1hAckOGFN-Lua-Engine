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

// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Get Location in Circle XY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LocationLocalSpace             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_Storm_Bus_C::Get_Location_in_Circle_XY(struct FVector* LocationLocalSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Get Location in Circle XY");

	AGC_Athena_Storm_Bus_C_Get_Location_in_Circle_XY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = params.LocationLocalSpace;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Athena_Storm_Bus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.UserConstructionScript");

	AGC_Athena_Storm_Bus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__FinishedFunc
// (BlueprintEvent)

void AGC_Athena_Storm_Bus_C::Lightining_Flash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__FinishedFunc");

	AGC_Athena_Storm_Bus_C_Lightining_Flash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__UpdateFunc
// (BlueprintEvent)

void AGC_Athena_Storm_Bus_C::Lightining_Flash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Lightining Flash__UpdateFunc");

	AGC_Athena_Storm_Bus_C_Lightining_Flash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.StartRandomLightningFlashes
// (BlueprintCallable, BlueprintEvent)

void AGC_Athena_Storm_Bus_C::StartRandomLightningFlashes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.StartRandomLightningFlashes");

	AGC_Athena_Storm_Bus_C_StartRandomLightningFlashes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Athena_Storm_Bus_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.OnLoopingStart");

	AGC_Athena_Storm_Bus_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Play Lightning Flash Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_Storm_Bus_C::Play_Lightning_Flash_Audio(struct FVector Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.Play Lightning Flash Audio");

	AGC_Athena_Storm_Bus_C_Play_Lightning_Flash_Audio_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.ExecuteUbergraph_GC_Athena_Storm_Bus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_Storm_Bus_C::ExecuteUbergraph_GC_Athena_Storm_Bus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C.ExecuteUbergraph_GC_Athena_Storm_Bus");

	AGC_Athena_Storm_Bus_C_ExecuteUbergraph_GC_Athena_Storm_Bus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
