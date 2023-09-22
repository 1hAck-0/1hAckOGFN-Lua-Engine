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

// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
// 0x00A8 (0x2918 - 0x2870)
class ABP_ReplayPC_Athena_C : public AFortReplaySpectatorAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<float, class USoundMix*>                      PlaybackRateMap;                                          // 0x2878(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentPlayRate;                                          // 0x28C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFast;                                                  // 0x28CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x28CD(0x0003) MISSED OFFSET
	class UAudioComponent*                             SpeedupLoop;                                              // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SlowdownLoop;                                             // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsHudVisible;                                            // 0x28E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x28E1(0x0007) MISSED OFFSET
	class UAudioComponent*                             ZoomOutLoop;                                              // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoomInLoop;                                               // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsSkydivingAudioEnabled;                                 // 0x28F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetParachuting;                                     // 0x28F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetSkydiving;                                       // 0x28FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x28FB(0x0005) MISSED OFFSET
	class UAudioComponent*                             SkydivingAudioLoop;                                       // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsPaused;                                                // 0x2908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2909(0x0007) MISSED OFFSET
	class USoundBase*                                  CurrentSkydivingSound;                                    // 0x2910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C");
		return ptr;
	}


	void IsGameplayCamera(bool* IsGameplayCamera);
	void SetSkydivingAudioEnabled(bool Enabled);
	class USoundBase* GetSkydivingSound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnNotifyNewPlaybackMultiplier(float NewMultiplier);
	void _Speedup_Loops(float Playback_Multiplier);
	void OnReplayHudVisibilityChanged(EHudVisibilityState IsVisible);
	void OnZoomOutEnd();
	void OnZoomOutBegin();
	void OnZoomInEnd();
	void OnZoomInBegin();
	void On_Pause_State_Changed(bool bPaused);
	void Handle_Parachute_Audio_State();
	void Looping_Audio_Update();
	void ExecuteUbergraph_BP_ReplayPC_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
