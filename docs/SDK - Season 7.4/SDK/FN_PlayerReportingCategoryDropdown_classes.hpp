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

// WidgetBlueprintGeneratedClass PlayerReportingCategoryDropdown.PlayerReportingCategoryDropdown_C
// 0x0010 (0x0368 - 0x0358)
class UPlayerReportingCategoryDropdown_C : public UFortDropdownMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainButtonVerticalBox;                                    // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerReportingCategoryDropdown.PlayerReportingCategoryDropdown_C");
		return ptr;
	}


	void Construct();
	void Destruct();
	void OnActivated();
	void ExecuteUbergraph_PlayerReportingCategoryDropdown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
