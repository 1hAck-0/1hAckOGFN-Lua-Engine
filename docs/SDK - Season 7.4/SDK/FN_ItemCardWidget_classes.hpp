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

// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
// 0x005C (0x0B8C - 0x0B30)
class UItemCardWidget_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                     // 0x0B38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      FortMultiSizeItemCard_1;                                  // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B48(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ItemCardWidget.ItemCardWidget_C.OnHoveredEvent
	struct FFortReceivedItemLootInfo                   ItemReceivedInfo_BP;                                      // 0x0B58(0x0028) (Edit, BlueprintVisible)
	class USoundBase*                                  SoundOnItemCardShow;                                      // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                cscs;                                                     // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C");
		return ptr;
	}


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);
	void OnCentered();
	void PlayShow(int idx);
	void OnFocusLost(struct FFocusEvent InFocusEvent);
	void BP_OnHovered();
	void Construct();
	void ExecuteUbergraph_ItemCardWidget(int EntryPoint);
	void OnHoveredEvent__DelegateSignature(struct FFortReceivedItemLootInfo NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
