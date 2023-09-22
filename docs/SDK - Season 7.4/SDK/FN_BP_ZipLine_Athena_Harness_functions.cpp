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

// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UserConstructionScript");

	ABP_ZipLine_Athena_Harness_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay");

	ABP_ZipLine_Athena_Harness_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Start_Travel_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio");

	ABP_ZipLine_Athena_Harness_C_Start_Travel_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Stop_Travel_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio");

	ABP_ZipLine_Athena_Harness_C_Stop_Travel_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed");

	ABP_ZipLine_Athena_Harness_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLine_Athena_Harness_C::HandleOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied");

	ABP_ZipLine_Athena_Harness_C_HandleOnDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual
// (BlueprintCallable, BlueprintEvent)

void ABP_ZipLine_Athena_Harness_C::Chime_Visual()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual");

	ABP_ZipLine_Athena_Harness_C_Chime_Visual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLine_Athena_Harness_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness");

	ABP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
