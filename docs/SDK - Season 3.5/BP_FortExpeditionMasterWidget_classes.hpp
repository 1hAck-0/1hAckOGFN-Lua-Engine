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

// 0xD5 (0x515 - 0x440)
// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
class UBP_FortExpeditionMasterWidget_C : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*    BP_FortExpeditionOverviewWidget;                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BuildExpeditionAction;                             // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   AbandonExpeditionAction;                           // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CollectExpeditionAction;                           // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SortInputAction;                                   // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bRewardsShowing;                                   // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFrontEndRewards_Widget_C*             RewardsWidget;                                     // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortExpeditionItem*>           CompletedExpeditions;                              // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFrontEndRewards_Definition           RewardsDefinition;                                 // 0x4C0(0x4A)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_40C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortExpeditionListSort           ExpeditionListSortType;                            // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortExpeditionListSort           ExpeditionListSortBegin;                           // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortExpeditionListSort           ExpeditionListSortEnd;                             // 0x512(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockedByStorageWarningShown;                      // 0x513(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BlockedByProfileLockWarningShown;                  // 0x514(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionMasterWidget_C");
		return Clss;
	}

	void HandleSortExpeditionListAction(bool* Passthrough, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue);
	void Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void HandleCollectExpeditionAction(bool* Passthrough);
	void HandleAbandonExpeditionAction(bool* Passthrough);
	void HandleBuildExpeditionAction(bool* Passthrough, bool CallFunc_HandleBuildExpeditionAction_PassThrough);
	void Present_Reward_UI();
	void Show_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow);
	void Update_Master_Widget(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, int32 CallFunc_GetStorageNumItems_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_AreProfilesAvailableToWIFE_ReturnValue, bool CallFunc_AreAnyExpeditionsComplete_ReturnValue);
	void Setup_Bindings(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234);
	void Handle_Back(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void DialogResult_99152A754621D0E9A8C9C889926A827D(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_67CD2E3A4E1A6780703420B1064D5BD1(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_39A80A89449E8489E8E81EAECC14DE95(enum class EFortDialogResult Result, class FName ResultName);
	void Construct();
	void Destruct();
	void HandleAllCompletedExpeditionsCollected();
	void HACK_OnActivate_UpdateMasterWidget();
	void OnActivated();
	void OnRewardsBlockedByStorage();
	void OnRewardsBlockedByLockedProfile();
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int32 EntryPoint, bool CallFunc_IsFrontendStorageEnabled_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result12, class FName K2Node_CustomEvent_ResultName12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable12, enum class EFortDialogResult Temp_byte_Variable12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsWIFEEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
