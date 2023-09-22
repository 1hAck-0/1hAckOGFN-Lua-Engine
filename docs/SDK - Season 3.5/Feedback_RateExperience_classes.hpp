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

// 0xD0 (0x4C0 - 0x3F0)
// WidgetBlueprintGeneratedClass Feedback_RateExperience.Feedback_RateExperience_C
class UFeedback_RateExperience_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     _1Star;                                            // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     _2Star;                                            // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     _3Star;                                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     _4Star;                                            // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     _5Star;                                            // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableText*                BodyEditable;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_0;                              // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_1;                              // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EntryVbox;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     HiddenInitialStar;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SendButton;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        StarCount;                                         // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          TooltipHeaders;                                    // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          TooltipBodys;                                      // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UIconTextButton_C*                     LastClickedStar;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  FeedbackTitle;                                     // 0x498(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UIconTextButton_C*>             StarButtons;                                       // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Feedback_RateExperience_C");
		return Clss;
	}

	void CreateToolTip(class UWidget* Star_Widget, int32 WidgetIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Array_Get_Item, class FText CallFunc_Array_Get_Item1, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void CloseWidget(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SendAnalyticsEvent(const class FString& FeedbackSentBy, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FGameSummaryInfo& CallFunc_GetLastGameSummaryInfo_ReturnValue, const struct FGameSummaryInfo& CallFunc_GetLastGameSummaryInfo_ReturnValue1, class FText CallFunc_GetText_ReturnValue1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetupStarButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array);
	void SetStarCount(int32 Star_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
	void Construct();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnClientPartyStateChanged(enum class EFortPartyState PartyState);
	void OnStarButtonClicked(class UCommonButton* Button_Clicked);
	void OnInputMethodChanged(bool bUsingGamepad);
	void Destruct();
	void BndEvt__1Star_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__2Star_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__3Star_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__4Star_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__5Star_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__1Star_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__2Star_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__3Star_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__4Star_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__5Star_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_Feedback_RateExperience(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class EFortPartyState K2Node_CustomEvent_PartyState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button_Clicked, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011, bool K2Node_CustomEvent_bUsingGamepad, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button123456, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, class UCommonInputContext* CallFunc_GetContext_ReturnValue12, class UCommonUIContext* CallFunc_GetContext_ReturnValue123, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
