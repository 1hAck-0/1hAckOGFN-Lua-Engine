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

// BlueprintGeneratedClass GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C
// 0x0064 (0x08E4 - 0x0880)
class AGC_Athena_Storm_Bus_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Lightining_Flash_LERP;                                    // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Lightining_Flash__Direction;                              // 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Lightining_Flash;                                         // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LightningSpawnLocation;                                   // 0x0898(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	class AActor*                                      Bus_Actor;                                                // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              _ChanceOfLightningMesh;                                   // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashDiameter;                                   // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashHeight;                                     // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UPointLightComponent*                        RandomLightningLight;                                     // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LightningIntensityMin;                                    // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMax;                                    // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensity;                                       // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMin;                            // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMax;                            // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMin;                             // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMax;                             // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C");
		return ptr;
	}


	void Get_Location_in_Circle_XY(struct FVector* LocationLocalSpace);
	void UserConstructionScript();
	void Lightining_Flash__FinishedFunc();
	void Lightining_Flash__UpdateFunc();
	void StartRandomLightningFlashes();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void Play_Lightning_Flash_Audio(struct FVector Location);
	void ExecuteUbergraph_GC_Athena_Storm_Bus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
