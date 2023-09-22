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

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color");

	APlayerPawn_Athena_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::ReInitFrontendPetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay");

	APlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GetHitPoint FXLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutputLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::GetHitPoint_FXLocation(class AActor* Object, struct FVector* OutputLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GetHitPoint FXLocation");

	APlayerPawn_Athena_Generic_C_GetHitPoint_FXLocation_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputLocation != nullptr)
		*OutputLocation = params.OutputLocation;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled");

	APlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::DisableWaterLevelTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick");

	APlayerPawn_Athena_Generic_C_DisableWaterLevelTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPoseableMeshComponent*  PoseableMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh");

	APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
	if (PoseableMesh != nullptr)
		*PoseableMesh = params.PoseableMesh;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  Master                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody");

	APlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody_Params params;
	params.Mesh = Mesh;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomPartType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent");

	APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DuplicatedSkeletalMeshComponent != nullptr)
		*DuplicatedSkeletalMeshComponent = params.DuplicatedSkeletalMeshComponent;
	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript");

	APlayerPawn_Athena_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::MeleeSwingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight");

	APlayerPawn_Athena_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::MeleeSwingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft");

	APlayerPawn_Athena_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects");

	APlayerPawn_Athena_Generic_C_OnDamagePlayEffects_Params params;
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


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::OnLanded(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded");

	APlayerPawn_Athena_Generic_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped");

	APlayerPawn_Athena_Generic_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::FootStepLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft");

	APlayerPawn_Athena_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::FootStepRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight");

	APlayerPawn_Athena_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized");

	APlayerPawn_Athena_Generic_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed");

	APlayerPawn_Athena_Generic_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer");

	APlayerPawn_Athena_Generic_C_OnDeathServer_Params params;
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


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::Entered_WaterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume");

	APlayerPawn_Athena_Generic_C_Entered_WaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::CharacterDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed");

	APlayerPawn_Athena_Generic_C_CharacterDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::BindOnDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed");

	APlayerPawn_Athena_Generic_C_BindOnDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::AnimTrailsNotify(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify");

	APlayerPawn_Athena_Generic_C_AnimTrailsNotify_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemReference        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FirstSocketName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SecondSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* OverrideParticleComp           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverideFirstSocketName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OverideSecondSocketName        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, class UParticleSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup");

	APlayerPawn_Athena_Generic_C_AnimTrailsSetup_Params params;
	params.ParticleSystemReference = ParticleSystemReference;
	params.FirstSocketName = FirstSocketName;
	params.SecondSocketName = SecondSocketName;
	params.Width = Width;
	params.OverrideParticleComp = OverrideParticleComp;
	params.OverideFirstSocketName = OverideFirstSocketName;
	params.OverideSecondSocketName = OverideSecondSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::AnimTrailsDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable");

	APlayerPawn_Athena_Generic_C_AnimTrailsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Abilities_SpookyMist_Loop(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop");

	APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_PotionConsumed(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed");

	APlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded");

	APlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed");

	APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_Generic_C::GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied");

	APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::ExecuteUbergraph_PlayerPawn_Athena_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic");

	APlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_Generic_C::AnimNotify_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature");

	APlayerPawn_Athena_Generic_C_AnimNotify_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_C::AnimNotify_Begin__DelegateSignature(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature");

	APlayerPawn_Athena_Generic_C_AnimNotify_Begin__DelegateSignature_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
