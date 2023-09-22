#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x3FF - 0x378)
// BlueprintGeneratedClass MusicManager.MusicManager_C
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	float                                        Gameplay_Music_Fader_Volume_869161D741AED71C8F0239859977BB00; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Gameplay_Music_Fader__Direction_869161D741AED71C8F0239859977BB00; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Gameplay_Music_Fader;                              // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicFrontend;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicLobby;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerReturningToAmbientMusic;                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameMode_Current;                                  // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Lobby;                                    // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Frontend;                                 // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_InGame;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStingerWhenReturningToAmbientMusic;            // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingAmbientMusic;                               // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingThreatMusic;                                // 0x3D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingNearbyEnemiesMusic;                         // 0x3D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskLowMusic;                               // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskHighMusic;                              // 0x3D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingLargeEnemyMusic;                            // 0x3D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CD7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastTimeMusicWasStartedOrContinued;                // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentMusicIntensityLevel;                        // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MusicLogicUpdateTickTime;                          // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDurationBeforeMusicCanIncreaseIntensity;        // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityIncreaseFadeTime;                         // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityIncreaseFadeStyle;                        // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityDecreaseFadeTime;                         // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityDecreaseFadeStyle;                        // 0x3FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicShouldStop;                                   // 0x3FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingStingerMusic;                               // 0x3FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicManager_C");
		return Clss;
	}

	void ResetMusicBools();
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1);
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset* NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetEventHeatPercent_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue123, float CallFunc_GetGameTimeInSeconds_ReturnValue1234, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_GetGameTimeInSeconds_ReturnValue12345, bool CallFunc_Greater_FloatFloat_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue123, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue1, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue123456, float CallFunc_Subtract_FloatFloat_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue1234, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue12, int32 CallFunc_MakeLiteralInt_ReturnValue12, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue12, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue12, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue12, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678, float CallFunc_Subtract_FloatFloat_ReturnValue12345, float CallFunc_GetGameTimeInSeconds_ReturnValue123456789, bool CallFunc_Greater_FloatFloat_ReturnValue12345, float CallFunc_Subtract_FloatFloat_ReturnValue123456, bool CallFunc_Greater_FloatFloat_ReturnValue123456, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_EqualEqual_NameName_ReturnValue1234, bool CallFunc_EqualEqual_NameName_ReturnValue12345, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1234567, float CallFunc_GetEventHeatPercent_ReturnValue12, float CallFunc_GetEventHeatPercent_ReturnValue123, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678910, bool CallFunc_IsNearActiveEncounters_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1234, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue12345678, float CallFunc_GetEventHeatPercent_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011, float CallFunc_Subtract_FloatFloat_ReturnValue1234567, bool CallFunc_Greater_FloatFloat_ReturnValue123456789, bool CallFunc_NotEqual_IntInt_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue123, bool CallFunc_Greater_IntInt_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue12, int32 CallFunc_Conv_ByteToInt_ReturnValue123, int32 CallFunc_MakeLiteralInt_ReturnValue123, bool CallFunc_Greater_IntInt_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue123, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1234, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue123, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue123, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1234, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UFortMusicVoice* K2Node_CustomEvent_Voice, float CallFunc_GetEventHeatPercent_ReturnValue123456, float CallFunc_GetEventHeatPercent_ReturnValue1234567, float CallFunc_GetEventHeatPercent_ReturnValue12345678, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue1234, bool CallFunc_Less_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue12345678910, bool CallFunc_Greater_FloatFloat_ReturnValue1234567891011);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
