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

// 0x40 (0x490 - 0x450)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferPurchasedWidget.AthenaDirectAcquisitionOfferPurchasedWidget_C
class UAthenaDirectAcquisitionOfferPurchasedWidget_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Purchased_;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRarityFlare;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PanelButtonClose;                                  // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityGlow;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanPurchase;                                       // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuantityPurchased;                                 // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferPurchasedWidget_C");
		return Clss;
	}

	void PopScreen(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleBack(bool* Passthrough);
	void UpdateFromOffer(class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, class FText CallFunc_GetName_ReturnValue, int32 CallFunc_GetFirstGrantQuantity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void OnOfferSet();
	void OnActivated();
	void Construct();
	void OnDeactivated();
	void BndEvt__PanelButtonClose_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedWidget(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UCommonUIContext* CallFunc_GetContext_ReturnValue12, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFrontEndCamera Temp_byte_Variable12, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsUnique_ReturnValue, enum class EFrontEndCamera Temp_byte_Variable123, bool CallFunc_IsPanelOnStack_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, bool Temp_bool_Variable1, enum class EFrontEndCamera K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_PassThrough, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
