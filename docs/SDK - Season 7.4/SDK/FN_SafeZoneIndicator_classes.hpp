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

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x0070 (0x05D8 - 0x0568)
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Pre_Damage_Audio_Ramp_Intensity;                          // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pre_Damage_Audio_Ramp__Direction;                         // 0x0574(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pre_Damage_Audio_Ramp;                                    // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StormFadeTimeline_StormFadeIn;                            // 0x0580(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormFadeTimeline__Direction;                             // 0x0584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormFadeTimeline;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShieldBoundaryLoopSound;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoldingLoopSound;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldingStartTime_1;                                       // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopTickSound;                                     // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SafeZoneMID;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                MegaStormDamageTimer;                                     // 0x05B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MegastormAudioDuration;                                   // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x05C4(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C");
		return ptr;
	}


	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS);
	void HandleInsideOutsideMix();
	void InitClosestPointAudio();
	void UserConstructionScript();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void OnSafeZoneStateChange(EFortSafeZoneState NewState, bool bInitial);
	void ResetSafeZoneScale();
	void stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void ReceiveBeginPlay();
	void Megastorm_Pre_Damage_Tell();
	void Start_Megastorm_Audio();
	void ExecuteUbergraph_SafeZoneIndicator(int EntryPoint);
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(EFortSafeZoneState SafeZoneState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
