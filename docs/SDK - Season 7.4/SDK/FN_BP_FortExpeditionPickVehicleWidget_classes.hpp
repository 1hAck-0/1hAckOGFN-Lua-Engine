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

// WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C
// 0x0050 (0x0378 - 0x0328)
class UBP_FortExpeditionPickVehicleWidget_C : public UFortExpeditionPickVehicleWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTileView*                             CommonTileView_1;                                         // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_ExpeditionSquadSlotsView_C*              ExpeditionSquadSlotsView;                                 // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackInputAction;                                          // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                             SquadOjbects;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C.OnVehicleSelected

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C");
		return ptr;
	}


	void Pre_Select_for_Console();
	void Determine_Available_Expedition_Squads(struct FGameplayTagContainer RequirementTags);
	void Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition);
	void Setup_Input_Action_Handlers();
	void HandleBack(bool* PassThrough);
	void Construct();
	void SetData(class UFortExpeditionItem* InItem);
	void OnActivated();
	void BndEvt__CommonTileView(class UUserWidget* Widget);
	void HandleVehicleSelected(struct FName SquadId);
	void HACK_GetMeOutOfSelectContext();
	void HandleVehicleButtonHovered(class UCommonButton* Button);
	void HandleVehcileButtonUnhovered(class UCommonButton* Button);
	void ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int EntryPoint);
	void OnVehicleSelected__DelegateSignature(struct FName SquadId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
