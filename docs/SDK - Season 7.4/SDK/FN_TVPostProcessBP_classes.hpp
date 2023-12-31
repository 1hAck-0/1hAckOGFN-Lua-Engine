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

// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// 0x017A (0x04AA - 0x0330)
class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       FullScreenTVPP_StoreFF;                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       FullScreenTVPP_OnlyMaterialModified;                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       FullScreenTVPP;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2;// 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2;// 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2;// 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2;// 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FrontEndCameraSwitchFade;                                 // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Jitter_Timeline_use_solid_color;                          // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Jitter_Timeline_LerpImageAndScreen;                       // 0x0374(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Jitter_Timeline_Noise_Distortion_Amount;                  // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Jitter_Timeline_Screen_Modulation;                        // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Jitter_Timeline__Direction;                               // 0x0380(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Jitter_Timeline;                                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation;// 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation;// 0x0394(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha;    // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Vpos;                // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Hpos;                // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount;// 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount;  // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Modulation;   // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Camera_StartTheMonitor_Text_Timeline__Direction;          // 0x03B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Camera_StartTheMonitor_Text_Timeline;                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07;     // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07;          // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07;// 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07;// 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07;      // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03;// 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03;// 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03;// 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03;// 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03;// 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_between_cameras;                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Switch_to_static_use_solid_color;                         // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_static_ShowScreenStatic;                        // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_static_Noise_Distortion_Amount;                 // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_static_Screen_Modulation;                       // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_to_static__Direction;                              // 0x0410(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_to_static;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E;// 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E;// 0x0424(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E;// 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E;// 0x0430(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Switch_to_live;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Show_the_troll_HideTroll;                                 // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Show_the_troll_use_solid_color;                           // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Show_the_troll_Noise_Distortion_Amount;                   // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Show_the_troll__Direction;                                // 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Show_the_troll;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartScreen_Replacement_randomization;                    // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_ReplacementAlpha;                             // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_Vpos;                                         // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_Hpos;                                         // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_Noise_Distortion_Amount;                      // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_Screen_Bend_Amount;                           // 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartScreen_Screen_Modulation;                            // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StartScreen__Direction;                                   // 0x0474(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StartScreen;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               GrabNewColorBool;                                         // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               increase_distortion_;                                     // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              AdditionalDistortionAmount;                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Show_troll;                                               // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	int                                                Troll_counter;                                            // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Camera_hasnt_switched_to_live_yet;                        // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0492(0x0002) MISSED OFFSET
	float                                              FluctuatingDisplaySceneValue;                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ideal_Display_scene_min_value;                            // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ideal_display_scene_max_value;                            // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipDos;                                                  // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableOnStartup;                                         // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FrontEndCameraSwitch_InProgress;                          // 0x04A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x04A3(0x0001) MISSED OFFSET
	float                                              PreviousSceneModulation;                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FFInProgress;                                             // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RestartFrontEndCameraSwitch_;                             // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C");
		return ptr;
	}


	void RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha);
	void UserConstructionScript();
	void Show_the_troll__FinishedFunc();
	void Show_the_troll__UpdateFunc();
	void Switch_between_cameras__FinishedFunc();
	void Switch_between_cameras__UpdateFunc();
	void Switch_between_cameras__Switch_Camera_Position__EventFunc();
	void Switch_to_live__FinishedFunc();
	void Switch_to_live__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void Switch_to_static__FinishedFunc();
	void Switch_to_static__UpdateFunc();
	void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();
	void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();
	void Jitter_Timeline__FinishedFunc();
	void Jitter_Timeline__UpdateFunc();
	void Jitter_Timeline__Switch_Camera_Position__EventFunc();
	void FrontEndCameraSwitchFade__FinishedFunc();
	void FrontEndCameraSwitchFade__UpdateFunc();
	void StartScreen__FinishedFunc();
	void StartScreen__UpdateFunc();
	void Camera_TriggerTheTroll();
	void Camera_SwitchBetweenLocations();
	void Camera_TransitionToLiveStatic();
	void Camera_TurnOffThePostProcess();
	void Camera_TransitionToLiveVideo();
	void Camera_DebugEvents();
	void Camera_StartTheMonitor_Text();
	void Camera_DosTextFinished();
	void Camera_ReturningPlayerInitializeWithLiveVideo();
	void FrontEndCameraSwitch();
	void Camera_LoadAndWait();
	void Camera_Sequence_Start_StaticWhoomp();
	void WriteOutLoading();
	void SequenceFinished(struct FString SequenceName);
	void Camera_InitializePost();
	void Camera_DisableEffects();
	void ReceiveTick(float DeltaSeconds);
	void FastForwardPostProcess();
	void JitterTheScreen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TVPostProcessBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
