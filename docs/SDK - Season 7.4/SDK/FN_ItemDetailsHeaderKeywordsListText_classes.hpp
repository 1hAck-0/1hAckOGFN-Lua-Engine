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

// WidgetBlueprintGeneratedClass ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C
// 0x0010 (0x0290 - 0x0280)
class UItemDetailsHeaderKeywordsListText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            TagListTextBlock;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C");
		return ptr;
	}


	void FormatItemDisplayTags(TArray<struct FText>* TagTexts, struct FText* FormatedText);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemDetailsHeaderKeywordsListText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
