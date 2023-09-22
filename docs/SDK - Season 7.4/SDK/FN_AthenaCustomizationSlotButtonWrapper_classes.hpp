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

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
// 0x0108 (0x0340 - 0x0238)
class UAthenaCustomizationSlotButtonWrapper_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaCustomizationSlotButton_C*            SlotButton;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       BannerDisplayName;                                        // 0x0248(0x0018) (Edit, BlueprintVisible)
	EAthenaCustomizationCategory                       CustomizationType;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0261(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x0278(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered
	struct FText                                       CategoryDescription;                                      // 0x0288(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02A0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotUnhovered
	int                                                SubslotIndex;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBangType                                      BangType;                                                 // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  SlottedItemCardSize;                                      // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	struct FSlateBrush                                 SlotImage;                                                // 0x02B8(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int EntryPoint);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(EAthenaCustomizationCategory CustomizationType, struct FText BannerLabel, struct FText CustomizationDescription, int SubslotIndex);
	void OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, struct FText BannerLabel, int Subslot_Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
