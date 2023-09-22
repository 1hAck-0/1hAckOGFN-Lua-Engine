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

// 0x60 (0x278 - 0x218)
// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
class ULeaveButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     Leave;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnClicked;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Update_Visibility;                                 // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                ButtonStyleOverride;                               // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ControllerStyleOverride;                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseButtoneStyleOverride;                           // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OverrideButtonText;                                // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_392F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonTextOverride;                                // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaveButton_C");
		return Clss;
	}

	void GetDescriptionText(class FText* DescriptionText, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsInNeighborhood(bool* bIsInNeighborhood, class AFortDeployableBaseManager* DeployableBaseManager, enum class EDeployableBaseUseType CallFunc_GetDeployableBaseUseType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue);
	void Update_Style_State();
	void SetText(class FText TextOverride);
	void GetButton(class UIconTextButton_C** Leave);
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasUnsavedPrimaryMissionProgress_ReturnValue);
	void LeaveParty(class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void UpdateState(class FText CallFunc_GetLeaveActionText_Text, bool CallFunc_IsConsideredInGame_InGame, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsConsideredInGame(bool* InGame, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetLeaveActionText(class FText* Text, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsInOutpostZone_ReturnValue, class FText Temp_text_Variable12, class FText Temp_text_Variable123, bool Temp_bool_Variable1, class FText Temp_text_Variable1234, class FText K2Node_Select_Default, bool CallFunc_IsConsideredInGame_InGame, bool Temp_bool_Variable12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select1_Default, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class FText K2Node_Select12_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void DialogResult_1E39F47546648367BB2F218F69311220(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(enum class EFortDialogResult Result, class FName ResultName);
	void HandleTeamMemberRemoved(int32 PlayerIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleLobbyEvents();
	void Construct();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& TeamMemberInfo);
	void ExecuteUbergraph_LeaveButton(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result12, class FName K2Node_CustomEvent_ResultName12, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable12, enum class EFortDialogResult Temp_byte_Variable12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, bool Temp_bool_Variable1, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class FText K2Node_Select_Default, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class FName Temp_name_Variable123, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable123, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, int32 K2Node_CustomEvent_PlayerIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, enum class EFortDialogResult K2Node_CustomEvent_Result123, class FName K2Node_CustomEvent_ResultName123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerControllerOutpost_C* K2Node_DynamicCast_AsBP_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, bool CallFunc_IsOutpostOwner_ReturnValue, bool CallFunc_IsConsideredInGame_InGame, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456, class FText Temp_text_Variable12, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress, bool CallFunc_HasUnsavedQuestProgress_HasUnsavedQuestProgress1, bool Temp_bool_Variable12, class UFortOutpostContext* CallFunc_GetContext_ReturnValue1234567, class FText K2Node_Select1_Default, class FText Temp_text_Variable12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, bool CallFunc_IsInOutpostZone_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910, class FText Temp_text_Variable123456, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue, class ULeaveWarningInfo_C* CallFunc_Create_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable1234567, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, class FText K2Node_Select12_Default, class FText K2Node_Select123_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue12, bool Temp_bool_Variable12345, bool CallFunc_IsConsideredInGame_InGame1, bool CallFunc_IsInNeighborhood_bIsInNeighborhood, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, class FText Temp_text_Variable12345678, bool CallFunc_IsInOutpostZone_ReturnValue1, class FText Temp_text_Variable123456789, class FText K2Node_Select1234_Default, class FText K2Node_Select12345_Default, bool Temp_bool_Variable123456, const struct FFortTeamMemberInfo& K2Node_CustomEvent_TeamMemberInfo, class FText K2Node_Select123456_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue123, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123);
	void Update_Visibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
