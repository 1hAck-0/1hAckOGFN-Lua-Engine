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

// 0x30 (0x410 - 0x3E0)
// WidgetBlueprintGeneratedClass FortItemManagementViewPopup.FortItemManagementViewPopup_C
class UFortItemManagementViewPopup_C : public UFortPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconCheckmarkTextButton_C*            CollectionBookCheckmarkButton;                     // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconCheckmarkTextButton_C*            PrioritizeFavoritesCheckmarkButton;                // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ToggleSizeButton;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortItemManagementViewPopup_C");
		return Clss;
	}

	void BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void OnActivated();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_FortItemManagementViewPopup(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen1, bool K2Node_DynamicCast_bSuccess1, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen12, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue, bool CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen123, bool K2Node_DynamicCast_bSuccess123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
