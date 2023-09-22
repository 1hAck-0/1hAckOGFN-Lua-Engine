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

// WidgetBlueprintGeneratedClass ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C
// 0x0010 (0x02C8 - 0x02B8)
class UItemInspectRefundItemQuantityList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ContainerBox;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspectRefundItemQuantityList.ItemInspectRefundItemQuantityList_C");
		return ptr;
	}


	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_ItemInspectRefundItemQuantityList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
