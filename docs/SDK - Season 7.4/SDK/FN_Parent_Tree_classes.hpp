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

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x017C (0x0DAC - 0x0C30)
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            LeafPlacement;                                            // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Wind_Direction;                                           // 0x0C40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EmitLeaves_;                                              // 0x0C4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode_;                                               // 0x0C4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugStorms_;                                             // 0x0C4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_LeafTypes>                          LeafTypes;                                                // 0x0C4F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LeafEmitterNamesSpherical;                                // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LeafEmitterNamesCylindrical;                              // 0x0C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            LeafEmitterComponents;                                    // 0x0C70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     EmitterSize;                                              // 0x0C80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_Idle_;                                           // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime_Storm_;                                          // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate_Idle_;                                          // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRate_Storm_;                                         // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindIntensity_Idle_;                                      // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindIntensity_Storm_;                                     // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CA4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MediumLeafMaterialMasked;                                 // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SmallLeafMaterialMasked;                                  // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LargeLeafMaterialMasked;                                  // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PineLeafMaterialMasked;                                   // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LeafEmitterSetup;                                         // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              EmitterMaxDrawDistance;                                   // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxEmitterCount;                                          // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentEmitterCount;                                      // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StormActive_;                                             // 0x0CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CDD(0x0003) MISSED OFFSET
	class UMaterialInterface*                          MediumLeafMaterialTranslucent;                            // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SmallLeafMaterialTranslucent;                             // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DistanceFieldsEnabled_;                                   // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0CF1(0x0007) MISSED OFFSET
	class UMaterialInterface*                          LargeLeafMaterialTranslucent;                             // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          PineLeafMaterialTranslucent;                              // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Leaf_Emitter_Setup_Template;                              // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Leaf_Material_Setup;                                      // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWindImpulseHandle                      WindHandle;                                               // 0x0D18(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugWind;                                                // 0x0D1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D1D(0x0003) MISSED OFFSET
	float                                              Debug_Wind_Intensity;                                     // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0D24(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0D34(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpawnWindFX_;                                             // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0D41(0x000F) MISSED OFFSET
	struct FTransform                                  WindFX_Transform;                                         // 0x0D50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WindFX_MaxDrawDistance;                                   // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0D84(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    WindFX;                                                   // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpawnFX;                                                  // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0D91(0x0003) MISSED OFFSET
	float                                              LeafRadius;                                               // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeafCenter_Offset;                                        // 0x0D98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCylinder;                                              // 0x0DA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0DA5(0x0003) MISSED OFFSET
	float                                              NewVar_1;                                                 // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_Tree.Parent_Tree_C");
		return ptr;
	}


	void RemoveTestWind(float BlendTime);
	void FX_UpdateEmitterParameters();
	void FX_UpdateEmitterStates();
	void UserConstructionScript();
	void ReceiveDestroyed();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ExecuteUbergraph_Parent_Tree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
