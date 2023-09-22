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

// Function DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDeadzoneAdjustment_C::DoCustomNavigation_1(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation_1");

	UDeadzoneAdjustment_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeadzoneAdjustment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct");

	UDeadzoneAdjustment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeadzoneAdjustment_C::OnValueChanged_Bind(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind");

	UDeadzoneAdjustment_C_OnValueChanged_Bind_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeadzoneAdjustment_C::ExecuteUbergraph_DeadzoneAdjustment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment");

	UDeadzoneAdjustment_C_ExecuteUbergraph_DeadzoneAdjustment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
