#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C
// 0x00A9 (0x0309 - 0x0260)
class UBP_FortExpeditionOverviewWidget_C : public UFortExpeditionOverviewWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_FortExpeditionDetailsWidget_C*           BP_FortExpeditionDetailsWidget;                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       CommonWidgetSwitcher_1;                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHeaderWithNav_C*                            HeaderWithNav;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            NoExpeditionsText;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            SelectedTabName;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C.OnCollectCompletedExpedition
	struct FDataTableRowHandle                         BuildExpeditionAction;                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         AbandonExpeditionAction;                                  // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CollectExpeditionAction;                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortInputAction;                                          // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_FortExpeditionMasterWidget_C*            ParentWidget;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       CurrentTabId;                                             // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBP_FortExpeditionIconTabButton_C*>   TabButtons;                                               // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIgnoreBuildExpeditionAction;                             // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionOverviewWidget.BP_FortExpeditionOverviewWidget_C");
		return ptr;
	}


	void RefreshActiveInputAction();
	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow);
	void Set_List_Sort_Type(EFortExpeditionListSort InSortType);
	void Should_Disable_Build_Expedition_Action(class UFortExpeditionItem* Expedition, bool* Disable);
	void Try_to_Build_Expedition(class UFortExpeditionItem* Expedition);
	void Try_to_Abandon_Expedition(class UFortExpeditionItem* Expedition);
	void Update_Active_Input_For_Selected_Item(class UFortExpeditionItem* InputObject);
	void Update_Details_Visibility();
	void Update_List_View_Area();
	void HandleCollectExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleBuildExpeditionAction(bool* PassThrough);
	void Determine_Active_Input_Action(class UFortExpeditionItem* InItem);
	void Hide_All_Input_Actions();
	void Set_Current_Tab_Name(struct FName TabId);
	void On_Widget_Activated();
	void FireCollectCompletedExpedition();
	void Setup_Expedition_Details_Widget(class UFortExpeditionItem* Item);
	void Construct();
	void OnExpeditionTabSelected(struct FName TabNameID);
	void HandleAbandonExpedition();
	void BndEvt__ExpeditionTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton);
	void Destruct();
	void OnExpeditionOverviewRefresh();
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent(class UFortExpeditionItem* Item);
	void HandleOnListViewRefreshed();
	void BndEvt__HeaderWithNav_K2Node_ComponentBoundEvent();
	void ExecuteUbergraph_BP_FortExpeditionOverviewWidget(int EntryPoint);
	void OnCollectCompletedExpedition__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
