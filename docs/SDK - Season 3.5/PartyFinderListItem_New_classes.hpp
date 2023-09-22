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

// 0x1C8 (0x9E8 - 0x820)
// WidgetBlueprintGeneratedClass PartyFinderListItem_New.PartyFinderListItem_New_C
class UPartyFinderListItem_New_C : public UFortPartyTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered_FriendItem_Reverse;                        // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite_Reverse;                       // 0x830(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_FriendItem;                                // 0x838(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered_PartyInvite;                               // 0x840(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthena_PartyIconsDisplay_C*           Athena_PartyIconsDisplay;                          // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               B_ButtonZone;                                      // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x860(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x868(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DisplayFriendsButton;                              // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               FriendItem_Border;                                 // 0x878(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ButtonContainer;                                // 0x880(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Header;                                            // 0x888(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_3;                                   // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Location;                                          // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyFinder_ListItem_ButtonOptions_C* PartyFinder_ListItem_Invite;                       // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayerStatus;                                      // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextState;                                         // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  InviteJoinChanged;                                 // 0x8E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAbleToBeInvited;                                  // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_FriendListBorder;                              // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Param_TopGradient_R;                           // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_Border;                               // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_InviteItem_Border;                               // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewInvite;                                    // 0x918(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         ClickedInviteButton;                               // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ConfirmSlateBrush;                                 // 0x930(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  RequestClosePartyFinder;                           // 0x9B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsConsolePlatform;                                // 0x9C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SoftInviteDisableTimer;                            // 0x9D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstance*                     M_FriendItem_XboxBorder;                           // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     M_FriendItem_XboxButtonZone;                       // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinderListItem_New_C");
		return Clss;
	}

	void UnbindAllButtons(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234);
	void SetupButtonChoices(bool bIsInvite, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, enum class ESlateVisibility Temp_byte_Variable123456, int32 CallFunc_GetPartySize_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason, bool CallFunc_CanBeInvited_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1234567, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason1, bool CallFunc_CanBeJoined_ReturnValue1, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason1, bool CallFunc_CanBeInvited_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select12_Default, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason12, bool CallFunc_CanBeInvited_ReturnValue12, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason12, bool CallFunc_CanBeJoined_ReturnValue12, bool Temp_bool_Variable123, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345, enum class ESlateVisibility K2Node_Select123_Default, enum class EFortPartyRestriction CallFunc_CanBeInvited_FailReason123, bool CallFunc_CanBeInvited_ReturnValue123, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason123, bool CallFunc_CanBeJoined_ReturnValue123, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void SetupButtonBindingsForPartyInvite(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void SetupButtonBindingsForFriendItem(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12);
	void UnbindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void UpdateStateText(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction Temp_byte_Variable, enum class EFortPartyRestriction CallFunc_CanBeJoined_FailReason, bool CallFunc_CanBeJoined_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Select_Default);
	void SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default);
	void HandlePresenceUpdated();
	void BindSocialItemDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeItem(enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_GetCurrentPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_GetPartySize_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetLocation_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniquePlayerId_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_58DE7379408F85443A0936A25405A46F(enum class EFortDialogResult Result, class FName ResultName);
	void OnSocialItemSet();
	void ExpansionChanged(bool bExpanded);
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnIgnoreInviteClicked(class UCommonButton* Button);
	void OnInviteToPartyClicked(class UCommonButton* Button);
	void OnAcceptPartyInviteClicked(class UCommonButton* Button);
	void ReEnableInviteButtonAfterDelay();
	void SetSelected(bool bSelected);
	void OnHovered();
	void OnUnhovered();
	void OnJoinPartyClicked(class UCommonButton* Button);
	void STWInviteClicked(class UCommonButton* Button);
	void ReEnableSTWInvite();
	void BndEvt__DisplayFriendsButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_PartyFinderListItem_New(int32 EntryPoint, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UWidgetAnimation* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortSocialItemType Temp_byte_Variable1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue12, const struct FLinearColor& Temp_struct_Variable1, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, bool Temp_bool_Variable12, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234, bool CallFunc_Not_PreBool_ReturnValue1234, bool K2Node_Event_bExpanded, bool CallFunc_IsItemExpanded_ReturnValue, bool Temp_bool_Variable123, bool CallFunc_IsValid_ReturnValue12345, bool K2Node_Event_IsDesignTime, class UMaterialInterface* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, class UCommonButton* K2Node_CustomEvent_Button1234, class UCommonButton* K2Node_CustomEvent_Button123, class UCommonButton* K2Node_CustomEvent_Button12, class UCommonUIContext* CallFunc_GetContext_ReturnValue1234, class UCommonUIContext* CallFunc_GetContext_ReturnValue12345, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue1, bool CallFunc_IsValid_ReturnValue123456, bool K2Node_Event_bSelected, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12345, bool CallFunc_Not_PreBool_ReturnValue123456, bool CallFunc_IsValid_ReturnValue1234567, bool CallFunc_EqualEqual_ByteByte_ReturnValue12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue123456, bool CallFunc_Not_PreBool_ReturnValue1234567, bool CallFunc_Not_PreBool_ReturnValue12345678, class UCommonButton* K2Node_CustomEvent_Button1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_EqualEqual_ByteByte_ReturnValue123456, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue12345678, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234567, class UWidgetAnimation* Temp_object_Variable1, class UWidgetAnimation* Temp_object_Variable12, enum class EFortSocialItemType Temp_byte_Variable12, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, class UWidgetAnimation* K2Node_Select12_Default, class UWidgetAnimation* K2Node_Select123_Default, class UWidgetAnimation* K2Node_Select1234_Default, class UCommonButton* K2Node_CustomEvent_Button, bool CallFunc_IsValid_ReturnValue123456789, bool CallFunc_IsValid_ReturnValue12345678910, bool CallFunc_EqualEqual_ByteByte_ReturnValue12345678, bool CallFunc_Not_PreBool_ReturnValue123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UWidgetAnimation* Temp_object_Variable123, class UWidgetAnimation* K2Node_Select12345_Default, bool CallFunc_IsMobileGame_ReturnValue12);
	void RequestClosePartyFinder__DelegateSignature();
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
