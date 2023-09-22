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

// WidgetBlueprintGeneratedClass InfoEntry.InfoEntry_C
// 0x0028 (0x0260 - 0x0238)
class UInfoEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           IconTextButton;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                         Item_Definition;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty InfoEntry.InfoEntry_C.Entry Selected

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoEntry.InfoEntry_C");
		return ptr;
	}


	class UObject* GetListItemObject();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void ExecuteUbergraph_InfoEntry(int EntryPoint);
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Entry_Item_Definition);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
