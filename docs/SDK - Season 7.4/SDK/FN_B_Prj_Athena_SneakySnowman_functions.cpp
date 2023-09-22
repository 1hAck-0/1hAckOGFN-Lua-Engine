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

// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UpdateQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPC                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SneakySnowman_C::UpdateQuest(class AFortPlayerController* FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UpdateQuest");

	AB_Prj_Athena_SneakySnowman_C_UpdateQuest_Params params;
	params.FortPC = FortPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ShouldApplySnowman?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_Prj_Athena_SneakySnowman_C::ShouldApplySnowman_(class UObject* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ShouldApplySnowman?");

	AB_Prj_Athena_SneakySnowman_C_ShouldApplySnowman__Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Should Bounce?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Normal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SneakySnowman_C::Should_Bounce_(struct FVector Hit_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Should Bounce?");

	AB_Prj_Athena_SneakySnowman_C_Should_Bounce__Params params;
	params.Hit_Normal = Hit_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SneakySnowman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.UserConstructionScript");

	AB_Prj_Athena_SneakySnowman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_SneakySnowman_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ReceiveBeginPlay");

	AB_Prj_Athena_SneakySnowman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_SneakySnowman_C::OnStop(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnStop");

	AB_Prj_Athena_SneakySnowman_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_SneakySnowman_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnExploded");

	AB_Prj_Athena_SneakySnowman_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SneakySnowman_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult HitResult, bool bIsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.OnTouched");

	AB_Prj_Athena_SneakySnowman_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Explode
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SneakySnowman_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.Explode");

	AB_Prj_Athena_SneakySnowman_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ExecuteUbergraph_B_Prj_Athena_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SneakySnowman_C::ExecuteUbergraph_B_Prj_Athena_SneakySnowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C.ExecuteUbergraph_B_Prj_Athena_SneakySnowman");

	AB_Prj_Athena_SneakySnowman_C_ExecuteUbergraph_B_Prj_Athena_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
