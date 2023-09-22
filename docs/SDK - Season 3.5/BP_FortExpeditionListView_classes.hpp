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

// 0x28 (0x278 - 0x250)
// WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C
class UBP_FortExpeditionListView_C : public UFortExpeditionListViewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  OnItemClicked;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemHovered;                                     // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionListView_C");
		return Clss;
	}

	void Construct();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_10_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_52_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_6_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionListView(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item12, bool CallFunc_IsMobileApp_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1);
	void OnItemHovered__DelegateSignature(class UObject* Item);
	void OnItemClicked__DelegateSignature(class UObject* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
