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

// Function TooltipStatWidget.TooltipStatWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltipStatWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWidget.TooltipStatWidget_C.Init");

	UTooltipStatWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWidget.TooltipStatWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipStatWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWidget.TooltipStatWidget_C.Construct");

	UTooltipStatWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWidget.TooltipStatWidget_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UTooltipStatWidget_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWidget.TooltipStatWidget_C.BndEvt__ButtonHover_K2Node_ComponentBoundEvent");

	UTooltipStatWidget_C_BndEvt__ButtonHover_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipStatWidget.TooltipStatWidget_C.ExecuteUbergraph_TooltipStatWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTooltipStatWidget_C::ExecuteUbergraph_TooltipStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipStatWidget.TooltipStatWidget_C.ExecuteUbergraph_TooltipStatWidget");

	UTooltipStatWidget_C_ExecuteUbergraph_TooltipStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
