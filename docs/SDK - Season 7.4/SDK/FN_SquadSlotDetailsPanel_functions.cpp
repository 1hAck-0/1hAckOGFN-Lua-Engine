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

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotDetailsPanel_C::Set_Scroll_Box_to_Nav_Scroll_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget");

	USquadSlotDetailsPanel_C_Set_Scroll_Box_to_Nav_Scroll_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EFortSquadSlottingRestrictionReason> Reasons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Text                           (Parm, OutParm)

void USquadSlotDetailsPanel_C::GetRestrictionReasonsAsText(TArray<EFortSquadSlottingRestrictionReason>* Reasons, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText");

	USquadSlotDetailsPanel_C_GetRestrictionReasonsAsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reasons != nullptr)
		*Reasons = params.Reasons;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP");

	USquadSlotDetailsPanel_C_HandleDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotStateChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP");

	USquadSlotDetailsPanel_C_HandleSquadSlotStateChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadSlotDetailsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct");

	USquadSlotDetailsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP");

	USquadSlotDetailsPanel_C_HandleSquadSlotRestrictionFactorsChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ResetDetailsSwitcher
// (BlueprintCallable, BlueprintEvent)

void USquadSlotDetailsPanel_C::ResetDetailsSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ResetDetailsSwitcher");

	USquadSlotDetailsPanel_C_ResetDetailsSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotDetailsPanel_C::ExecuteUbergraph_SquadSlotDetailsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel");

	USquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
