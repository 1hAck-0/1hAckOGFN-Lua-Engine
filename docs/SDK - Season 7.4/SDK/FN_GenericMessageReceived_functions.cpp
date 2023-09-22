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

// Function GenericMessageReceived.GenericMessageReceived_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGenericMessageReceived_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericMessageReceived.GenericMessageReceived_C.Construct");

	UGenericMessageReceived_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericMessageReceived.GenericMessageReceived_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGenericMessageReceived_C::BndEvt__ShowNextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericMessageReceived.GenericMessageReceived_C.BndEvt__ShowNextButton_K2Node_ComponentBoundEvent");

	UGenericMessageReceived_C_BndEvt__ShowNextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericMessageReceived.GenericMessageReceived_C.ExecuteUbergraph_GenericMessageReceived
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGenericMessageReceived_C::ExecuteUbergraph_GenericMessageReceived(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericMessageReceived.GenericMessageReceived_C.ExecuteUbergraph_GenericMessageReceived");

	UGenericMessageReceived_C_ExecuteUbergraph_GenericMessageReceived_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
