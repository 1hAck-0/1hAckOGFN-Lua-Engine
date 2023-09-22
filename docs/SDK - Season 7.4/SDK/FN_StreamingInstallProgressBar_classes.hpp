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

// WidgetBlueprintGeneratedClass StreamingInstallProgressBar.StreamingInstallProgressBar_C
// 0x001C (0x0254 - 0x0238)
class UStreamingInstallProgressBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                StreamingInstallProgressBar;                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                RefreshTimer;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RefreshTime;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StreamingInstallProgressBar.StreamingInstallProgressBar_C");
		return ptr;
	}


	void RefreshTick();
	void ToggleTimer(bool Enable);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StreamingInstallProgressBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
