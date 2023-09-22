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

// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// 0x00C3 (0x03F3 - 0x0330)
class A_WaterMeshBlueprintMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CollisionMesh1;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh2;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh4;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh3;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Number_of_Collision_Meshes;                               // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UParticleSystem*                             EnterExitWaterSplash_Ripple_Texture_Particle;             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EnterExitWaterSplash_Visual_Particle;                     // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlipFlow;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NoFlow;                                                   // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          FlippedMaterial;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Internal_volume_penetration_Counter;                      // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerPawn_Generic_Parent_C*>        PlayerGenericArray;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            WaterRingArray;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Characters_Personal_Water_Counter;                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<struct FListOfWaterComponentsThatTheCharactersInteractingWithByIndex> ArrayOfCollisionComponentsPerActor;                       // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Water_Interactions;                                       // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Entering_True_Exiting_False;                              // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x03D2(0x0006) MISSED OFFSET
	class APlayerPawn_Generic_Parent_C*                ExternalActor;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Internal_Mesh;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Continue;                                                 // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	float                                              Minimum_time_between_splashes;                            // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowTestMesh;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasExecutedConstuctionScript;                             // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Deep_Water_Asset_;                                     // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C");
		return ptr;
	}


	void Construction();
	void Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume);
	void Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit);
	void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int Target_Int);
	void UserConstructionScript();
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Construct();
	void ReceiveBeginPlay();
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
