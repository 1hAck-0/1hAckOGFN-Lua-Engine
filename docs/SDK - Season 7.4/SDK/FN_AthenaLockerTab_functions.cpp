// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLockerTab_C::PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation");

	UAthenaLockerTab_C_PlaySlotClickedAnimation_Params params;
	params.SlotToPlayAnimOn = SlotToPlayAnimOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.CanShowEmptyForType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   CustomizationType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanShowEmpty                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::CanShowEmptyForType(EAthenaCustomizationCategory CustomizationType, bool* bCanShowEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.CanShowEmptyForType");

	UAthenaLockerTab_C_CanShowEmptyForType_Params params;
	params.CustomizationType = CustomizationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanShowEmpty != nullptr)
		*bCanShowEmpty = params.bCanShowEmpty;
}


// Function AthenaLockerTab.AthenaLockerTab_C.SelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCustomizationSlotButtonWrapper_C* InSelection                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLockerTab_C::SelectWidget(class UAthenaCustomizationSlotButtonWrapper_C* InSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.SelectWidget");

	UAthenaLockerTab_C_SelectWidget_Params params;
	params.InSelection = InSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.SetHeaderToBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::SetHeaderToBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.SetHeaderToBanner");

	UAthenaLockerTab_C_SetHeaderToBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           WidgetToReturnFocusTo          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Subslot_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::BeginPickingCustomization(EAthenaCustomizationCategory Category, class UCommonButton* WidgetToReturnFocusTo, struct FText HeaderText, int Subslot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization");

	UAthenaLockerTab_C_BeginPickingCustomization_Params params;
	params.Category = Category;
	params.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	params.HeaderText = HeaderText;
	params.Subslot_Index = Subslot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::HandleSlotClicked(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotClicked");

	UAthenaLockerTab_C_HandleSlotClicked_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaLockerTab_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.GetWidgetForFramingViewedItem");

	UAthenaLockerTab_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLockerTab.AthenaLockerTab_C.SetItemDetailsToDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::SetItemDetailsToDisplay(class UFortItem* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.SetItemDetailsToDisplay");

	UAthenaLockerTab_C_SetItemDetailsToDisplay_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ShowVaultItemByCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   CustomizationType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanShowEmpty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::ShowVaultItemByCategory(EAthenaCustomizationCategory CustomizationType, int SubslotIndex, bool CanShowEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ShowVaultItemByCategory");

	UAthenaLockerTab_C_ShowVaultItemByCategory_Params params;
	params.CustomizationType = CustomizationType;
	params.SubslotIndex = SubslotIndex;
	params.CanShowEmpty = CanShowEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaCustomizationCategory   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DescriptionText                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::HandleSlotHovered(EAthenaCustomizationCategory Type, struct FText HeaderText, struct FText DescriptionText, int SubslotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.HandleSlotHovered");

	UAthenaLockerTab_C_HandleSlotHovered_Params params;
	params.Type = Type;
	params.HeaderText = HeaderText;
	params.DescriptionText = DescriptionText;
	params.SubslotIndex = SubslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.SelectFirstWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::SelectFirstWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.SelectFirstWidget");

	UAthenaLockerTab_C_SelectFirstWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::ShowSavingModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ShowSavingModal");

	UAthenaLockerTab_C_ShowSavingModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.RefreshInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::RefreshInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.RefreshInputActions");

	UAthenaLockerTab_C_RefreshInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.SelectInitialWidgetForGamepad
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::SelectInitialWidgetForGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.SelectInitialWidgetForGamepad");

	UAthenaLockerTab_C_SelectInitialWidgetForGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.RegisterInputActions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::RegisterInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.RegisterInputActions");

	UAthenaLockerTab_C_RegisterInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.OnActivated");

	UAthenaLockerTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.OnInputModeChanged");

	UAthenaLockerTab_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.OnDeactivated");

	UAthenaLockerTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLockerTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.Construct");

	UAthenaLockerTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLockerTab_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.Destruct");

	UAthenaLockerTab_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ProcessLoadoutChanged
// (Event, Public, BlueprintEvent)

void UAthenaLockerTab_C::ProcessLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ProcessLoadoutChanged");

	UAthenaLockerTab_C_ProcessLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__AthenaCustomizationBannerButton
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLockerTab_C::BndEvt__AthenaCustomizationBannerButton(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__AthenaCustomizationBannerButton");

	UAthenaLockerTab_C_BndEvt__AthenaCustomizationBannerButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLockerTab_C::BndEvt__BannerSlot_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent");

	UAthenaLockerTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ProccesTransitionToSelector
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::ProccesTransitionToSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ProccesTransitionToSelector");

	UAthenaLockerTab_C_ProccesTransitionToSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.RotationInputGiven
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::RotationInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.RotationInputGiven");

	UAthenaLockerTab_C_RotationInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ZoomInputGiven
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::ZoomInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ZoomInputGiven");

	UAthenaLockerTab_C_ZoomInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.FadeItemHeaderBackIn
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::FadeItemHeaderBackIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.FadeItemHeaderBackIn");

	UAthenaLockerTab_C_FadeItemHeaderBackIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockerTab_C::ExecuteUbergraph_AthenaLockerTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab");

	UAthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
