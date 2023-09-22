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

// BlueprintGeneratedClass GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C
// 0x00F0 (0x0518 - 0x0428)
class AGCNL_OutOfStWStorm_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_StormAura;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x043C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightningTimeline_LERP;                                   // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightningTimeline__Direction;                             // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightningTimeline;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             StormPawn;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    EmitterTemplate_FallingRain;                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    EmitterTemplate_WindDebris;                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     LightningSpawnLocation;                                   // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfLightningMesh;                                    // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        RandomLightningLight;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LightningIntensityMin;                                    // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMax;                                    // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMin;                            // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMax;                            // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTimelineComponent*                          LightningFlashTL;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LightningIntensity;                                       // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                RainCameraLensParticles;                                  // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMin;                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMax;                             // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SafeZonePassThroughSound;                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             StormAudioLoop_Inst;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTimelineComponent*                          Storm_Audio_Fader;                                        // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              StormAudioVolume;                                         // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomLightning;                                         // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	class USoundBase*                                  ShieldBoundaryLoopSound;                                  // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ShieldBoundaryAudio;                                      // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HoldingAudio;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HoldingTickAudio;                                         // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             NewVar_1;                                                 // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                On_Storm_Audio_Timer_Handle;                              // 0x0500(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Play_Damage_Sound;                                        // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SafeZone_Storm_Loop;                                      // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C");
		return ptr;
	}


	void Play_Audio_Based_on_Storm_Distance();
	void SetCameraEffects();
	void GetLocationInCircleXY(struct FVector* LocationLocalSpace);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void LightningTimeline__FinishedFunc();
	void LightningTimeline__UpdateFunc();
	void Timeline();
	void K2_OnReset();
	void OnActivated(class AFortPlayerPawn* InStormPawn, int EffectCount);
	void StartRandomLighningStrikes();
	void Play_Lightning_Flash_Audio(struct FVector Location);
	void OnRemoved();
	void RandomLightningFlashesRepeat();
	void On_Storm_Audio();
	void Add_Storm_Audio();
	void Remove_Storm_Audio();
	void Start_Storm_Audio_Fader();
	void ZapFX(int ZapCount);
	void Bind_On_Storm_Audio();
	void ExecuteUbergraph_GCNL_OutOfStWStorm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
