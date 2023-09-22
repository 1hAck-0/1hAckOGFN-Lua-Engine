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

// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingKnobsModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.Construct");

	UAthenaMatchmakingKnobsModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingKnobsModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnActivated");

	UAthenaMatchmakingKnobsModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingKnobsModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnInputModeChanged");

	UAthenaMatchmakingKnobsModal_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.Close
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingKnobsModal_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.Close");

	UAthenaMatchmakingKnobsModal_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaMatchmakingKnobsModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UAthenaMatchmakingKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.ExecuteUbergraph_AthenaMatchmakingKnobsModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingKnobsModal_C::ExecuteUbergraph_AthenaMatchmakingKnobsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.ExecuteUbergraph_AthenaMatchmakingKnobsModal");

	UAthenaMatchmakingKnobsModal_C_ExecuteUbergraph_AthenaMatchmakingKnobsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
