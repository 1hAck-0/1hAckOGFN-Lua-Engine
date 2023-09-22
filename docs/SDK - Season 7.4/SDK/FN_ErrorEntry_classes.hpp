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

// WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C
// 0x00B1 (0x02E9 - 0x0238)
class UErrorEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           IconTextButton;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            MESSAGE;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFortErrorInfo                              ErrorInfo;                                                // 0x0250(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     ErrorUrlBase;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       debugMessage;                                             // 0x02D0(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsDebugMode;                                             // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C");
		return ptr;
	}


	void Center_on_Widget(bool* Did_Center);
	void SetErrorInfo(struct FFortErrorInfo ErrorInfo);
	void GetButtonVisibility(ESlateVisibility* NewParam);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_ErrorEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
