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

// 0xF8 (0x548 - 0x450)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C
class UAthenaDirectAcquisitionMTXDetails_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UPanelButton_C*                        BacchusCloseButton;                                // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BaseColor;                                         // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattlePassGlow;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BonusCurrencySB;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderDisclaimer;                                  // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BaseQuantity;                           // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonText_BonusQuantity;                          // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_PurchaseorGift;               // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CustomBadge;                                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CustomBadgeOverlay;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     GiftButton;                                        // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      KeyArt;                                            // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MTXCurrency;                                       // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradient;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OverlayGradientDetails;                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySalePrice;                                  // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBoxDetails;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNumber;                                      // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNumberLarge;                                 // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute;                   // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    StoreMain_OfferDetailsAttribute_C_0;               // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextDescription;                                   // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice;                             // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOfferInfo;                                     // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionMTXDetails_C");
		return Clss;
	}

	void InitPurchaseButton(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Init(int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, int32 CallFunc_GetBonusQuantity_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue123, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1234, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, const struct FSlateBrush& CallFunc_GetDetailsImage_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class ESlateVisibility Temp_byte_Variable123, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility K2Node_Select1_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12, enum class ESlateVisibility K2Node_Select12_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1);
	void HandleBack(bool* Passthrough);
	void HandlePurchaseComplete(bool bSuccess);
	void Construct();
	void Destruct();
	void BndEvt__GiftButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCancelGifting();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnGiftButtonClicked(class UCommonButton* Button);
	void OnDeactivated();
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_CustomEvent_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue12, bool CallFunc_IsPriceInMTX_ReturnValue1, bool Temp_bool_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const class FString& CallFunc_GetOfferId_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1234, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue12, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button12, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_CustomEvent_Button, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue12345, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsGiftingDisabledOnCurrentPlatform_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue123, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_PassThrough, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
