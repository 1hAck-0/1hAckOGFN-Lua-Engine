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

// BlueprintGeneratedClass GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C
// 0x00AC (0x092C - 0x0880)
class AGC_DUDEBRO_Sweep_Beam_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Overtime_Rotation_C2546A014A6E4934A879D6A9C86EBA9E;       // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Overtime__Direction_C2546A014A6E4934A879D6A9C86EBA9E;     // 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OverTime;                                                 // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SweepBeam;                                              // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Beam_Audio;                                               // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortAIPawn*                                 LocalPawn;                                                // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LastTransform;                                            // 0x08B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  StartTransform;                                           // 0x08E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SweepBeamImpact;                                        // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C");
		return ptr;
	}


	void UserConstructionScript();
	void Overtime__FinishedFunc();
	void Overtime__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void Reset();
	void ExecuteUbergraph_GC_DUDEBRO_Sweep_Beam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
