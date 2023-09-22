#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x4D0 - 0x3F0)
// WidgetBlueprintGeneratedClass AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C
class UAthenaMatchmakingOptionsDisplay_v2_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn_Details;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Duo;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_LTM;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Solo;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  B_GM_Squad;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_0;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ClickBlocker;                                      // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_HoveredGameMode;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_HoveredModeDescription;                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          GameModeButtonBox;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GameModeContainer;                              // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_Cancel;                                      // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaMatchmakingPlay_C*              Parent;                                            // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          DebugList_StandardModes;                           // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAthena_Matchmaking_SpecialEventButton_C* MyLTM;                                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastHoveredStandardModeIndex;                      // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthena_Matchmaking_GameModeButton_C*> MyActiveStandardGameModeButtons;                   // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        SM_Button_IndexMax;                                // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SM_Button_IndexCurrent;                            // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortAthenaPlaylist               LTMPlaylist;                                       // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4245[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaylistAthena*                   DefaultPlaylists;                                  // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthena_Matchmaking_GameModeButton_C*  InitialButtonSelection;                            // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingOptionsDisplay_v2_C");
		return Clss;
	}

	struct FEventReply On_ClickBlocker_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InitializeGameModeButtons(bool CallFunc_IsBROnly_ReturnValue);
	void UpdateLTM(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFortPlaylistAthena*>& CallFunc_GetActivePlaylists_ReturnValue, class UFortPlaylistAthena* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
	void UpdateStandardGameModeButtonAvailibilty(int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
	void SetupButtonBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ClearLTM();
	void AddLTM(class UFortPlaylistAthena* LTMPlaylist, bool AddSpecialStyle, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ClearStandardGameModes(int32 ChildIndex);
	void AddStandardGameModes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UFortPlaylistAthena*>& CallFunc_GetDefaultPlaylists_DefaultPlaylists, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Create_ReturnValue, class UFortPlaylistAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CloseMatchmakingOptions(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Handle_InputAction_Cancel(bool* Passthrough);
	void SetupInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Construct();
	void OnActivated();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnGameModeButtonSelected(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
	void OnModeButtonHovered(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void Destruct();
	void ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_True_if_break_was_hit_Variable1, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_SelectedGameModeButton, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_SetCurrentPlaylistData_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UAthena_Matchmaking_GameModeButton_C* K2Node_CustomEvent_HoveredButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, class UAthena_Matchmaking_GameModeButton_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPlaylistEnabled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_IsPlaylistEnabled_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
