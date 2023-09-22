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

// 0x28 (0x3E8 - 0x3C0)
// WidgetBlueprintGeneratedClass MgmtTabsScreen.MgmtTabsScreen_C
class UMgmtTabsScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      PlayerHitThrob;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_6;                                        // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TopTabContentWidgetSwitcher;                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  TopTabList;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MgmtTabsScreen_C");
		return Clss;
	}

	void HandleMgmtMenuTabChangeRequested(class FName TabName, bool CallFunc_SelectTabByID_ReturnValue);
	void HandleDamageReceived(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInCursorMode_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_SelectTabByID_ReturnValue);
	void OnActivated();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void Destruct();
	void HandleShowQuests(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason StateReason);
	void HandleShowObjectives(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason StateReason);
	void ExecuteUbergraph_MgmtTabsScreen(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class UFortHUDContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, bool Temp_bool_Variable1234567, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemManagementScreen* K2Node_DynamicCast_AsFort_Item_Management_Screen, bool K2Node_DynamicCast_bSuccess, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class EFortUIFeatureState Temp_byte_Variable1, enum class EFortUIFeature K2Node_CustomEvent_ChangedFeature1, enum class EFortUIFeatureState K2Node_CustomEvent_NewState1, enum class EFortUIFeatureStateReason K2Node_CustomEvent_StateReason1, bool K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, enum class EFortUIFeature K2Node_CustomEvent_ChangedFeature, enum class EFortUIFeatureState K2Node_CustomEvent_NewState, enum class EFortUIFeatureStateReason K2Node_CustomEvent_StateReason, bool K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
