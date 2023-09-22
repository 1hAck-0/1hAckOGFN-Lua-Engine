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

// WidgetBlueprintGeneratedClass ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C
// 0x0040 (0x0360 - 0x0320)
class UProfileStatsAllStatsSubScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                                    StatWrapBox;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackAction;                                               // 0x0330(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       StatsToDisplay;                                           // 0x0340(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C");
		return ptr;
	}


	void HandleBack(bool* PassThrough);
	void Construct();
	void ExecuteUbergraph_ProfileStatsAllStatsSubScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
