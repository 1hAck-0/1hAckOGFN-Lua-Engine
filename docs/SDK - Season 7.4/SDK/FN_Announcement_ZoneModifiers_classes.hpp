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

// WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C
// 0x0020 (0x0260 - 0x0240)
class UAnnouncement_ZoneModifiers_C : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionDetailsModifierList_C*               MissionDetailsModifierList;                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortClientAnnouncement_ZoneModifiers*       ZoneModifiersAnnouncement;                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortClientAnnouncement_Conversation*        ConversationAnnouncement;                                 // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C");
		return ptr;
	}


	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void OnDisplayTimerFinished();
	void OnConversationStopped();
	void OnAnnouncementStopped(class AFortClientAnnouncement* NewAnnouncement);
	void ExecuteUbergraph_Announcement_ZoneModifiers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
