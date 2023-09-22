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

// 0x64 (0x474 - 0x410)
// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
class UStoreMain_Root_C : public UFortMtxStoreRootBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         CurrencyNotificationBorder;                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrencyNotificationText;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoOffersText;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            OffersHorizontalScrollBox;                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayInstructions;                               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherItemsProgress;                             // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VboxOffers;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         NavigatingToDetails;                               // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NavigatingToChat;                                  // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowUpsellUI;                                      // 0x45A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4390[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Tile_Anim_Handle;                                  // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UStoreMain_MTXOffer_C*                 Mtx_Offer;                                         // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OfferTileIndex;                                    // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreMain_Root_C");
		return Clss;
	}

	void TriggerResetOfferTileAnim(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void TriggerNextOfferTileAnim(int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void TriggerInitialOfferTileReset(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateCurrencyNotification(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleRedeem(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue);
	void InitInputActions(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1);
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void AboutToEnterChat();
	void AboutToPushDetails();
	void IsOffersScrollBoxActive(bool* Return_Value, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void AddOffer(class UFortMtxStoreOfferBase* MtxOffer, const struct FMargin& K2Node_MakeStruct_Margin, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess1);
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void OnOffersGenerated();
	void OnActivated();
	void OnDeactivated();
	void Destruct();
	void Construct();
	void OnStartReadingOffers();
	void NoOffersAvailable();
	void ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable12, enum class EFrontEndCamera Temp_byte_Variable123, class UFortMtxStoreOfferBase* K2Node_Event_MtxOffer, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_AreOffersLoaded_ReturnValue, bool CallFunc_IsOffersScrollBoxActive_Return_Value, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End, bool K2Node_DynamicCast_bSuccess, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, enum class ESlateVisibility K2Node_Select_Default, enum class EFrontEndCamera K2Node_Select1_Default, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue1, class UFrontEnd_C* K2Node_DynamicCast_AsFront_End1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
