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

// 0x1E8 (0x8F8 - 0x710)
// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
class AB_Rift_Portals_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x710(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Wind_Vector_Explosion;                             // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WindVectorVortex;                                  // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Storm_Small_Vortex_Cue;                            // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_RandomLightning_01;                         // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RiftVortex;                                        // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 FortMiniMap;                                       // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_Active;                                     // 0x748(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio1;                                            // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x760(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9; // 0x764(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1150[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleLightOnOff;                                   // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D;  // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D; // 0x774(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1151[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BoostLight;                                        // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnCloud;                                        // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SwipeMaterial;                                     // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Plasma_Particles;                                  // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Lightning_Strike_Particles;                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Decal_Material;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactLocation;                                    // 0x7A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1152[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecalComponent*                       Decal;                                             // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVectorFieldComponent*                 Impact_Vector_Field;                               // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                Wind_Impulse;                                      // 0x7C8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Wind_Impulse_Default_Strength;                     // 0x7CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Wind_location;                                     // 0x7D0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wind_Radius;                                       // 0x7DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Overlapping_Actors;                                // 0x7E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACar_Copper_C*>                 ArrayOfNearbyCars;                                 // 0x7F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                          Light_Color_Idle;                                  // 0x800(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Light_Color_Active;                                // 0x810(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Intensity_Idle;                              // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Intensity_Active;                            // 0x824(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Radius_Idle;                                 // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Radius_Active;                               // 0x82C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ParticlesBaseMID;                                  // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LightEnabled;                                      // 0x838(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1153[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Light_Fade_In_Time;                                // 0x83C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Light_Fade_Out_Time;                               // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SpawnImpactParticles;                              // 0x844(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1154[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualDeactivateDelayBeforeDestory;                // 0x848(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftLightningDuration;                             // 0x84C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSize;                                        // 0x850(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSizeMin;                                     // 0x85C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VortexSizeMax;                                     // 0x868(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount_Min;                                  // 0x874(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount_Max;                                  // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength_Min;                               // 0x87C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength_Max;                               // 0x880(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1155[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RiftVortexMID;                                     // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Twist_Amount;                                      // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Strength;                                   // 0x894(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WPO_Strength;                                      // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Model_Height;                                      // 0x89C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             UV_Tile_Multiplier_Min;                            // 0x8A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             UV_Tile_Multiplier_Max;                            // 0x8A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Frequency_Min;                              // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wiggle_Frequency_Max;                              // 0x8B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Wiggle_Speed_Min;                                  // 0x8B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Wiggle_Speed_Max;                                  // 0x8C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lightning_Spawn_Loc;                               // 0x8C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lightning_Bloat;                                   // 0x8D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftVortexFadeInTime;                              // 0x8D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RiftVortexFadeOutTime;                             // 0x8DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Water_Scene_Capture_Activated;                     // 0x8E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Wind_Vortex_MID;                                   // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Explosion_Wind_Vector_Mesh_MID;                    // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Rift_Portals_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, float CallFunc_RandomFloatInRange_ReturnValue123, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1234, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X12, float CallFunc_BreakVector2D_Y12, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_RandomFloatInRange_ReturnValue12345, float CallFunc_BreakVector2D_X123, float CallFunc_BreakVector2D_Y123, float CallFunc_BreakVector2D_X1234, float CallFunc_BreakVector2D_Y1234, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue123456, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1234567, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, float CallFunc_BreakVector2D_X12345, float CallFunc_BreakVector2D_Y12345, float CallFunc_BreakVector_X123, float CallFunc_BreakVector_Y123, float CallFunc_BreakVector_Z123, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, float CallFunc_RandomFloatInRange_ReturnValue123456789, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue);
	void BoostLight__FinishedFunc();
	void BoostLight__UpdateFunc();
	void ScaleLightOnOff__FinishedFunc();
	void ScaleLightOnOff__UpdateFunc();
	void OnPlaced();
	void OnRemoved();
	void OnSpawnAI();
	void Lightning_Impact_Event();
	void OnActivated();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void FadeLightIn();
	void FadeLightOut();
	void ManuallyActivateRift();
	void ManuallyDeactivateRift();
	void PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles);
	void OnDeactivated();
	void ResetGate();
	void ExecuteUbergraph_B_Rift_Portals(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue12, float CallFunc_RandomFloatInRange_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float K2Node_CustomEvent_Delay, float K2Node_CustomEvent_RiftLightningDuration, bool K2Node_CustomEvent_SpawnImpactParticles, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue123, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1234, float CallFunc_GetGameTimeInSeconds_ReturnValue12345, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class ACar_Copper_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable1, class AActor* CallFunc_Array_Get_Item1, float K2Node_Select_Default, class ACar_Copper_C* K2Node_DynamicCast_AsCar_Copper, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class AWindManager_C* K2Node_DynamicCast_AsWind_Manager, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
