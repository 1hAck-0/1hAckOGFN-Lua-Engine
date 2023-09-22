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

// WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C
// 0x00B8 (0x02E8 - 0x0230)
class UMissionDetailsModifierRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Intro;                                                    // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                            ImageModifier;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxIcon;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextModifierDescription;                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextModifierName;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      NameTextStyle;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DescriptionTextStyle;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0270(0x0018) (Edit, BlueprintVisible)
	bool                                               ShowName;                                                 // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0290(0x0018) (Edit, BlueprintVisible)
	bool                                               ShowDescription;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSmallIcon;                                            // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x02B9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MissionDetailsModifierRow.MissionDetailsModifierRow_C.IconAssetID

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C");
		return ptr;
	}


	void SetData(struct FText In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, struct FText In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, class UTexture2D* In_Icon, bool In_Use_Small_Icon);
	void SetIconAsset();
	void SetIcon(class UTexture2D* In_Icon);
	void SetUseSmallIcon(bool In_Use);
	void UpdateDescriptionTextStyle();
	void SetDescriptionTextStyle(class UClass* In_Style);
	void UpdateShowDescription();
	void SetShowDescription(bool In_Show);
	void SetDescription(struct FText In_Description);
	void UpdateNameTextStyle();
	void UpdateShowName();
	void SetNameTextStyle(class UClass* In_Style);
	void SetShowName(bool In_Show);
	void SetName(struct FText In_Name);
	void UpdateIcon();
	void UpdateDescription();
	void UpdateName();
	void Show_Label(bool ShowLabel);
	void PlayIntroAnimation();
	void Update();
	void Construct();
	void ExecuteUbergraph_MissionDetailsModifierRow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
