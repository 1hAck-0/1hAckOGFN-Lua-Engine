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

// 0x7C (0x4CC - 0x450)
// WidgetBlueprintGeneratedClass BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C
class UBattlePassDirectAcquisitionScreen_C : public UFortDirectAcquisitionWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Entrance;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderTouchToClose;                          // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LeftTileHB;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NoOffersBox;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayProgressSpinner;                            // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RightTileHB;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              SeasonCountdown;                                   // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherItemsProgress;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOffers;                                          // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           FirstOfferGenerated;                               // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               TilePadding;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        ItemCount;                                         // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassDirectAcquisitionScreen_C");
		return Clss;
	}

	struct FEventReply On_CommonBorderTouchToClose_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_HandleBack_bPassThrough);
	void HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData, bool CallFunc_HasDisplayAsset_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void NoOffersAvailable();
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnActivated();
	void Construct();
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_BattlePassDirectAcquisitionScreen(int32 EntryPoint, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
