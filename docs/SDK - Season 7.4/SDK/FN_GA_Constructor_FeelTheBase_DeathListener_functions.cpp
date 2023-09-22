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

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ActivateBASEStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AB_Constructor_BASE_C*   BASEReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_FeelTheBase_DeathListener_C::ActivateBASEStacks(int StackCount, class AB_Constructor_BASE_C* BASEReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ActivateBASEStacks");

	UGA_Constructor_FeelTheBase_DeathListener_C_ActivateBASEStacks_Params params;
	params.StackCount = StackCount;
	params.BASEReference = BASEReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.Exceute GC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Constructor_BASE_C*   BASEReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overflow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_FeelTheBase_DeathListener_C::Exceute_GC(class AB_Constructor_BASE_C* BASEReference, bool* Overflow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.Exceute GC");

	UGA_Constructor_FeelTheBase_DeathListener_C_Exceute_GC_Params params;
	params.BASEReference = BASEReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overflow != nullptr)
		*Overflow = params.Overflow;
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_FeelTheBase_DeathListener_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_FeelTheBase_DeathListener_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_FeelTheBase_DeathListener_C::ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener");

	UGA_Constructor_FeelTheBase_DeathListener_C_ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
