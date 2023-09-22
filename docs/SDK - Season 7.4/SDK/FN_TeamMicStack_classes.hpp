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

// WidgetBlueprintGeneratedClass TeamMicStack.TeamMicStack_C
// 0x0029 (0x0291 - 0x0268)
class UTeamMicStack_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                _Vertical_Box__Team_Members;                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               BorderFrame;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCinematic_TeamMics_C*>               TeamMembers;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               NewVar_1;                                                 // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamMicStack.TeamMicStack_C");
		return ptr;
	}


	void ClearContents();
	void AppendTeamMember(struct FFortTeamMemberInfo* TeamMemberInfo);
	void ShiftTeamMembers(int Index, struct FFortTeamMemberInfo* TeamMemberInfo);
	void HandleTeamMemberChanged(struct FFortTeamMemberInfo Member_Info);
	void HandleTeamMemberRemoved(int Member_Index);
	void Construct();
	void HandlePartyLeft();
	void ExecuteUbergraph_TeamMicStack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
