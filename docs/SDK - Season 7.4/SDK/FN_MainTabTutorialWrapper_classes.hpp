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

// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
// 0x0030 (0x0288 - 0x0258)
class UMainTabTutorialWrapper_C : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            TutorialGlow;                                             // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFancyToastWidget_C*                         FancyToastWidget;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTutorialToastWidget_C*                      TutorialToastWidget;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USoundBase*                                  Play_Callout_Sound;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonButton*                               ParentButton;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C");
		return ptr;
	}


	void SetParentButton(class UCommonButton* ParentButton);
	void GetTutorialCalloutData(struct FFortUITutorialData TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo);
	void HasValidData(struct FFortUITutorialData FortUITutorialData, bool* Result);
	void HandleTutorialCallout(struct FName TutorialObjectiveName, ETutorialType TutorialType);
	void CheckFinishTutorialWrapper();
	void OnBangStateChanged(bool bEnabled, int Count);
	void OnStopCallout();
	void OnStartCallout(struct FName TutorialObjectiveName, ETutorialType TutorialType);
	void Tab_Reveal_Message_Closed();
	void ExecuteUbergraph_MainTabTutorialWrapper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
