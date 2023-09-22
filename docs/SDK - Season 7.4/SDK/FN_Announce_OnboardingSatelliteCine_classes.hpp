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

// BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C
// 0x0028 (0x03C8 - 0x03A0)
class AAnnounce_OnboardingSatelliteCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaSource*                                SatelliteMediaSource;                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipping;                                            // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortUIState                                       StartingState;                                            // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03BA(0x0006) MISSED OFFSET
	class UFortMediaSubtitlesPlayer*                   SatelliteSubtitlesPlayer;                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_OnboardingSatelliteCine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
