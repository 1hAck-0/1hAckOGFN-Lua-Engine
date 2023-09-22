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

// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// 0x0120 (0x08F0 - 0x07D0)
class ABP_Athena_Environmental_ZipLine_C : public AFortAthenaZipline
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           InteractCapsule;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Line;                                                  // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           OverlapCapsule;                                           // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Zipline;                                                  // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0800(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x080C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MotorOffset;                                              // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineCollisionThickness;                                   // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerOffsetToLine;                                       // 0x082C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PoleA;                                                    // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      PoleB;                                                    // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FCurveTableRowHandle                        SpeedCTHandle;                                            // 0x0848(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        ZipLineEnabledCTHandle;                                   // 0x0858(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        LineCollisionRadiusCTHandle;                              // 0x0868(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        BuildingCheckBoxExtentsCTHandle;                          // 0x0878(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       BackendName;                                              // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjStat;                                                  // 0x0898(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LineExtendBeyondPoleLength;                               // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PoleASocketLocation;                                      // 0x08AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PoleBSocketLocation;                                      // 0x08B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     PlayersPendingMovementModeChange;                         // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CollisionHeightAboveLine;                                 // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerOffsetToLine_Hoverboard;                            // 0x08E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C");
		return ptr;
	}


	void Setup_Overlap_Bindings();
	void HandleEnterZipline(class AFortPlayerPawn* InPlayerPawn);
	void CheckForBuildings(class AFortPlayerPawn* Player, bool* BuildingNearby_);
	void QuestCheckForUse(class AFortPlayerController* FortPlayerController);
	void GetCharacterCustomMovementMode(class APawn* Character, TEnumAsByte<EFortCustomMovement>* CustomMovementMode, TEnumAsByte<EMovementMode>* MovementMode);
	void StartZipLining(class AFortPlayerPawn* FortPlayerPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleOnMapInfoInitialized();
	void HandleOnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void HandleOnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void HandleOnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
