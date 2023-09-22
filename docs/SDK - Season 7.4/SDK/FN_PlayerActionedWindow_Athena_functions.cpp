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

// Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerActionedWindow_Athena_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.OnActivated");

	UPlayerActionedWindow_Athena_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerActionedWindow_Athena_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.Construct");

	UPlayerActionedWindow_Athena_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionedWindow_Athena_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UPlayerActionedWindow_Athena_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.ExecuteUbergraph_PlayerActionedWindow_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionedWindow_Athena_C::ExecuteUbergraph_PlayerActionedWindow_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionedWindow_Athena.PlayerActionedWindow_Athena_C.ExecuteUbergraph_PlayerActionedWindow_Athena");

	UPlayerActionedWindow_Athena_C_ExecuteUbergraph_PlayerActionedWindow_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
