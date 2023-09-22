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

// 0xEC (0x53C - 0x450)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C
class UAthenaDirectAcquisitionScreen_C : public UFortDirectAcquisitionWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Entrance;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              DayCountdown;                                      // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxOffers;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LargeTileHB;                                       // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NoOffersBox;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayProgressSpinner;                            // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            SmallTileGP;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherItemsProgress;                             // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOffers;                                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              WeekCountdown;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           FirstOfferGenerated;                               // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               TilePadding;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                          CycleTimer;                                        // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UAthenaDirectAcquisitionOfferWidget_C*> CycledOffersWidgets;                               // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                          NewVar_0;                                          // 0x4E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<class FString, class UAthenaDirectAcquisitionOfferWidget_C*> CategorizedOfferWidgets;                           // 0x4E8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        TestVar;                                           // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionScreen_C");
		return Clss;
	}

	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData, const class FString& CallFunc_GetFortStoreOfferCategory_ReturnValue, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void NoOffersAvailable();
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnActivated();
	void ExecuteUbergraph_AthenaDirectAcquisitionScreen(int32 EntryPoint, bool CallFunc_IsActivated_ReturnValue, const struct FDateTime& CallFunc_GetWeeklyStoreEndDate_ReturnValue, const struct FDateTime& CallFunc_GetDailyStoreEndDate_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
