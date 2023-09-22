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

// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
// 0x059A (0x081A - 0x0280)
class UItemDetailsStackCounter_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    _SizeBox_;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               BorderBase;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextCounter;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFortMultiSizeBrush                         MultiSizeBase;                                            // 0x02A0(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeFont                          MultiSizeFont;                                            // 0x05D0(0x01E0) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                          // 0x07B0(0x0060) (Edit, BlueprintVisible)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysVisible;                                            // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TruncateValue;                                            // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C");
		return ptr;
	}


	void Refresh_Visibility();
	void Update_Stack_Count();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandlePreDifferentItemToDetailSet();
	void HandlePostDifferentItemToDetailSet();
	void HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleQuantityOverrideChanged();
	void ExecuteUbergraph_ItemDetailsStackCounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
