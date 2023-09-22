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

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// 0x0030 (0x0260 - 0x0230)
class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            DisclaimerText;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HorizontalBoxDisclaimer;                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       OverrideText;                                             // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaDirectAcquisitonDetails_RefundDisclaimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
