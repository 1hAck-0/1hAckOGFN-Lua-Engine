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

// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetMaxAudibleDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Max_Distance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::GetMaxAudibleDistance(float* Max_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetMaxAudibleDistance");

	AJackalVehicle_Athena_C_GetMaxAudibleDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max_Distance != nullptr)
		*Max_Distance = params.Max_Distance;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldBump
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Hit_Normal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bump                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::ShouldBump(struct FVector Hit_Normal, bool* Bump)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldBump");

	AJackalVehicle_Athena_C_ShouldBump_Params params;
	params.Hit_Normal = Hit_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bump != nullptr)
		*Bump = params.Bump;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldDestroyProp?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AJackalVehicle_Athena_C::ShouldDestroyProp_(struct FVector HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ShouldDestroyProp?");

	AJackalVehicle_Athena_C_ShouldDestroyProp__Params params;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DestroyBuildingPiece
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DestroyThreshold               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.DestroyBuildingPiece");

	AJackalVehicle_Athena_C_DestroyBuildingPiece_Params params;
	params.BuildingActor = BuildingActor;
	params.DestroyThreshold = DestroyThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UpdateSurfaceType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::UpdateSurfaceType(TEnumAsByte<EPhysicalSurface> Surface, int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.UpdateSurfaceType");

	AJackalVehicle_Athena_C_UpdateSurfaceType_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendBoostTimeToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::SendBoostTimeToMaterials(float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendBoostTimeToMaterials");

	AJackalVehicle_Athena_C_SendBoostTimeToMaterials_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendHeadlightValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::SendHeadlightValueToMaterials(float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendHeadlightValueToMaterials");

	AJackalVehicle_Athena_C_SendHeadlightValueToMaterials_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendDamageValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ParameterValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::SendDamageValueToMaterials(float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.SendDamageValueToMaterials");

	AJackalVehicle_Athena_C_SendDamageValueToMaterials_Params params;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HapticsOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::HapticsOnHit(float HitMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.HapticsOnHit");

	AJackalVehicle_Athena_C_HapticsOnHit_Params params;
	params.HitMagnitude = HitMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.IsBoostCharging
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Charging                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::IsBoostCharging(bool* Is_Charging)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.IsBoostCharging");

	AJackalVehicle_Athena_C_IsBoostCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Charging != nullptr)
		*Is_Charging = params.Is_Charging;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CurrentBoostCharge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Charge_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::CurrentBoostCharge(float* Charge_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.CurrentBoostCharge");

	AJackalVehicle_Athena_C_CurrentBoostCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Charge_Value != nullptr)
		*Charge_Value = params.Charge_Value;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.DeactivateComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::DeactivateComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.DeactivateComponents");

	AJackalVehicle_Athena_C_DeactivateComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AJackalVehicle_Athena_C::GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionLabels");

	AJackalVehicle_Athena_C_GetVehicleSeatActionLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AJackalVehicle_Athena_C::GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatLabels");

	AJackalVehicle_Athena_C_GetVehicleSeatLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionNames
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AJackalVehicle_Athena_C::GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetVehicleSeatActionNames");

	AJackalVehicle_Athena_C_GetVehicleSeatActionNames_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetIconPlacement
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutExtents                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.GetIconPlacement");

	AJackalVehicle_Athena_C_GetIconPlacement_Params params;
	params.SelfActor = SelfActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutExtents != nullptr)
		*OutExtents = params.OutExtents;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.UserConstructionScript");

	AJackalVehicle_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnEnterVehicle");

	AJackalVehicle_Athena_C_OnPawnEnterVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExitSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnPawnExitVehicle");

	AJackalVehicle_Athena_C_OnPawnExitVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.ExitSocketName = ExitSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.SetupCosmetics
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::SetupCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.SetupCosmetics");

	AJackalVehicle_Athena_C_SetupCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AJackalVehicle_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveBeginPlay");

	AJackalVehicle_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostBegin
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnBoostBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostBegin");

	AJackalVehicle_Athena_C_OnBoostBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostEnd
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnBoostEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnBoostEnd");

	AJackalVehicle_Athena_C_OnBoostEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeBegin
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnJumpChargeBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeBegin");

	AJackalVehicle_Athena_C_OnJumpChargeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnJumpChargeEnd(float Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumpChargeEnd");

	AJackalVehicle_Athena_C_OnJumpChargeEnd_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnJumped(float Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnJumped");

	AJackalVehicle_Athena_C_OnJumped_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnCollisionHitEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormalImpulse               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitFrictionImpulse             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  HitSurfaceType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnCollisionHitEffects");

	AJackalVehicle_Athena_C_OnCollisionHitEffects_Params params;
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


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnEnteredWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AJackalVehicle_Athena_C::OnEnteredWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnEnteredWaterVolume");

	AJackalVehicle_Athena_C_OnEnteredWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnExitedWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AJackalVehicle_Athena_C::OnExitedWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnExitedWaterVolume");

	AJackalVehicle_Athena_C_OnExitedWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.CheckWaterEvent
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::CheckWaterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.CheckWaterEvent");

	AJackalVehicle_Athena_C_CheckWaterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StopDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::StopDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.StopDriverCameraShake");

	AJackalVehicle_Athena_C_StopDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.StartDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::StartDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.StartDriverCameraShake");

	AJackalVehicle_Athena_C_StartDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnIsSprintingChanged
// (Event, Protected, BlueprintEvent)

void AJackalVehicle_Athena_C::OnIsSprintingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnIsSprintingChanged");

	AJackalVehicle_Athena_C_OnIsSprintingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.K2_ApplyCosmeticWrap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaItemWrapDefinition* LoadedWrap                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.K2_ApplyCosmeticWrap");

	AJackalVehicle_Athena_C_K2_ApplyCosmeticWrap_Params params;
	params.LoadedWrap = LoadedWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ChangeOutMaterials
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::ChangeOutMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ChangeOutMaterials");

	AJackalVehicle_Athena_C_ChangeOutMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnStopTick
// (Event, Public, BlueprintEvent)

void AJackalVehicle_Athena_C::OnStopTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnStopTick");

	AJackalVehicle_Athena_C_OnStopTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AJackalVehicle_Athena_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent");

	AJackalVehicle_Athena_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AJackalVehicle_Athena_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnDeathPlayEffects");

	AJackalVehicle_Athena_C_OnDeathPlayEffects_Params params;
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


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               ExitingPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExitDuration                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStarted");

	AJackalVehicle_Athena_C_OnHoldExitStarted_Params params;
	params.ExitingPawn = ExitingPawn;
	params.ExitDuration = ExitDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               ExitingPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::OnHoldExitStopped(class AFortPawn* ExitingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.OnHoldExitStopped");

	AJackalVehicle_Athena_C_OnHoldExitStopped_Params params;
	params.ExitingPawn = ExitingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.VisualIndicator
// (BlueprintCallable, BlueprintEvent)

void AJackalVehicle_Athena_C::VisualIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.VisualIndicator");

	AJackalVehicle_Athena_C_VisualIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.HideQuickBarForSecondaryAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::HideQuickBarForSecondaryAbility(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.HideQuickBarForSecondaryAbility");

	AJackalVehicle_Athena_C_HideQuickBarForSecondaryAbility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ReceiveEndPlay");

	AJackalVehicle_Athena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Athena.JackalVehicle_Athena_C.ExecuteUbergraph_JackalVehicle_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AJackalVehicle_Athena_C::ExecuteUbergraph_JackalVehicle_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Athena.JackalVehicle_Athena_C.ExecuteUbergraph_JackalVehicle_Athena");

	AJackalVehicle_Athena_C_ExecuteUbergraph_JackalVehicle_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
