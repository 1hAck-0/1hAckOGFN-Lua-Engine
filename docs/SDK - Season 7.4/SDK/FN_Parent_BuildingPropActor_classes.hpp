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

// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
// 0x00D0 (0x0D00 - 0x0C30)
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DebugWind;                                                // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day_;                        // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day;                      // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CodeControlled_NumberOfMaterials;                         // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor;                             // 0x0CA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CodeControlled_LightConeOpacity;                          // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Animate_Emissive_and_Lights_Over_Time;                    // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CC1(0x0003) MISSED OFFSET
	float                                              Day_Phase_Transition_Length;                              // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_TOD_Lights_and_Material_Emissive_Values;          // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active;// 0x0CC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0CCA(0x0006) MISSED OFFSET
	class UStaticMesh*                                 AlternateShadowStaticMesh;                                // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_;      // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0CD9(0x0003) MISSED OFFSET
	float                                              Volumetric_Light_Scattering_Intensity;                    // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Volumetric_Shadows;                                  // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls;// 0x0CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0CE2(0x0006) MISSED OFFSET
	class UCurveFloat*                                 LightAnimationCurve;                                      // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_Animation_Curve_Animation_Length;          // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls;// 0x0CF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0CF5(0x0003) MISSED OFFSET
	float                                              Random_Time_Scale_Percent;                                // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_CurrentTimeLength;                         // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C");
		return ptr;
	}


	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void Call_Animation_Curve_Again();
	void Add_to_TOD_Light_Array(class ULightComponent** NewItem);
	void Set__MID_Values_For_Lights();
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha);
	void UserConstructionScript();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void ReceiveBeginPlay();
	void OnBounceAnimationUpdate(struct FFortBounceData Data);
	void Loop_Animation_Curve();
	void ExecuteUbergraph_Parent_BuildingPropActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
