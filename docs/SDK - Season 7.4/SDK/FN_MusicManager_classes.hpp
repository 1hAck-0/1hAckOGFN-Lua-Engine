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

// BlueprintGeneratedClass MusicManager.MusicManager_C
// 0x00F8 (0x0488 - 0x0390)
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Boss_Music_B;                                             // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Boss_Weak_Point_Stinger;                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Boss_DBNO_Music;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Boss_Music_A;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Gameplay_Music_Fader_Volume;                              // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Gameplay_Music_Fader__Direction;                          // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Gameplay_Music_Fader;                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MusicFrontend;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  MusicLobby;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StingerReturningToAmbientMusic;                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FName                                       GameMode_Current;                                         // 0x03E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_Lobby;                                           // 0x03EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_Frontend;                                        // 0x03F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameMode_InGame;                                          // 0x03FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayStingerWhenReturningToAmbientMusic;                   // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingAmbientMusic;                                      // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingThreatMusic;                                       // 0x0406(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingNearbyEnemiesMusic;                                // 0x0407(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingHuskLowMusic;                                      // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingHuskHighMusic;                                     // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingLargeEnemyMusic;                                   // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x040B(0x0001) MISSED OFFSET
	float                                              LastTimeMusicWasStartedOrContinued;                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMusicIntensityLevel;                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              MusicLogicUpdateTickTime;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDurationBeforeMusicCanIncreaseIntensity;               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityIncreaseFadeTime;                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMusicFadeStyles>                      IntensityIncreaseFadeStyle;                               // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              MinDurationBeforeMusicCanDecreaseInIntensity;             // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityDecreaseFadeTime;                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMusicFadeStyles>                      IntensityDecreaseFadeStyle;                               // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicShouldStop;                                          // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingStingerMusic;                                      // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0433(0x0001) MISSED OFFSET
	float                                              IntensityVeryHigh;                                        // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityHigh;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityMedium;                                          // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntensityLow;                                             // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UFortMusicAsset*                             DeathMusic;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Countdown_Music_;                                         // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class UAudioComponent*                             Coundown_Atlas_Music;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UAudioComponent*                             Mission_Music;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Is_Boss_Fight;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UAudioComponent*                             Weak_Point_Music;                                         // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Current_Boss_Music;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MusicManager.MusicManager_C");
		return ptr;
	}


	void ResetMusicBools();
	void UserConstructionScript();
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void Stop_Boss_Music();
	void Play_Boss_Music(class USoundBase* Sound);
	void Start_Boss_DBNO_Music(class USoundBase* Sound);
	void Stop_Boss_DBNO_Music();
	void Player_Fighting_Boss_DBNO();
	void Start_Weak_Point_Music(class USoundBase* Sound);
	void Stop_Weakpoint_Music();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset* NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void Gather_Combat_Graph_Tresholds();
	void OnMusicBankChanged(class UFortMusicManagerBank* NewBank);
	void OnPlayerDowned(struct FFortPlayerDeathReport DeathReport);
	void Play_Countdown_Music(float Counter);
	void Play_Mission_Music(class USoundBase* Sound);
	void Stop_Mission_Music(class UAudioComponent* Mission_Music);
	void ExecuteUbergraph_MusicManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
