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

// BlueprintGeneratedClass GC_Perk_Ninja_ShadowStance_Active.GC_Perk_Ninja_ShadowStance_Active_C
// 0x0160 (0x09E0 - 0x0880)
class AGC_Perk_Ninja_ShadowStance_Active_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_F50344084749F221FC44349955C0A4BA;// 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_F50344084749F221FC44349955C0A4BA;// 0x088C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate_Ninja_ShadowStance_Dissolve__Direction_F50344084749F221FC44349955C0A4BA;// 0x0890(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Animate_Ninja_ShadowStance_Dissolve;                      // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             MyTarget;                                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shadow_Stance_Material;                                   // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Ninja_Dissolve_Material;                                  // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowStanceVisibility;                                   // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OG_Head_Materials;                                        // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UMaterial*, class UMaterialInterface*>  DissolveMaterialMap;                                      // 0x08D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              Duplicate_Meshes;                                         // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Body_Materials;                                        // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Hat_Materials;                                         // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Backpack_Materials;                                    // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Charm_Materials;                                       // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OG_Face_Materials;                                        // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Dissolve_MIDs;                                            // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Duplicate_Head;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Body;                                           // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Hat;                                            // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Backpack;                                       // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Charm;                                          // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Duplicate_Face;                                           // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Duplicate_MIDs;                                           // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Weapon_MID;                                      // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Perk_Ninja_ShadowStance_Active.GC_Perk_Ninja_ShadowStance_Active_C");
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
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_Perk_Ninja_ShadowStance_Active(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
