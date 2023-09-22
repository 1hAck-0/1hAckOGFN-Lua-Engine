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

// BlueprintGeneratedClass WindManager.WindManager_C
// 0x0118 (0x0688 - 0x0570)
class AWindManager_C : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    WaterInteractionParticle;                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        EmptyStaticMesh;                                          // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    TopDownCaptureActorOfTheWorld;                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D01;                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SmallerRenderTargetOrthoWidth;                            // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              External_Test_Actor;                                      // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortStaticMeshActor*>                World_Terrain_Meshes;                                     // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     Camera_Height_Offset;                                     // 0x05C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Particle_Z_Offset;                                        // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Water_Interaction_Enabled_Variable_Been_Set;          // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Water_Interaction_Enabled;                             // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05DA(0x0006) MISSED OFFSET
	TArray<struct FStaticMeshMaterialArrayCombo>       WorldStaticMeshArray;                                     // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FArrayOfWaterMeshWaterBlueprintPairs        Array_Of_Water_Assets;                                    // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         PrototypicalStaticMeshes;                                 // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Water_Mesh_Index;                                 // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	TArray<struct FFlowMapMaterials>                   WaterVectorMatToDefaultMaterialPairing;                   // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MaterialPairingFound;                                     // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	struct FLinearColor                                WorldBoundsMinMax;                                        // 0x062C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Black_Scene_Capture_Material;                             // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBox                                        Max_level_bounds___used_to_isolate_the_level_from_the_vista;// 0x0648(0x001C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                StormCylinderMeshes;                                      // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Storm_Cyl_Mesh_Match;                                     // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0679(0x0003) MISSED OFFSET
	int                                                Wind_Cyl_Mesh_Array_Match_Index;                          // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta_Wind_Falloff_in_World_Units;                        // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWindImpulseHandle                      NewVar_2;                                                 // 0x0684(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindManager.WindManager_C");
		return ptr;
	}


	void Find_Matching_Wind_Mesh_Index_And_Write_Bool(struct FVector Wind_location, bool* Storm_Cyl_Mesh_Match, int* Wind_Cyl_Mesh_Array_Match_Index);
	void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, struct FVector AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, struct FVector CylinderCenter, bool Set_WindVector, struct FVector WindVector, bool Set_WindCrossVector, struct FVector WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam);
	void UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_);
	void RemoveWindCylinder(struct FFortWindImpulseCylinder WindImpulseCylinder);
	void UpdateStormWindCylinder(struct FFortWindImpulseCylinder Wind_Impulse, struct FFortWindImpulseCylinderDelta Wind_Delta);
	struct FVector Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture);
	void SetRenderOnlyAssets(class UPrimitiveComponent* InComponent);
	void InitializeOrthoSettings();
	void UserConstructionScript();
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform InTransform);
	void OnWorldReady();
	void ReceiveTick(float DeltaSeconds);
	void Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects);
	void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder WindImpulseCylinder, struct FFortWindImpulseCylinderDelta WindImpulseCylinderDelta);
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder WindImpulseCylinder);
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder WindImpulseCylinder);
	void SpawnTestWind(float Radius, float ImpulseMagnitude);
	void Play_Water_Splash_Particle_System_At_Location(struct FTransform Particle_Transform);
	void Add_Wind_Component(class UPrimitiveComponent* InComponent);
	void ReceiveBeginPlay();
	void Update_Test(float NewMagnitude);
	void ExecuteUbergraph_WindManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
