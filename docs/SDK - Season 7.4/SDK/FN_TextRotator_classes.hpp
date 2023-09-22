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

// WidgetBlueprintGeneratedClass TextRotator.TextRotator_C
// 0x0010 (0x0B80 - 0x0B70)
class UTextRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               MainBorder;                                               // 0x0B78(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextRotator.TextRotator_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_TextRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
