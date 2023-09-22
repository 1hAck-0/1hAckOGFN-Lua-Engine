#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
// 0x00E0 (0x0848 - 0x0768)
class AB_BGA_Athena_EnvCampFire_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             FireLoc;                                                  // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood;                                                     // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FirePitEmpty;                                             // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   InteractingPawn;                                          // 0x0798(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeenUsed;                                                 // 0x07A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	float                                              DousedSmokeLife;                                          // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_DousedSmokeLife;                                      // 0x07A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HotfixedEnabled;                                          // 0x07C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyIfDisabled;                                        // 0x07C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // 0x07CA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x07CB(0x0005) MISSED OFFSET
	struct FScalableFloat                              Row_HotfixEnabled;                                        // 0x07D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     TraceOffset;                                              // 0x07F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Season7Campfire;                                          // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       CustomSpecialS7Tags;                                      // 0x0800(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpecialS7FireTime;                                        // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FTimerHandle                                DousedSmokeWispTimer;                                     // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             S7SuccessEmitter;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  S7SuccessSound;                                           // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockInteraction;                                         // 0x0840(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	int                                                LitRepBool;                                               // 0x0844(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C");
		return ptr;
	}


	void OnRep_LitRepBool();
	void OnRep_Destroyed();
	void CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial);
	bool RowToBool(struct FScalableFloat Input);
	void SetSheetValues();
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void OnReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags);
	void ReceiveBeginPlay();
	void Start();
	void BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void BindToFloor();
	void HandleBoundDestroyed();
	void GoOut();
	void Light();
	void CheckDestroyDisabled();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void SpecialS7LightsFireAfterOut();
	void KillDouseSmokeWisp();
	void Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, struct FName BackendName, int CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
	void HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn);
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
