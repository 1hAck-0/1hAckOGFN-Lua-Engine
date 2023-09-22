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

// 0x11E (0x926 - 0x808)
// WidgetBlueprintGeneratedClass MainTabIconButton.MainTabIconButton_C
class UMainTabIconButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimatedPulse;                                     // 0x810(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateIn;                                         // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainTabTutorialBangWrapper_C*         BangWrapper;                                       // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHB;                                         // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageGlow;                                         // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTab;                                          // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x850(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x868(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         UseText;                                           // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3802[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SelectedIconTint;                                  // 0x8F4(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DeselectedIconTint;                                // 0x904(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredIconTint;                                   // 0x914(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBangEnabled;                                      // 0x924(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowStyleChange;                                  // 0x925(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MainTabIconButton_C");
		return Clss;
	}

	void StopTabCallout(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1);
	void TabAdded();
	void TabDialogClosed();
	void TabAnimateInFinished();
	void SetTutorialNameID(class FName InTutorialNameID);
	void Update_Bang_State(bool bBangEnabled, enum class EFortUIFeature UIFeature, class FText UIFeatureRevealText, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void OnSelected();
	void OnDeselected();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void OnCurrentTextStyleChanged();
	void HandleTabAdded();
	void HandleTabAnimateInFinished();
	void HandleTabDialogCLosed();
	void Handle_StopTabCallout();
	void ExecuteUbergraph_MainTabIconButton(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
