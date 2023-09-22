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

// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
// 0x004A (0x0BBA - 0x0B70)
class UAthenaRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           ButtonLeft;                                               // 0x0B78(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonRight;                                              // 0x0B80(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               MainBorder;                                               // 0x0B88(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Left_Triggering_Input_Action;                             // 0x0B90(0x0010) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         Right_Triggering_Input_Action;                            // 0x0BA0(0x0010) (Edit, BlueprintVisible)
	class UClass*                                      TextStyle;                                                // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowGamepadButtonOnlyWhenFocused;                         // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OneDirectionalModeActive;                                 // 0x0BB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C");
		return ptr;
	}


	void ConfigureForOneDirectionMode(bool UseOneDirectionalMode);
	void ChangeDirection(bool bDirection);
	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
