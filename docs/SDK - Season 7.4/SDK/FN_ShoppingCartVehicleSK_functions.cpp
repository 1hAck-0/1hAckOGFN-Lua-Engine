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

// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatPrimaryAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AShoppingCartVehicleSK_C::GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatPrimaryAction");

	AShoppingCartVehicleSK_C_GetVehicleSeatPrimaryAction_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AShoppingCartVehicleSK_C::GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionLabels");

	AShoppingCartVehicleSK_C_GetVehicleSeatActionLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AShoppingCartVehicleSK_C::GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatLabels");

	AShoppingCartVehicleSK_C_GetVehicleSeatLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionNames
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AShoppingCartVehicleSK_C::GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.GetVehicleSeatActionNames");

	AShoppingCartVehicleSK_C_GetVehicleSeatActionNames_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateDynamicCameraShake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UpdateDynamicCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateDynamicCameraShake");

	AShoppingCartVehicleSK_C_UpdateDynamicCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.IsLocalPlayerRiding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::IsLocalPlayerRiding(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.IsLocalPlayerRiding");

	AShoppingCartVehicleSK_C_IsLocalPlayerRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_CorrectiveImpulse
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnRep_CorrectiveImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_CorrectiveImpulse");

	AShoppingCartVehicleSK_C_OnRep_CorrectiveImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PlayHapticsOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::PlayHapticsOnHit(float HitMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PlayHapticsOnHit");

	AShoppingCartVehicleSK_C_PlayHapticsOnHit_Params params;
	params.HitMagnitude = HitMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachWeaponToCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::AttachWeaponToCart(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachWeaponToCart");

	AShoppingCartVehicleSK_C_AttachWeaponToCart_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_ImpulseVector
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnRep_ImpulseVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnRep_ImpulseVector");

	AShoppingCartVehicleSK_C_OnRep_ImpulseVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UserConstructionScript");

	AShoppingCartVehicleSK_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnCollisionHitEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormalImpulse               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitFrictionImpulse             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  HitSurfaceType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnCollisionHitEffects");

	AShoppingCartVehicleSK_C_OnCollisionHitEffects_Params params;
	params.HitLocation = HitLocation;
	params.HitNormalImpulse = HitNormalImpulse;
	params.HitFrictionImpulse = HitFrictionImpulse;
	params.HitNormal = HitNormal;
	params.HitActor = HitActor;
	params.HitSurfaceType = HitSurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ApplyImpulse
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::ApplyImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ApplyImpulse");

	AShoppingCartVehicleSK_C_ApplyImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.BndEvt__Box_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShoppingCartVehicleSK_C::BndEvt__Box_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.BndEvt__Box_K2Node_ComponentBoundEvent");

	AShoppingCartVehicleSK_C_BndEvt__Box_K2Node_ComponentBoundEvent_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachToCart
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::AttachToCart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.AttachToCart");

	AShoppingCartVehicleSK_C_AttachToCart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.DropItems
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::DropItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.DropItems");

	AShoppingCartVehicleSK_C_DropItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateMovementCosmeticParameters
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::UpdateMovementCosmeticParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.UpdateMovementCosmeticParameters");

	AShoppingCartVehicleSK_C_UpdateMovementCosmeticParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AShoppingCartVehicleSK_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDeathPlayEffects");

	AShoppingCartVehicleSK_C_OnDeathPlayEffects_Params params;
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


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveTick");

	AShoppingCartVehicleSK_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PedalForceFeedback
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::PedalForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PedalForceFeedback");

	AShoppingCartVehicleSK_C_PedalForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnEnterVehicle");

	AShoppingCartVehicleSK_C_OnPawnEnterVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnWeaponEquipped");

	AShoppingCartVehicleSK_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.RocketSpawned
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::RocketSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.RocketSpawned");

	AShoppingCartVehicleSK_C_RocketSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExitSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnPawnExitVehicle");

	AShoppingCartVehicleSK_C_OnPawnExitVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.ExitSocketName = ExitSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDamaged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle EffectContext                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnDamaged");

	AShoppingCartVehicleSK_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.EffectContext = EffectContext;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.Update Damage State
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::Update_Damage_State(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.Update Damage State");

	AShoppingCartVehicleSK_C_Update_Damage_State_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ReceiveEndPlay");

	AShoppingCartVehicleSK_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnSpringCompression
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnSpringCompression()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnSpringCompression");

	AShoppingCartVehicleSK_C_OnSpringCompression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnEnteredWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnEnteredWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnEnteredWaterVolume");

	AShoppingCartVehicleSK_C_OnEnteredWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnExitedWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShoppingCartVehicleSK_C::OnExitedWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnExitedWaterVolume");

	AShoppingCartVehicleSK_C_OnExitedWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CheckWater
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::CheckWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CheckWater");

	AShoppingCartVehicleSK_C_CheckWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PawnHitByVehicle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactNormal                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVector                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::PawnHitByVehicle(class AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.PawnHitByVehicle");

	AShoppingCartVehicleSK_C_PawnHitByVehicle_Params params;
	params.Pawn = Pawn;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;
	params.LaunchVector = LaunchVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnStopTick
// (Event, Public, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnStopTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnStopTick");

	AShoppingCartVehicleSK_C_OnStopTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsCoastingChanged
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnIsCoastingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsCoastingChanged");

	AShoppingCartVehicleSK_C_OnIsCoastingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsSprintingChanged
// (Event, Protected, BlueprintEvent)

void AShoppingCartVehicleSK_C::OnIsSprintingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.OnIsSprintingChanged");

	AShoppingCartVehicleSK_C_OnIsSprintingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverRumble
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopDriverRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverRumble");

	AShoppingCartVehicleSK_C_StopDriverRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverRumble
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StartDriverRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverRumble");

	AShoppingCartVehicleSK_C_StartDriverRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StartDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StartDriverCameraShake");

	AShoppingCartVehicleSK_C_StartDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopCoastCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopCoastCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopCoastCameraShake");

	AShoppingCartVehicleSK_C_StopCoastCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::StopDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.StopDriverCameraShake");

	AShoppingCartVehicleSK_C_StopDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CanHitLastDriver
// (BlueprintCallable, BlueprintEvent)

void AShoppingCartVehicleSK_C::CanHitLastDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.CanHitLastDriver");

	AShoppingCartVehicleSK_C_CanHitLastDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ExecuteUbergraph_ShoppingCartVehicleSK
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShoppingCartVehicleSK_C::ExecuteUbergraph_ShoppingCartVehicleSK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShoppingCartVehicleSK.ShoppingCartVehicleSK_C.ExecuteUbergraph_ShoppingCartVehicleSK");

	AShoppingCartVehicleSK_C_ExecuteUbergraph_ShoppingCartVehicleSK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
