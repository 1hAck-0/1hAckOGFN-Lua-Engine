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

// 0xB8 (0x4D8 - 0x420)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
class UAthenaReplayBrowserTab_C : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AverageKills;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageLength;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageRank;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageViews;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                LoadingThrobber;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LowerBarBorder;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserMatchStats_C*      MatchStats;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenReplayFolder;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRenameDialog_C*    RenameDialog;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       ReplayListView;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalSize;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRowProxyInstance*  SelectedRowProxy;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputPlay;                                         // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputDelete;                                       // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputRename;                                       // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaReplayBrowserOldReplayDisclaimer_C* OldReplayDisclaimer;                               // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputBack;                                         // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          LoadingTimerHandle;                                // 0x4D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserTab_C");
		return Clss;
	}

	void RefreshReplayFolderState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_DoesSupportReplayFolder_IsSupported, enum class ESlateVisibility K2Node_Select_Default);
	void DoesSupportReplayFolder(bool* IsSupported, bool CallFunc_DoesReplayFolderExist_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue1, bool CallFunc_EqualEqual_StriStri_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnShowLoadingThrobber();
	void OnEnumerationStateChanged(bool EnumerationInProgress, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnInputBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetupInputActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void CloseRenameDialog(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void OnConfirmRename(class UAthenaReplayBrowserRowProxyInstance* RowProxy, class FText NewName, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnInputPlay(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123);
	void FocusList(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SelectReplay(class UObject* ReplayInfoObject, class UAthenaReplayBrowserRowProxyInstance* K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnInputRename(bool* bPassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void OnInputDelete(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue);
	void Refresh(int32 LocalTotalViews, float LocalTotalLength, int32 LocalNumReplayRows, int32 LocalTotalNumPlayers, int32 LocalTotalRank, int32 LocalTotalKills, float LocalTotalSize, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue123, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1234, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue12, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue12, const class FString& CallFunc_Conv_TextToString_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue12345, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue123456, const class FString& CallFunc_Concat_StrStr_ReturnValue12, const class FString& CallFunc_Concat_StrStr_ReturnValue123, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1234567, float CallFunc_Divide_FloatFloat_ReturnValue123, int32 CallFunc_Round_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue12345678, const class FString& CallFunc_Concat_StrStr_ReturnValue1234, float CallFunc_Divide_FloatFloat_ReturnValue1234, const class FString& CallFunc_Concat_StrStr_ReturnValue12345, class FText CallFunc_Conv_FloatToText_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue12, const class FString& CallFunc_Conv_TextToString_ReturnValue123, const class FString& CallFunc_Concat_StrStr_ReturnValue123456, class FText CallFunc_Conv_StringToText_ReturnValue12, class UAthenaReplayBrowserRowProxyInstance* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, int32 CallFunc_Add_IntInt_ReturnValue1234, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1);
	void DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_12ECDF8D47346477E6D96B927F5223CE(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_E89869AF460753E34CA097BC86722E95(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_00986FB1494FF7EA41F1769EAFB70E83(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_C4C0E9C14BA061EBBA451D839890A4A7(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_79A680104EAA90FF10D265808FD512BC(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void Construct();
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnActivated();
	void OnDeleteFailed(class FText& Reason);
	void OnRenameFailed(class FText& Reason);
	void OnSaveFailed(class FText& Reason);
	void OnRowsUpdated();
	void OnCorruptReplayFound(class FText& Info);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnPlayFailed(class FText& Reason);
	void OnReplayEnumerationStart();
	void OnReplayEnumerationFinish();
	void BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result12345, class FName K2Node_CustomEvent_ResultName12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result1234, class FName K2Node_CustomEvent_ResultName1234, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result123, class FName K2Node_CustomEvent_ResultName123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable12, enum class EFortDialogResult Temp_byte_Variable12, enum class EFortDialogResult K2Node_CustomEvent_Result12, class FName K2Node_CustomEvent_ResultName12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class FName Temp_name_Variable123, enum class EFortDialogResult Temp_byte_Variable123, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class FName Temp_name_Variable1234, enum class EFortDialogResult Temp_byte_Variable1234, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class FName Temp_name_Variable12345, enum class EFortDialogResult Temp_byte_Variable12345, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, class UObject* K2Node_ComponentBoundEvent_Item12, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, class UAthenaReplayBrowserOldReplayDisclaimer_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bUsingGamepad, class UObject* K2Node_ComponentBoundEvent_Item1, enum class EFortDialogResult Temp_byte_Variable123456, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class FName Temp_name_Variable123456, class UWidget* Temp_object_Variable, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy, bool CallFunc_IsValid_ReturnValue12, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UWidget* K2Node_Select_Default, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, enum class EFortDialogResult K2Node_CustomEvent_Result123456, class FName K2Node_CustomEvent_ResultName123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class FText K2Node_Event_Reason123, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue12, class FText K2Node_Event_Reason12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue123, bool CallFunc_IsValid_ReturnValue12345, bool CallFunc_IsValid_ReturnValue123456, class FText K2Node_Event_Reason1, bool CallFunc_IsValid_ReturnValue1234567, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class FText K2Node_Event_Info, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue12345, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, bool CallFunc_IsValid_ReturnValue123456789, class FText K2Node_Event_Reason, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue123456, bool CallFunc_IsValid_ReturnValue12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
