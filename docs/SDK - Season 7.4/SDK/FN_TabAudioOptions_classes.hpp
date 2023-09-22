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

// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
// 0x0018 (0x02A0 - 0x0288)
class UTabAudioOptions_C : public UFortOptionsTab
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            CommonTextBlock_1;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TooltipDisplayReference;                                  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C");
		return ptr;
	}


	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent(class UUserWidget* Widget);
	void Setting_Value_Changed(float Value);
	void ExecuteUbergraph_TabAudioOptions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
