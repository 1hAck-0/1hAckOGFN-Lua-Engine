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

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x00A8 (0x04D8 - 0x0430)
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            NewModeViolation;                                         // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaGenericLobbyViolator_C*               AthenaGenericLobbyViolator;                               // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           DebugCreativeServerSelect;                                // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      MatchmakingSpinner;                                       // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               NewModeBorder;                                            // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UShowdownLobbyViolator_C*                    ShowdownLobbyViolator;                                    // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    ViolatorContent;                                          // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             ViolatorSwitcher;                                         // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0478(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated
	struct FTimerHandle                                ShowNewPlaylistTimer;                                     // 0x0488(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0490(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlaylistChanged
	class USoundBase*                                  MatchmakingSucceededSound;                                // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x04A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.CreativeOptionsSoftClass
	class UClass*                                      CreativeOptionsClass;                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C");
		return ptr;
	}


	void OpenPlayOptions();
	void OnLoaded(class UClass* Loaded);
	void Construct();
	void OnAvailablePlaylistsUpdated();
	void OnSetPlayButtonText(struct FText PlayButtonText);
	void OnSetCancelButtonText(struct FText CancelButtonText);
	void PlaylistChanged(struct FPlaylistFrontEndData NewPlaylist, struct FText PlaylistCMSOverrideName, EFortLobbyType LobbyType);
	void BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void SetSquadFillText(bool InCurrentSquadFill);
	void OnNewModeViolatorUpdated(bool bShouldShow);
	void UpdateCustomViolatorText(struct FText ModeName, struct FText SubText);
	void Animate();
	void OnMatchmakingFinishedBlueprint(bool bSuccess);
	void OpenCreativeOptions_NativizeMe();
	void ExecuteUbergraph_AthenaMatchmakingPlay(int EntryPoint);
	void OnPlaylistChanged__DelegateSignature(struct FPlaylistFrontEndData Playlist_Data, struct FText Playlist_CMS_Override, EFortLobbyType Lobby_Type);
	void PlaylistsUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
