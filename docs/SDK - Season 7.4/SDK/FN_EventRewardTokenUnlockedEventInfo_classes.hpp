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

// WidgetBlueprintGeneratedClass EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C
// 0x0010 (0x05C8 - 0x05B8)
class UEventRewardTokenUnlockedEventInfo_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            Text_Description;                                         // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventRewardTokenUnlockedEventInfo.EventRewardTokenUnlockedEventInfo_C");
		return ptr;
	}


	void RefreshDataBP();
	void ExecuteUbergraph_EventRewardTokenUnlockedEventInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
