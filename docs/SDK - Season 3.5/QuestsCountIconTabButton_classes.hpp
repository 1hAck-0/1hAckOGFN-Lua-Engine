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

// 0xFD (0x905 - 0x808)
// WidgetBlueprintGeneratedClass QuestsCountIconTabButton.QuestsCountIconTabButton_C
class UQuestsCountIconTabButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                  BangWrapper;                                       // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHB;                                         // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x830(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x848(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         UseText;                                           // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SelectedIconTint;                                  // 0x8D4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DeselectedIconTint;                                // 0x8E4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredIconTint;                                   // 0x8F4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBangEnabled;                                      // 0x904(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestsCountIconTabButton_C");
		return Clss;
	}

	void SetTutorialNameID(class FName InTutorialBangID);
	void Update_Bang_State(bool bBangEnabled, int32 Count, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Text(int32 QuestCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories, class UFortQuestCategory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void OnSelected();
	void OnDeselected();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void Handle_Quest_Count_Updated();
	void OnEnabled();
	void OnDisabled();
	void ExecuteUbergraph_QuestsCountIconTabButton(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ClassClass_ReturnValue12, bool CallFunc_EqualEqual_ClassClass_ReturnValue123, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1234, bool CallFunc_EqualEqual_ClassClass_ReturnValue12345, bool K2Node_Event_IsDesignTime, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue123456, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
