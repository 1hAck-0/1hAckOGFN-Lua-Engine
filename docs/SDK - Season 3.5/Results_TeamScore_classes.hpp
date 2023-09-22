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

// 0xA0 (0x2B8 - 0x218)
// WidgetBlueprintGeneratedClass Results_TeamScore.Results_TeamScore_C
class UResults_TeamScore_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ContinueButtonOutro;                          // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ContinueButtonIntro;                          // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonContinue;                                    // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*               RowBuilding;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*               RowCombat;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*               RowMission;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*               RowUtility;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        TimeBetweenRowIntros;                              // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenRowCounts;                              // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Finished;                                          // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TimeBetweenIntroAndTeamScore;                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenTeamScoreAndTotalScore;                 // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenTotalScoreAndContinue;                  // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenSkipAndContinue;                        // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSkippedToEnd;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSkippingToEnd;                                    // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CB4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*             TeamTotalScore;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBetweenRowAbsorptionStops;                     // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanSkipToEnd;                                     // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Start;                                             // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CenterMeetGrfx;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CenterFillFX;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            FillEnd;                                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeamScore_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void InitializeDelays(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue1234, float CallFunc_Divide_FloatFloat_ReturnValue12345);
	void SkipToFinalState();
	void Initialize(class UFortUIScoreReport* ScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Intro_Sequence();
	void Count_Total_Score_Sequence();
	void Count_Team_Scores_Sequence();
	void BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature();
	void Skip_To_End__Sequence();
	void On_Count_Score_Finished();
	void BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature();
	void Skip();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_Results_TeamScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue1234, bool CallFunc_BooleanOR_ReturnValue12345, bool CallFunc_BooleanOR_ReturnValue123456, bool CallFunc_BooleanOR_ReturnValue1234567, bool CallFunc_BooleanOR_ReturnValue12345678, bool CallFunc_BooleanOR_ReturnValue123456789, bool CallFunc_BooleanOR_ReturnValue12345678910, bool CallFunc_BooleanOR_ReturnValue1234567891011, bool CallFunc_BooleanOR_ReturnValue123456789101112, bool CallFunc_BooleanOR_ReturnValue12345678910111213, bool CallFunc_BooleanOR_ReturnValue1234567891011121314, bool CallFunc_BooleanOR_ReturnValue123456789101112131415, bool CallFunc_BooleanOR_ReturnValue12345678910111213141516, bool CallFunc_BooleanOR_ReturnValue1234567891011121314151617, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Finished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
