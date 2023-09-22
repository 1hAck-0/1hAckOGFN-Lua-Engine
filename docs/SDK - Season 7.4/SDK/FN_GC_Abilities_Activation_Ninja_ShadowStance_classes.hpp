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

// BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C
// 0x0160 (0x0588 - 0x0428)
class AGC_Abilities_Activation_Ninja_ShadowStance_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_BB0AFCD34C230AA0288885A106CC422E;// 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_BB0AFCD34C230AA0288885A106CC422E;// 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate_Ninja_ShadowStance_Dissolve__Direction_BB0AFCD34C230AA0288885A106CC422E;// 0x0438(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Animate_Ninja_ShadowStance_Dissolve;                      // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             MyTarget;                                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shadow_Stance_Material;                                   // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Ninja_Dissolve_Material;                                  // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowStanceVisibility;                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OG_Head_Materials;                                        // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UMaterial*, class UMaterialInterface*>  DissolveMaterialMap;                                      // 0x0478(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              Duplicate_Meshes;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Body_Materials;                                        // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Hat_Materials;                                         // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Backpack_Materials;                                    // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Charm_Materials;                                       // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Face_Materials;                                        // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Dissolve_MIDs;                                            // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Duplicate_Head;                                           // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Body;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Hat;                                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Backpack;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Charm;                                          // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Face;                                           // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Duplicate_MIDs;                                           // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Weapon_MID;                                      // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C");
		return ptr;
	}


	void Restore_Material_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn, class AFortWeapon* Weapon_to_Restore__Defaults_to_Current_);
	void Override_Material_and_Copy_Parameters_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn);
	void Restore_OG_Materials(class AFortPlayerPawn* NInja_Pawn);
	void Destroy_Duplicate_Mesh();
	void Create_Duplicate_Mesh(class AFortPlayerPawn* NinjaPawn);
	void Override_Material_to_Dissolve_Material(class AFortPlayerPawn* NInja_Pawn);
	void Save_Material(class AFortPlayerPawn* NInja_Pawn);
	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void Shadow_Stance_Dissolve_Timeline(bool Reverse);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
