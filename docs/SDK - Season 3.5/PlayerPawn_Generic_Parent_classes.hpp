#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x1B28 - 0x1A50)
// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A50(0x8)(Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x1A58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x1A68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x1A78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x1A88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x1A98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x1AA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x1AB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnLegsMaterials;                                 // 0x1AC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnTorsoMaterials;                                // 0x1AD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x1AE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x1AF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x1B00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        WaterCounter;                                      // 0x1B10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentWaterMeshActor;                             // 0x1B18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x1B20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time_when_you_ll_be_able_to_splash_again;          // 0x1B24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Generic_Parent_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(struct FTransform& NewTransform);
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, const struct FTransform& K2Node_CustomEvent_NewTransform, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
