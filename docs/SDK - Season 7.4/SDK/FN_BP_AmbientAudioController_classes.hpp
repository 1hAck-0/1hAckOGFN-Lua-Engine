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

// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// 0x0040 (0x01D0 - 0x0190)
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientMixA;                                              // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientMixB;                                              // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Loop_Indoors;                                             // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheckFrequency;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsidePrevious;                                        // 0x01B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsideCurrent;                                         // 0x01B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01B6(0x0002) MISSED OFFSET
	class UAudioComponent*                             AmbientMixIndoor;                                         // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetLPFFreq;                                            // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLPFFreq;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InsideLPFFreq;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutsideLPFFreq;                                           // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C");
		return ptr;
	}


	void SetTargetLPFFreq(float Target);
	void SetIndoorMixEnabled(bool Enabled);
	bool Trace(struct FVector Start, struct FVector Direction);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void ReceiveTick(float DeltaSeconds);
	void On_Game_Phase_Change(EAthenaGamePhase GamePhase);
	void On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep);
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void ExecuteUbergraph_BP_AmbientAudioController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
