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

// 0x48 (0x868 - 0x820)
// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
class UHelpListItem_C : public UFortHelpTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	class UImage*                                Arrow;                                             // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EntryHBox;                                         // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryHeaderName;                                   // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HeaderHBox;                                        // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  InviteJoinChanged;                                 // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HelpListItem_C");
		return Clss;
	}

	void SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default);
	void InitializeItem(bool K2Node_SwitchEnum_CmpSuccess);
	void ExpansionChanged(bool bExpanded);
	void Construct();
	void OnHelpItemSet();
	void ExecuteUbergraph_HelpListItem(int32 EntryPoint, bool K2Node_Event_bExpanded, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
