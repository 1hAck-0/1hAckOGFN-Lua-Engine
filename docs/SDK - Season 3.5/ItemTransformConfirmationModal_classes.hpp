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

// 0x98 (0x458 - 0x3C0)
// WidgetBlueprintGeneratedClass ItemTransformConfirmationModal.ItemTransformConfirmationModal_C
class UItemTransformConfirmationModal_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CancelButton;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformRequiredItems_C*         ItemTransformRequiredItems;                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformResultItems_C*           ItemTransformResultItems;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                KeyItemCard;                                       // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SacrificeItemBox;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SacrificeItemCard1;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SacrificeItemCard2;                                // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SacrificeItemCard3;                                // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SacrificeItemCard4;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                SacrificeItemCard5;                                // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpinnerImage;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnCancel;                                          // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnConfirm;                                         // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformConfirmationModal_C");
		return Clss;
	}

	void Cleanup_Confirmation_Widget(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Setup_Transform_MCP_Binds(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1);
	void UpdateTransformInfo(class UFortItem* TransformKey, TArray<class UFortItem*>& SacrificeItems, int32 SacrificePoints, int32 CurrentTier, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue1, class UFortItem* CallFunc_Array_Get_Item12, bool CallFunc_IsValid_ReturnValue12, class UFortItem* CallFunc_Array_Get_Item123, bool CallFunc_IsValid_ReturnValue123, class UFortItem* CallFunc_Array_Get_Item1234, bool CallFunc_IsValid_ReturnValue1234);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void Handle_Transform_Succeeded(TArray<struct FFortItemInstanceQuantityPair>& TransmoggedItems, TArray<struct FFortItemInstanceQuantityPair>& RecycledItems);
	void Handle_Transform_Failed(class FText& ErrorMessage);
	void ExecuteUbergraph_ItemTransformConfirmationModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_TransmoggedItems, TArray<struct FFortItemInstanceQuantityPair>& K2Node_CustomEvent_RecycledItems, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText K2Node_CustomEvent_ErrorMessage);
	void OnConfirm__DelegateSignature();
	void OnCancel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
