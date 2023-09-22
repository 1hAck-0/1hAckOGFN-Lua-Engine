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

// 0xE2 (0x362 - 0x280)
// WidgetBlueprintGeneratedClass Results_TeleportPad.Results_TeleportPad_C
class UResults_TeleportPad_C : public UFortResultsTeleportScreenWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ExitButtonIntro;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ExitTimeTick;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ExitEnabled;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonExit;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTimer;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayRoot;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayTimer;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          Pad1;                                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          Pad2;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          Pad3;                                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeleportPadPlayer_C*          Pad4;                                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TextExitTime;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UResults_TeleportPadPlayer_C*>  TeleportPadsOrdered;                               // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnMissionStatsClicked;                             // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnExitClicked;                                     // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                            ExitButtonIntro;                                   // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExitTimeFinished;                                 // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ExitingText;                                       // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  OnAddFriendClicked;                                // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnUpVoteClicked;                                   // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsSolo;                                           // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortCompletionResult             CompletionResult;                                  // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Results_TeleportPad_C");
		return Clss;
	}

	void Should_Hide_Exit_Timer(bool* bHideExitTimer, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Enable();
	void Disable();
	void Focus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad, bool CallFunc_IsValidPad_bIsValid, bool CallFunc_BooleanAND_ReturnValue);
	void Initialize(class UFortUIScoreReport* InScoreReport, enum class EFortCompletionResult CompletionResult, class UResults_TeleportPadPlayer_C* CurrentTeleportPad, int32 CurrentScoreReportIndex, class UFortUIScoreReport* ScoreReport, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, TArray<int32>& CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetPlayerCount_ReturnValue1, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item1, TArray<class UResults_TeleportPadPlayer_C*>& K2Node_MakeArray_Array, class AFortPlayerPawn* CallFunc_GetCurrentPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue);
	void Team_Score_Screen_Intro();
	void Team_Score_Screen_Outro();
	void Teleport_Pad_Screen_Intro();
	void BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_1_OnMissionStatsClicked__DelegateSignature();
	void BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_2_OnMissionStatsClicked__DelegateSignature();
	void BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_3_OnMissionStatsClicked__DelegateSignature();
	void BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_4_OnMissionStatsClicked__DelegateSignature();
	void ExitButtonShown();
	void BndEvt__Anim_ExitButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__Anim_ExitEnabled_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void OnExitTimerFinished();
	void OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds);
	void OnExitTimePercentagePassedUpdated(float Percent);
	void BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_35_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_0_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_1_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_2_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad1_K2Node_ComponentBoundEvent_3_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad2_K2Node_ComponentBoundEvent_4_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad3_K2Node_ComponentBoundEvent_5_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__TeleportPad4_K2Node_ComponentBoundEvent_6_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void BndEvt__ButtonReturnHome_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Pad1_K2Node_ComponentBoundEvent_4_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer);
	void BndEvt__Pad2_K2Node_ComponentBoundEvent_5_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer);
	void BndEvt__Pad3_K2Node_ComponentBoundEvent_6_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer);
	void BndEvt__Pad4_K2Node_ComponentBoundEvent_7_OnTeleportPadIntroFinished__DelegateSignature(class UResults_TeleportPadPlayer_C* TeleportPadPlayer);
	void ExecuteUbergraph_Results_TeleportPad(int32 EntryPoint, bool CallFunc_Should_Hide_Exit_Timer_bHideExitTimer, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable12, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Array_Index_Variable12, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item, bool CallFunc_IsValidPad_bIsValid, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_IsValidPad_bIsValid1, int32 K2Node_Event_TimeRemainingSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Event_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId1234567, const class FString& K2Node_ComponentBoundEvent_TargetName1234567, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item12, bool CallFunc_IsValidPad_bIsValid12, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue12, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId123456, const class FString& K2Node_ComponentBoundEvent_TargetName123456, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId12345, const class FString& K2Node_ComponentBoundEvent_TargetName12345, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId1234, const class FString& K2Node_ComponentBoundEvent_TargetName1234, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId123, const class FString& K2Node_ComponentBoundEvent_TargetName123, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId12, const class FString& K2Node_ComponentBoundEvent_TargetName12, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId1, const class FString& K2Node_ComponentBoundEvent_TargetName1, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId, const class FString& K2Node_ComponentBoundEvent_TargetName, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer123, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer12, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad1, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer1, class UResults_TeleportPadPlayer_C* K2Node_ComponentBoundEvent_TeleportPadPlayer, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad12, bool CallFunc_IsLocalPlayersPad_bIsLocalPlayersPad123, int32 Temp_int_Loop_Counter_Variable123, int32 Temp_int_Array_Index_Variable123, class UResults_TeleportPadPlayer_C* CallFunc_Array_Get_Item123, bool CallFunc_IsValidPad_bIsValid123, bool CallFunc_Less_IntInt_ReturnValue123, int32 CallFunc_Add_IntInt_ReturnValue123, bool CallFunc_Should_Hide_Exit_Timer_bHideExitTimer1);
	void OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName);
	void OnExitClicked__DelegateSignature();
	void OnMissionStatsClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
