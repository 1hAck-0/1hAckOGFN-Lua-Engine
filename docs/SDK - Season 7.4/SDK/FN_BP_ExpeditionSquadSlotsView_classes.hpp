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

// WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C
// 0x0039 (0x0361 - 0x0328)
class UBP_ExpeditionSquadSlotsView_C : public UFortSquadSlotsView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USquadSlotGroup_C*                           SubordinatesSquadSlotGroup;                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotSelected
	bool                                               bShowHeader;                                              // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectableButtons;                                       // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x034A(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.OnSquadSlotOpened
	EFortItemCardSize                                  Slot_Size;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C");
		return ptr;
	}


	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int SquadSlotIndex, struct FHomebaseSquadSlot SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
	void HandleSquadSlotSelected(int SquadSlotIndex);
	void PreConstruct(bool IsDesignTime);
	void HandleSquadSlotOpened();
	void OpenSquadSlotEvent(int SquadSlotIndex);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int EntryPoint);
	void OnSquadSlotOpened__DelegateSignature();
	void OnSquadSlotSelected__DelegateSignature(int SquadSlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
