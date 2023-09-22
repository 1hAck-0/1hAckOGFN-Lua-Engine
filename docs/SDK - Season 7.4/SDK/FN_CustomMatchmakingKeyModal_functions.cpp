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

// Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomMatchmakingKeyModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UCustomMatchmakingKeyModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCustomMatchmakingKeyModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.OnActivated");

	UCustomMatchmakingKeyModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCustomMatchmakingKeyModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UCustomMatchmakingKeyModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.ExecuteUbergraph_CustomMatchmakingKeyModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomMatchmakingKeyModal_C::ExecuteUbergraph_CustomMatchmakingKeyModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMatchmakingKeyModal.CustomMatchmakingKeyModal_C.ExecuteUbergraph_CustomMatchmakingKeyModal");

	UCustomMatchmakingKeyModal_C_ExecuteUbergraph_CustomMatchmakingKeyModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
