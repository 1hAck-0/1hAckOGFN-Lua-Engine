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

// Function Deimos_Fiend.Deimos_Fiend_C.GetEnemyColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::GetEnemyColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.GetEnemyColor");

	ADeimos_Fiend_C_GetEnemyColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Deimos_Fiend.Deimos_Fiend_C.Temp_FindClosestBone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClosestBone                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::Temp_FindClosestBone(struct FVector HitLocation, struct FName* ClosestBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.Temp_FindClosestBone");

	ADeimos_Fiend_C_Temp_FindClosestBone_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestBone != nullptr)
		*ClosestBone = params.ClosestBone;
}


// Function Deimos_Fiend.Deimos_Fiend_C.SetupMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::SetupMIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.SetupMIDs");

	ADeimos_Fiend_C_SetupMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.OnRep_HasBackPack
// (BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::OnRep_HasBackPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.OnRep_HasBackPack");

	ADeimos_Fiend_C_OnRep_HasBackPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.UserConstructionScript");

	ADeimos_Fiend_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.MantleStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MidPos                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LowWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MidWall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullWall                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WindowWall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::MantleStart(struct FVector StartPos, struct FVector MidPos, struct FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.MantleStart");

	ADeimos_Fiend_C_MantleStart_Params params;
	params.StartPos = StartPos;
	params.MidPos = MidPos;
	params.EndPos = EndPos;
	params.LowWall = LowWall;
	params.MidWall = MidWall;
	params.FullWall = FullWall;
	params.WindowWall = WindowWall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.MantleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::MantleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.MantleEnd");

	ADeimos_Fiend_C_MantleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.HuskEvadeStart
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::HuskEvadeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.HuskEvadeStart");

	ADeimos_Fiend_C_HuskEvadeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.VerifyTakerAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpecialAttack                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Soul_Suck                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.VerifyTakerAttack");

	ADeimos_Fiend_C_VerifyTakerAttack_Params params;
	params.SpecialAttack = SpecialAttack;
	params.Swoop = Swoop;
	params.Soul_Suck = Soul_Suck;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.ResetTakerSpecialAttackTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Swoop                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SoulSuckMelee                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Portal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.ResetTakerSpecialAttackTimer");

	ADeimos_Fiend_C_ResetTakerSpecialAttackTimer_Params params;
	params.Swoop = Swoop;
	params.SoulSuckMelee = SoulSuckMelee;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.BeginTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::BeginTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.BeginTakerSwoopAttack");

	ADeimos_Fiend_C_BeginTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.EndTakerSwoopAttack
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::EndTakerSwoopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.EndTakerSwoopAttack");

	ADeimos_Fiend_C_EndTakerSwoopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.TakerWallPortalBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BuildingPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBTTask_BlueprintBase*   Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredMoveLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, struct FVector DesiredMoveLocation, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.TakerWallPortalBehavior");

	ADeimos_Fiend_C_TakerWallPortalBehavior_Params params;
	params.BuildingPart = BuildingPart;
	params.Task = Task;
	params.DesiredMoveLocation = DesiredMoveLocation;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.IsTakerWallPortalAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Portal_Available_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::IsTakerWallPortalAvailable(bool Portal_Available_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.IsTakerWallPortalAvailable");

	ADeimos_Fiend_C_IsTakerWallPortalAvailable_Params params;
	params.Portal_Available_ = Portal_Available_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.TakerAttackFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccessfulHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::TakerAttackFSM(bool SuccessfulHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.TakerAttackFSM");

	ADeimos_Fiend_C_TakerAttackFSM_Params params;
	params.SuccessfulHit = SuccessfulHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::TakerSoulSuckSoundBegin(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundBegin");

	ADeimos_Fiend_C_TakerSoulSuckSoundBegin_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::TakerSoulSuckSoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckSoundEnd");

	ADeimos_Fiend_C_TakerSoulSuckSoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.PortalAdd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADeimos_Fiend_C::PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.PortalAdd");

	ADeimos_Fiend_C_PortalAdd_Params params;
	params.BuildingActor = BuildingActor;
	params.BuildingActorList = BuildingActorList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.PortalClear
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::PortalClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.PortalClear");

	ADeimos_Fiend_C_PortalClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckInterrupted
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::TakerSoulSuckInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.TakerSoulSuckInterrupted");

	ADeimos_Fiend_C_TakerSoulSuckInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.PortalGet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABuildingActor*>  BuildingActorList              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BT                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*> BuildingActorList, class AActor* BT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.PortalGet");

	ADeimos_Fiend_C_PortalGet_Params params;
	params.BuildingActor = BuildingActor;
	params.BuildingActorList = BuildingActorList;
	params.BT = BT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.PortalFX
// (Public, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::PortalFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.PortalFX");

	ADeimos_Fiend_C_PortalFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.PortalCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Collide_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::PortalCollision(bool Collide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.PortalCollision");

	ADeimos_Fiend_C_PortalCollision_Params params;
	params.Collide_ = Collide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Impact.Physical.Creature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ADeimos_Fiend_C::GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Impact.Physical.Creature");

	ADeimos_Fiend_C_GameplayCue_Impact_Physical_Creature_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeimos_Fiend_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.ReceiveBeginPlay");

	ADeimos_Fiend_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ADeimos_Fiend_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.OnStartedEncounterSpawn");

	ADeimos_Fiend_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.AnimateDeathMaterial
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::AnimateDeathMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.AnimateDeathMaterial");

	ADeimos_Fiend_C_AnimateDeathMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.CustomOnDied
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

void ADeimos_Fiend_C::CustomOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.CustomOnDied");

	ADeimos_Fiend_C_CustomOnDied_Params params;
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


// Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Athena.IceDeimos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ADeimos_Fiend_C::GameplayCue_Athena_IceDeimos(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.GameplayCue.Athena.IceDeimos");

	ADeimos_Fiend_C_GameplayCue_Athena_IceDeimos_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.RemoveChillerMaterial
// (BlueprintCallable, BlueprintEvent)

void ADeimos_Fiend_C::RemoveChillerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.RemoveChillerMaterial");

	ADeimos_Fiend_C_RemoveChillerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deimos_Fiend.Deimos_Fiend_C.ExecuteUbergraph_Deimos_Fiend
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeimos_Fiend_C::ExecuteUbergraph_Deimos_Fiend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deimos_Fiend.Deimos_Fiend_C.ExecuteUbergraph_Deimos_Fiend");

	ADeimos_Fiend_C_ExecuteUbergraph_Deimos_Fiend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
