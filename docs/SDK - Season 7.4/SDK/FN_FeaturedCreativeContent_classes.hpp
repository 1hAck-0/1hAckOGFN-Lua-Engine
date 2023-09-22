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

// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
// 0x0010 (0x0240 - 0x0230)
class UFeaturedCreativeContent_C : public UFeaturedCreativeContent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCMSImageSlideShow_C*                        CMSImageSlideShow;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C");
		return ptr;
	}


	void OnSetMediaURLs(TArray<struct FString> MediaURLs);
	void ExecuteUbergraph_FeaturedCreativeContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
