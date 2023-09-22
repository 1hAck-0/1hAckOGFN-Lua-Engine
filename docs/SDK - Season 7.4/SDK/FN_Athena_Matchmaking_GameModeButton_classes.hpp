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

// WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C
// 0x00B8 (0x02E8 - 0x0230)
class UAthena_Matchmaking_GameModeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               CB_ExtraInfo;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               CB_ModeDescription;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           PlayButton;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            T_ExtraInfo;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonLabel;                                              // 0x0258(0x0018) (Edit, BlueprintVisible)
	bool                                               bShowExtraInformation;                                    // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	int                                                ButtonMinWidth;                                           // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonMinHeight;                                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x027C(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected
	bool                                               bGameModeDisabled;                                        // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UClass*                                      OverrideButtonClass;                                      // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideButtonStyle;                                     // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FText                                       ModeDescription;                                          // 0x02A8(0x0018) (Edit, BlueprintVisible)
	bool                                               bShowModeDescription;                                     // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x02C1(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered
	class UAthenaMatchmakingOptionsDisplay_v2_C*       MyOwningDisplay;                                          // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFortPlaylistAthena*                         MyPlaylist;                                               // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C");
		return ptr;
	}


	void SetButtonSize(bool UseLargeSize);
	void SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay);
	void UpdateGameModeAvailibilty();
	void ShowDisabledMessage(bool Show);
	void DisableGameModeButton();
	void IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available);
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);
	void SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnModeButtonHovered(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int EntryPoint);
	void ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
