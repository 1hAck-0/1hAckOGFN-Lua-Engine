#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Results_TeamScore.Results_TeamScore_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Focus");

	Params::UResults_TeamScore_C_Focus_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.InitializeDelays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1234                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue12345                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::InitializeDelays(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue1234, float CallFunc_Divide_FloatFloat_ReturnValue12345)
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "InitializeDelays");

	Params::UResults_TeamScore_C_InitializeDelays_Params Parms;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue12 = CallFunc_Divide_FloatFloat_ReturnValue12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue123 = CallFunc_Divide_FloatFloat_ReturnValue123;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1234 = CallFunc_Divide_FloatFloat_ReturnValue1234;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue12345 = CallFunc_Divide_FloatFloat_ReturnValue12345;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "SkipToFinalState");

	Params::UResults_TeamScore_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_TeamTotalScore_C*   TeamTotalScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UResults_TeamScore_C::Initialize(class UFortUIScoreReport* ScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Initialize");

	Params::UResults_TeamScore_C_Initialize_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.TeamTotalScore = TeamTotalScore;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Intro Sequence");

	Params::UResults_TeamScore_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Count Total Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Count_Total_Score_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Count Total Score Sequence");

	Params::UResults_TeamScore_C_Count_Total_Score_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Count Team Scores Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Count_Team_Scores_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Count Team Scores Sequence");

	Params::UResults_TeamScore_C_Count_Team_Scores_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Skip To End  Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Skip_To_End__Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Skip To End  Sequence");

	Params::UResults_TeamScore_C_Skip_To_End__Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.On Count Score Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::On_Count_Score_Finished()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "On Count Score Finished");

	Params::UResults_TeamScore_C_On_Count_Score_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Skip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Skip()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Skip");

	Params::UResults_TeamScore_C_Skip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeamScore_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.ExecuteUbergraph_Results_TeamScore
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234567                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456789                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678910                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234567891011                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456789101112                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678910111213                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234567891011121314                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456789101112131415              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12345678910111213141516            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234567891011121314151617          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScore_C::ExecuteUbergraph_Results_TeamScore(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue1234, bool CallFunc_BooleanOR_ReturnValue12345, bool CallFunc_BooleanOR_ReturnValue123456, bool CallFunc_BooleanOR_ReturnValue1234567, bool CallFunc_BooleanOR_ReturnValue12345678, bool CallFunc_BooleanOR_ReturnValue123456789, bool CallFunc_BooleanOR_ReturnValue12345678910, bool CallFunc_BooleanOR_ReturnValue1234567891011, bool CallFunc_BooleanOR_ReturnValue123456789101112, bool CallFunc_BooleanOR_ReturnValue12345678910111213, bool CallFunc_BooleanOR_ReturnValue1234567891011121314, bool CallFunc_BooleanOR_ReturnValue123456789101112131415, bool CallFunc_BooleanOR_ReturnValue12345678910111213141516, bool CallFunc_BooleanOR_ReturnValue1234567891011121314151617, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "ExecuteUbergraph_Results_TeamScore");

	Params::UResults_TeamScore_C_ExecuteUbergraph_Results_TeamScore_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.CallFunc_BooleanOR_ReturnValue1234 = CallFunc_BooleanOR_ReturnValue1234;
	Parms.CallFunc_BooleanOR_ReturnValue12345 = CallFunc_BooleanOR_ReturnValue12345;
	Parms.CallFunc_BooleanOR_ReturnValue123456 = CallFunc_BooleanOR_ReturnValue123456;
	Parms.CallFunc_BooleanOR_ReturnValue1234567 = CallFunc_BooleanOR_ReturnValue1234567;
	Parms.CallFunc_BooleanOR_ReturnValue12345678 = CallFunc_BooleanOR_ReturnValue12345678;
	Parms.CallFunc_BooleanOR_ReturnValue123456789 = CallFunc_BooleanOR_ReturnValue123456789;
	Parms.CallFunc_BooleanOR_ReturnValue12345678910 = CallFunc_BooleanOR_ReturnValue12345678910;
	Parms.CallFunc_BooleanOR_ReturnValue1234567891011 = CallFunc_BooleanOR_ReturnValue1234567891011;
	Parms.CallFunc_BooleanOR_ReturnValue123456789101112 = CallFunc_BooleanOR_ReturnValue123456789101112;
	Parms.CallFunc_BooleanOR_ReturnValue12345678910111213 = CallFunc_BooleanOR_ReturnValue12345678910111213;
	Parms.CallFunc_BooleanOR_ReturnValue1234567891011121314 = CallFunc_BooleanOR_ReturnValue1234567891011121314;
	Parms.CallFunc_BooleanOR_ReturnValue123456789101112131415 = CallFunc_BooleanOR_ReturnValue123456789101112131415;
	Parms.CallFunc_BooleanOR_ReturnValue12345678910111213141516 = CallFunc_BooleanOR_ReturnValue12345678910111213141516;
	Parms.CallFunc_BooleanOR_ReturnValue1234567891011121314151617 = CallFunc_BooleanOR_ReturnValue1234567891011121314151617;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Results_TeamScore.Results_TeamScore_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScore_C::Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScore_C", "Finished__DelegateSignature");

	Params::UResults_TeamScore_C_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
