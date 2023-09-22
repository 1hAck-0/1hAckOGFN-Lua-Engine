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

// BlueprintGeneratedClass ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C
// 0x00E0 (0x0E20 - 0x0D40)
class AParentBuildingContainerBlueprint_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DebugWind;                                                // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Max_Actor_Scale;                                      // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D89(0x0003) MISSED OFFSET
	float                                              Max_Scale;                                                // 0x0D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_TOD_Lights_and_Material_Emissive_Values;          // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active;// 0x0D91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_;       // 0x0D92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0D93(0x0005) MISSED OFFSET
	class UStaticMesh*                                 AlternateShadowStaticMesh;                                // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Emissive_and_Lights_Over_Time;                    // 0x0DA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0DA1(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor;                             // 0x0DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CodeControlled_LightConeOpacity;                          // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day_;                        // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Day_Phase_Transition_Length;                              // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day;                      // 0x0DDC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volumetric_Light_Scattering_Intensity;                    // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Volumetric_Shadows;                                  // 0x0DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls;// 0x0DF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls;// 0x0DF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0DF3(0x0005) MISSED OFFSET
	class UCurveFloat*                                 LightAnimationCurve;                                      // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_Animation_Curve_Animation_Length;          // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CodeControlled_NumberOfMaterials;                         // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      NewVar_1;                                                 // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Random_Time_Scale_Percent;                                // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_CurrentPlayLength;                         // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C");
		return ptr;
	}


	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void OnSetSearched();
	void Loop_Animation_Curve();
	void OnBounceAnimationUpdate(struct FFortBounceData Data);
	void ExecuteUbergraph_ParentBuildingContainerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
