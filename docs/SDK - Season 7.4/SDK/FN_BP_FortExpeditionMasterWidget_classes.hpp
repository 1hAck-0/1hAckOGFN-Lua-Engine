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

// WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C
// 0x00ED (0x042D - 0x0340)
class UBP_FortExpeditionMasterWidget_C : public UFortExpeditionMasterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_FortExpeditionOverviewWidget_C*          BP_FortExpeditionOverviewWidget;                          // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortniteDefaultBackgroundBlurWidget_C*      FortniteDefaultBackgroundBlurWidget;                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BuildExpeditionAction;                                    // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         AbandonExpeditionAction;                                  // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CollectExpeditionAction;                                  // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortInputAction;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRewardsShowing;                                          // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   RewardsWidget;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UFortExpeditionItem*>                 CompletedExpeditions;                                     // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x03C8(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EFortExpeditionListSort                            ExpeditionListSortType;                                   // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortExpeditionListSort                            ExpeditionListSortBegin;                                  // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortExpeditionListSort                            ExpeditionListSortEnd;                                    // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockedByStorageWarningShown;                             // 0x042B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockedByProfileLockWarningShown;                         // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C");
		return ptr;
	}


	void HandleSortExpeditionListAction(bool* PassThrough);
	void Disable_Input_Action(struct FDataTableRowHandle InputActionRow);
	void HandleCollectExpeditionAction(bool* PassThrough);
	void HandleAbandonExpeditionAction(bool* PassThrough);
	void HandleBuildExpeditionAction(bool* PassThrough);
	void Present_Reward_UI();
	void Show_Input_Action(struct FDataTableRowHandle InputActionRow);
	void Hide_Input_Action(struct FDataTableRowHandle InputActionRow);
	void Update_Master_Widget();
	void Setup_Bindings();
	void Setup_Input_Action_Handlers();
	void Handle_Back(bool* PassThrough);
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void Construct();
	void Destruct();
	void HandleAllCompletedExpeditionsCollected();
	void HACK_OnActivate_UpdateMasterWidget();
	void OnActivated();
	void OnRewardsBlockedByStorage();
	void OnRewardsBlockedByLockedProfile();
	void ExecuteUbergraph_BP_FortExpeditionMasterWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
