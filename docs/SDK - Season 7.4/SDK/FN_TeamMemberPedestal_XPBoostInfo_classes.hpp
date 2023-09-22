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

// WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C
// 0x0010 (0x0270 - 0x0260)
class UTeamMemberPedestal_XPBoostInfo_C : public UFortTeamMemberXPBoostInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C");
		return ptr;
	}


	void Construct();
	void OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
