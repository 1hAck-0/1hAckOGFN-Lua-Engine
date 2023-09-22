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

// BlueprintGeneratedClass GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C
// 0x00BC (0x093C - 0x0880)
class AGCL_TNT_Fuse_Cook_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Fuse_Stage;                                               // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fuse_Stage02;                                             // 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fuse_Stage_2_Timeline;                                    // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fuse_Stage03;                                             // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fuse_Stage04;                                             // 0x089C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fuse_Stage_1_Timeline;                                    // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fuse_Movement_Material_Flash;                             // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Fuse_Movement_Lerp_Control;                               // 0x08AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fuse_Movement__Direction;                                 // 0x08B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Fuse_Movement;                                            // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FuseDuration;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseElapsedTime;                                          // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DeathFX;                                                  // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AB_TNT_Athena_C*                             TNTBundle;                                                // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Looping_Particle;                                         // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Looping_Audio;                                            // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              PSys_Opacity;                                             // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PSys_Color;                                               // 0x08EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Psys_Size;                                                // 0x08F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PSysSplineLoca;                                           // 0x0904(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PSysSplineRot;                                            // 0x0910(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class UAudioComponent*                             DeathAudio;                                               // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Fuse_Change__;                                            // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fuse_2nd_Stage_Duration;                                  // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Emissive_Color;                                           // 0x0930(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C");
		return ptr;
	}


	void WarningSetup(float Warning, float* Opacity, struct FVector* Color, struct FVector* Size);
	void Spline_Setup(float Alpha, struct FVector* Spline_Location);
	void UserConstructionScript();
	void Fuse_Movement__FinishedFunc();
	void Fuse_Movement__UpdateFunc();
	void Fuse_Stage_1_Timeline__FinishedFunc();
	void Fuse_Stage_1_Timeline__UpdateFunc();
	void Fuse_Stage_2_Timeline__FinishedFunc();
	void Fuse_Stage_2_Timeline__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Control_Stage_1_Fuse_Particles();
	void Control_Stage_2_Fuse_Particles();
	void ExecuteUbergraph_GCL_TNT_Fuse_Cook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
