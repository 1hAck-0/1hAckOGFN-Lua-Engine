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

// 0x60 (0x5B0 - 0x550)
// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
class ULoginScreen_C : public UFortUIStateWidget_Login
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x550(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BackBorder;                                        // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BackButton;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BottomBorder;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ConsoleBack;                                       // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_SplashArt;                                // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Version;                                      // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     Widget_BuildWatermark;                             // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     FrontEnd_Music_Controller;                         // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUserWidget*                     AccountLinkWindow;                                 // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               PlatformSpecificBackBorder;                        // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginScreen_C");
		return Clss;
	}

	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_SafePopFlowStack_ReturnValue);
	void ShowAccountLinkingWindow(class FText CallFunc_GetPlatformDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAccountLinkingWindow_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void AccountLinking_PushStatus(class FText StatusText);
	void AccountLinking_PopStatus();
	void AccountLinking_LinkingFailed(class FText FailReason);
	void AccountLinking_RequestSignIn();
	void AccountLinking_RequestAutoLogin();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnNeedsPurchaseOrAccountLinking(bool bLinkedAccountNeedsPurchase);
	void ShowBackBar();
	void HideTopBarOptions();
	void ExecuteUbergraph_LoginScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, enum class EFortUIState K2Node_Event_PreviousUIState, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FText K2Node_CustomEvent_StatusText, class FText K2Node_CustomEvent_FailReason, bool CallFunc_StartAutoLogin_ReturnValue, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bLinkedAccountNeedsPurchase, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_SafePopFlowStack_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_SafePopFlowStack_ReturnValue1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, const class FString& CallFunc_GetGameVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
