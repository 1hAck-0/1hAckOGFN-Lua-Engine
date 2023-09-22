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

// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// 0x0154 (0x0484 - 0x0330)
class ADuplicateResOutMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_FirstPassComplete;               // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_LightIntensity;                  // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_zHieght;                         // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CharacterSpawnInTimeline__Direction;                      // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CharacterSpawnInTimeline;                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Duplicate;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Gun_True;                                                 // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              BoundsRadius;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     World_location_for_the_dissolve_location;                 // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Space;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Leg_Space;                                                // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        Spawn_Light;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              light_intensity;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Base_skeletal_mesh_materials;                   // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstPassComplete;                                        // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              ExternalSkeletalMeshComponent;                            // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FTransform                                  Box_Local_Transform;                                      // 0x03D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Timeline_Play_Length;                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportOut_;                                             // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class AActor*                                      ExternalActor;                                            // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              InternalSkeletalMeshComponents;                           // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentMeshMidIndex;                                      // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      External_Base_Mesh_Component;                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ExternalMidArray;                                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USkeletalMeshComponent*                      ExternalRootMeshComponent;                                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MaterialParentIsValid;                                    // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Original_MIDs;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Increment_End;                                            // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C");
		return ptr;
	}


	void RestoreInProgressRes();
	void Store_Original_Material_for_Teleport_In();
	void External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>* External_Mesh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array);
	void ProcessSpawnInTimeline(float ZHeight, float LightIntensity);
	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void Make_and_slave_internal_meshes();
	void Spawn__Light();
	void Find_Bounds();
	void initializeExternalSkeletalMeshArray();
	void UserConstructionScript();
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateExternalParameters(TArray<class UMaterialInstanceDynamic*> MID_Array, TArray<class USkeletalMeshComponent*> External_Mesh_Component_Array);
	void ExecuteUbergraph_DuplicateResOutMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
