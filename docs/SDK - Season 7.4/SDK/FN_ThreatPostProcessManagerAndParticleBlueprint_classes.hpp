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

// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// 0x01B7 (0x04F7 - 0x0340)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             EnterTheStormSound;                                       // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Sprite1;                                                  // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Ramp_Up_down_values_on_death_NewTrack;                    // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Ramp_Up_down_values_on_death__Direction;                  // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Ramp_Up_down_values_on_death;                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Min_Cloud_Distance_from_player;                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Localized_Particle_System_MID;                            // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0378(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher
	unsigned char                                      UnknownData03[0x10];                                      // 0x0388(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0
	TArray<struct FVector>                             Array_of_Cloud_Positions;                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      SkyParticleCloudDistances;                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CloudDistanceToPlayerLookUpArray;                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     Target_Cloud_Position;                                    // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RecalculateTimer;                                         // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Alive;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAliveJustChanged;                                       // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlivePrevious;                                          // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x03DB(0x0001) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive;// 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentCloudMesh;                                         // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead;// 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APostProcessVolume*                          Materialpost;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              post_process_volume_falloff__around_the_threat_volume;    // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowRainEffect;                                           // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	TArray<class AActor*>                              FourClosestClouds;                                        // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                Number_Of_Volumes_to_check;                               // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessTargetWeight;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Post_Process_Weight;                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Post_Process_Fade_in_speed;                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SoundIsActive;                                            // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoundWasPreviouslyActive;                                 // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x041E(0x0002) MISSED OFFSET
	struct FTransform                                  PlayerTransform;                                          // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_On;                                                    // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class APostProcessVolume*                          MaterialEffectsPostProcess;                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Morning;                        // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Day;                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Evening;                        // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Night;                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBox>                                Array_of_Cloud_Volumes;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ClosestCloudIndex;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClosestCloudDistance;                                     // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessWeightModulation;                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ramp_Up_And_Down_Anim_Values;                             // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowRainOnCameraLens;                                     // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                Rain_Camera_Lens_Effect;                                  // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LocalizedParticleSystem;                                  // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsWorldReady;                                             // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              Rain_Trace_Timer;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainTraceOffset;                                          // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RainMultiplierCurrent;                                    // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rain_Spawn_Rate_Exponent;                                 // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TracePrevious;                                            // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAthenaWorld;                                            // 0x04F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThreatOverride;                                          // 0x04F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C");
		return ptr;
	}


	void CalculatePlayerPositionNearBox(struct FVector BoxMin, struct FVector BoxMax, float* VolumePlayerCoveragePercentage);
	void UserConstructionScript();
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo> ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void OnThreatOverrideChanged(bool bForceThreatOn);
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int EntryPoint);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
