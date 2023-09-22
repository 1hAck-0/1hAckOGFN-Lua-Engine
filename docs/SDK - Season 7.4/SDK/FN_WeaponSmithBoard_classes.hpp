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

// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
// 0x00B0 (0x03E0 - 0x0330)
class AWeaponSmithBoard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalSlot_Hammers;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Swords;                                        // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_RocketLauncher;                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Pistol;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Shotgun;                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Assault;                                       // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSlot_Sniper;                                        // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Prison_Fence01wire;                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UFortSchematicItem*>                  FavSchematics;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              StaticMeshArray;                                          // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSchematicItem*                          RocketLauncher;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          SniperRifle;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          AssaultRifle;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          shotgun;                                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          pistol;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortSchematicItem*                          SMG;                                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Counter;                                                  // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    QuestToShow;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C");
		return ptr;
	}


	void GetCustomMeleeSchematics();
	void GetCustomRangedSchematics();
	void PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>* CustomizedMeleeWeaponSchematics);
	void PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>* CustomizedRangedWeaponSchematics);
	void RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard);
	void RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard);
	void UpdateVisibility();
	void PopulateSceneWithBestMeleeWeaponSchematics();
	void PopulateSceneWithBestRangedWeaponSchematics();
	void Populate_Skeletal_Mesh_Slots();
	void Populate_Ranged();
	void Generate_StaticMesh_Array();
	void Populate_Schematic_Favs();
	void UserConstructionScript();
	void OnLoaded(class UObject* Loaded);
	void ReceiveBeginPlay();
	void LoadAsync(class UStaticMeshComponent* MeshComponent);
	void PopulateWeaponBoard(TEnumAsByte<EWeaponSmithBoardOrganizationEnum> Organization);
	void CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_WeaponSmithBoard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
