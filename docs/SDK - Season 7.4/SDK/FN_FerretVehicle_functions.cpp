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

// Function FerretVehicle.FerretVehicle_C.QuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::QuestUpdate(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.QuestUpdate");

	AFerretVehicle_C_QuestUpdate_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.SendBoostTimeToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BoostTimeValueForMID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::SendBoostTimeToMaterials(float BoostTimeValueForMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.SendBoostTimeToMaterials");

	AFerretVehicle_C_SendBoostTimeToMaterials_Params params;
	params.BoostTimeValueForMID = BoostTimeValueForMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.SendDamageValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SavedDamageValueForMID         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::SendDamageValueToMaterials(float SavedDamageValueForMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.SendDamageValueToMaterials");

	AFerretVehicle_C_SendDamageValueToMaterials_Params params;
	params.SavedDamageValueForMID = SavedDamageValueForMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.SendHeadlightValueToMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SavedHeadlightValueForMID      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::SendHeadlightValueToMaterials(float SavedHeadlightValueForMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.SendHeadlightValueToMaterials");

	AFerretVehicle_C_SendHeadlightValueToMaterials_Params params;
	params.SavedHeadlightValueForMID = SavedHeadlightValueForMID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.GetIconPlacement
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutExtents                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GetIconPlacement");

	AFerretVehicle_C_GetIconPlacement_Params params;
	params.SelfActor = SelfActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutExtents != nullptr)
		*OutExtents = params.OutExtents;
}


// Function FerretVehicle.FerretVehicle_C.DestroyOrDamageBuildingPiece
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckForHealth                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DestroyThreshold               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::DestroyOrDamageBuildingPiece(class ABuildingActor* BuildingActor, bool CheckForHealth, class UClass* GameplayEffectClass, float DestroyThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.DestroyOrDamageBuildingPiece");

	AFerretVehicle_C_DestroyOrDamageBuildingPiece_Params params;
	params.BuildingActor = BuildingActor;
	params.CheckForHealth = CheckForHealth;
	params.GameplayEffectClass = GameplayEffectClass;
	params.DestroyThreshold = DestroyThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatPrimaryAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AFerretVehicle_C::GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GetVehicleSeatPrimaryAction");

	AFerretVehicle_C_GetVehicleSeatPrimaryAction_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FerretVehicle.FerretVehicle_C.OnRep_ImpactLocation
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::OnRep_ImpactLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnRep_ImpactLocation");

	AFerretVehicle_C_OnRep_ImpactLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AFerretVehicle_C::GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionLabels");

	AFerretVehicle_C_GetVehicleSeatActionLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatLabels
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> AFerretVehicle_C::GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GetVehicleSeatLabels");

	AFerretVehicle_C_GetVehicleSeatLabels_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionNames
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECommonInputType               OverrideInputType              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> AFerretVehicle_C::GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GetVehicleSeatActionNames");

	AFerretVehicle_C_GetVehicleSeatActionNames_Params params;
	params.PlayerPawn = PlayerPawn;
	params.OverrideInputType = OverrideInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FerretVehicle.FerretVehicle_C.OnRep_CorrectiveImpulse
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::OnRep_CorrectiveImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnRep_CorrectiveImpulse");

	AFerretVehicle_C_OnRep_CorrectiveImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.PlayHapticsOnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Grind                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::PlayHapticsOnHit(float HitMagnitude, bool Grind)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.PlayHapticsOnHit");

	AFerretVehicle_C_PlayHapticsOnHit_Params params;
	params.HitMagnitude = HitMagnitude;
	params.Grind = Grind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.AttachWeaponToCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::AttachWeaponToCart(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.AttachWeaponToCart");

	AFerretVehicle_C_AttachWeaponToCart_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnRep_ImpulseVector
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::OnRep_ImpulseVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnRep_ImpulseVector");

	AFerretVehicle_C_OnRep_ImpulseVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.UserConstructionScript");

	AFerretVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.Timeline
// (BlueprintEvent)

void AFerretVehicle_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.Timeline");

	AFerretVehicle_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostTimeline__FinishedFunc
// (BlueprintEvent)

void AFerretVehicle_C::BoostTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostTimeline__FinishedFunc");

	AFerretVehicle_C_BoostTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostTimeline__UpdateFunc
// (BlueprintEvent)

void AFerretVehicle_C::BoostTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostTimeline__UpdateFunc");

	AFerretVehicle_C_BoostTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostRumbleEnd
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::BoostRumbleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostRumbleEnd");

	AFerretVehicle_C_BoostRumbleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostCameraReverse
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::BoostCameraReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostCameraReverse");

	AFerretVehicle_C_BoostCameraReverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.LocalPassengerADS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsADS                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::LocalPassengerADS(bool IsADS)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.LocalPassengerADS");

	AFerretVehicle_C_LocalPassengerADS_Params params;
	params.IsADS = IsADS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostEnd
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::BoostEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostEnd");

	AFerretVehicle_C_BoostEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFerretVehicle_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent");

	AFerretVehicle_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.UpdateBoostRumble
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::UpdateBoostRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.UpdateBoostRumble");

	AFerretVehicle_C_UpdateBoostRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.DestroyCooldown
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::DestroyCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.DestroyCooldown");

	AFerretVehicle_C_DestroyCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BoostBegin
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::BoostBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BoostBegin");

	AFerretVehicle_C_BoostBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ReverseBoostTimeline
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::ReverseBoostTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ReverseBoostTimeline");

	AFerretVehicle_C_ReverseBoostTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.StartBoostRumble
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::StartBoostRumble()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.StartBoostRumble");

	AFerretVehicle_C_StartBoostRumble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.Handle Spring Compression Audio
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::Handle_Spring_Compression_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.Handle Spring Compression Audio");

	AFerretVehicle_C_Handle_Spring_Compression_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnEnteredWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFerretVehicle_C::OnEnteredWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnEnteredWaterVolume");

	AFerretVehicle_C_OnEnteredWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnExitedWaterVolume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 WaterSurfacePoint              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFerretVehicle_C::OnExitedWaterVolume(struct FVector WaterSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnExitedWaterVolume");

	AFerretVehicle_C_OnExitedWaterVolume_Params params;
	params.WaterSurfacePoint = WaterSurfacePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.CheckWater
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::CheckWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.CheckWater");

	AFerretVehicle_C_CheckWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnSpringCompression_2
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::OnSpringCompression_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnSpringCompression_2");

	AFerretVehicle_C_OnSpringCompression_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.EBrakeBegin_2
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::EBrakeBegin_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.EBrakeBegin_2");

	AFerretVehicle_C_EBrakeBegin_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.EBrakeEnd_2
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::EBrakeEnd_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.EBrakeEnd_2");

	AFerretVehicle_C_EBrakeEnd_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.PowerSlideBegin_2
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::PowerSlideBegin_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.PowerSlideBegin_2");

	AFerretVehicle_C_PowerSlideBegin_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.PowerSlideEnd_2
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::PowerSlideEnd_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.PowerSlideEnd_2");

	AFerretVehicle_C_PowerSlideEnd_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFerretVehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ReceiveBeginPlay");

	AFerretVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnStopTick
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::OnStopTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnStopTick");

	AFerretVehicle_C_OnStopTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnEngineStop
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::OnEngineStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnEngineStop");

	AFerretVehicle_C_OnEngineStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ReceiveEndPlay");

	AFerretVehicle_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.BrakeCameraReverse
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::BrakeCameraReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.BrakeCameraReverse");

	AFerretVehicle_C_BrakeCameraReverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnEngineStart
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::OnEngineStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnEngineStart");

	AFerretVehicle_C_OnEngineStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnLanding
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::OnLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnLanding");

	AFerretVehicle_C_OnLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.StopDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::StopDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.StopDriverCameraShake");

	AFerretVehicle_C_StopDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.StartDriverCameraShake
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::StartDriverCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.StartDriverCameraShake");

	AFerretVehicle_C_StartDriverCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.Update Damage State
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::Update_Damage_State(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.Update Damage State");

	AFerretVehicle_C_Update_Damage_State_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.Start Stop Engine Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Starting                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::Start_Stop_Engine_Audio(bool Starting)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.Start Stop Engine Audio");

	AFerretVehicle_C_Start_Stop_Engine_Audio_Params params;
	params.Starting = Starting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.SmashedThroughBuildingPiece
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 ImpactPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactNormal                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFerretVehicle_C::SmashedThroughBuildingPiece(struct FVector ImpactPoint, struct FVector ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.SmashedThroughBuildingPiece");

	AFerretVehicle_C_SmashedThroughBuildingPiece_Params params;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDualWeaponHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistantFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::WeaponFired(EDualWeaponHand Hand, bool bPersistantFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.WeaponFired");

	AFerretVehicle_C_WeaponFired_Params params;
	params.Hand = Hand;
	params.bPersistantFire = bPersistantFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnDamaged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle EffectContext                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnDamaged");

	AFerretVehicle_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.EffectContext = EffectContext;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.PawnHitByVehicle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactNormal                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVector                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::PawnHitByVehicle(class AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.PawnHitByVehicle");

	AFerretVehicle_C_PawnHitByVehicle_Params params;
	params.Pawn = Pawn;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;
	params.LaunchVector = LaunchVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnPawnExitVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ExitSocketName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnPawnExitVehicle");

	AFerretVehicle_C_OnPawnExitVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.ExitSocketName = ExitSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnWeaponEquipped");

	AFerretVehicle_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnHoldExitStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               ExitingPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExitDuration                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnHoldExitStarted");

	AFerretVehicle_C_OnHoldExitStarted_Params params;
	params.ExitingPawn = ExitingPawn;
	params.ExitDuration = ExitDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnHoldExitStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               ExitingPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnHoldExitStopped(class AFortPawn* ExitingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnHoldExitStopped");

	AFerretVehicle_C_OnHoldExitStopped_Params params;
	params.ExitingPawn = ExitingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnPawnEnterVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnPawnEnterVehicle");

	AFerretVehicle_C_OnPawnEnterVehicle_Params params;
	params.PlayerPawn = PlayerPawn;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFerretVehicle_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnDamagePlayEffects");

	AFerretVehicle_C_OnDamagePlayEffects_Params params;
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


// Function FerretVehicle.FerretVehicle_C.K2_ApplyCosmeticWrap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaItemWrapDefinition* LoadedWrap                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.K2_ApplyCosmeticWrap");

	AFerretVehicle_C_K2_ApplyCosmeticWrap_Params params;
	params.LoadedWrap = LoadedWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ChangeOutMaterials
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::ChangeOutMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ChangeOutMaterials");

	AFerretVehicle_C_ChangeOutMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.GunOverheat
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::GunOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.GunOverheat");

	AFerretVehicle_C_GunOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AFerretVehicle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ReceiveDestroyed");

	AFerretVehicle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.PedalForceFeedback
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::PedalForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.PedalForceFeedback");

	AFerretVehicle_C_PedalForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.DamageEventTimedOut
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::DamageEventTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.DamageEventTimedOut");

	AFerretVehicle_C_DamageEventTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnCollisionHitEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormalImpulse               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitFrictionImpulse             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  HitSurfaceType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnCollisionHitEffects");

	AFerretVehicle_C_OnCollisionHitEffects_Params params;
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


// Function FerretVehicle.FerretVehicle_C.CanHitLastDriver
// (BlueprintCallable, BlueprintEvent)

void AFerretVehicle_C::CanHitLastDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.CanHitLastDriver");

	AFerretVehicle_C_CanHitLastDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFerretVehicle_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.OnDeathPlayEffects");

	AFerretVehicle_C_OnDeathPlayEffects_Params params;
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


// Function FerretVehicle.FerretVehicle_C.HideQuickBarForAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::HideQuickBarForAbility(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.HideQuickBarForAbility");

	AFerretVehicle_C_HideQuickBarForAbility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.SetHeadlightState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>     CurrentDayPhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>     PreviousDayPhase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAtCreation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::SetHeadlightState(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.SetHeadlightState");

	AFerretVehicle_C_SetHeadlightState_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.LightningSpark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::LightningSpark(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.LightningSpark");

	AFerretVehicle_C_LightningSpark_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FerretVehicle.FerretVehicle_C.ExecuteUbergraph_FerretVehicle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFerretVehicle_C::ExecuteUbergraph_FerretVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FerretVehicle.FerretVehicle_C.ExecuteUbergraph_FerretVehicle");

	AFerretVehicle_C_ExecuteUbergraph_FerretVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
