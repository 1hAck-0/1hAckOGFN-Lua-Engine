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

// Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::FlashCubeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial");

	ABP_DeimosRift_C_FlashCubeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::OnRep_DamageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState");

	ABP_DeimosRift_C_OnRep_DamageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript");

	ABP_DeimosRift_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects");

	ABP_DeimosRift_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_C::OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer");

	ABP_DeimosRift_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_C::BP_Cosmetic_RampUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp");

	ABP_DeimosRift_C_BP_Cosmetic_RampUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_C::BP_Cosmetic_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro");

	ABP_DeimosRift_C_BP_Cosmetic_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_C::BP_Cosmetic_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle");

	ABP_DeimosRift_C_BP_Cosmetic_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             SpawnedAI                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeimosRift_C::OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn");

	ABP_DeimosRift_C_OnStartedEncounterSpawn_Params params;
	params.SpawnedAI = SpawnedAI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay");

	ABP_DeimosRift_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind
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

void ABP_DeimosRift_C::OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind");

	ABP_DeimosRift_C_OnDamaged_Bind_Params params;
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


// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_C::BP_Cosmetic_ShouldDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie");

	ABP_DeimosRift_C_BP_Cosmetic_ShouldDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::OnBuildingRiftSpawnedAI_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind");

	ABP_DeimosRift_C_OnBuildingRiftSpawnedAI_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.TestDynamicRiftSpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::TestDynamicRiftSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.TestDynamicRiftSpawn");

	ABP_DeimosRift_C_TestDynamicRiftSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.SpawnEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_C::SpawnEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.SpawnEffects");

	ABP_DeimosRift_C_SpawnEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeimosRift_C::ExecuteUbergraph_BP_DeimosRift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift");

	ABP_DeimosRift_C_ExecuteUbergraph_BP_DeimosRift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
