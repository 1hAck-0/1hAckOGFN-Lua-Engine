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

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ActivateBASEStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stack_Count                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AB_Perk_C_Constructor_BASE_C* BASEReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ActivateBASEStacks(int Stack_Count, class AB_Perk_C_Constructor_BASE_C* BASEReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ActivateBASEStacks");

	UGA_Perk_H_FeelTheBASE_DeathListener_C_ActivateBASEStacks_Params params;
	params.Stack_Count = Stack_Count;
	params.BASEReference = BASEReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteGC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Perk_C_Constructor_BASE_C* BASEReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Overflow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ExecuteGC(class AB_Perk_C_Constructor_BASE_C* BASEReference, bool* Overflow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteGC");

	UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteGC_Params params;
	params.BASEReference = BASEReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overflow != nullptr)
		*Overflow = params.Overflow;
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.K2_ActivateAbilityFromEvent");

	UGA_Perk_H_FeelTheBASE_DeathListener_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Perk_H_FeelTheBASE_DeathListener_C::ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener");

	UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
