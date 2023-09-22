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

// Function GA_GenericConsume.GA_GenericConsume_C.OnGenericNotifyFromAnimation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NotifyTag                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GenericConsume_C::OnGenericNotifyFromAnimation(struct FGameplayTag NotifyTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.OnGenericNotifyFromAnimation");

	UGA_GenericConsume_C_OnGenericNotifyFromAnimation_Params params;
	params.NotifyTag = NotifyTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GenericConsume.GA_GenericConsume_C.Completed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GenericConsume_C::Completed(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.Completed");

	UGA_GenericConsume_C_Completed_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GenericConsume.GA_GenericConsume_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GenericConsume_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.Cancelled");

	UGA_GenericConsume_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GenericConsume.GA_GenericConsume_C.Triggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GenericConsume_C::Triggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.Triggered");

	UGA_GenericConsume_C_Triggered_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GenericConsume.GA_GenericConsume_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_GenericConsume_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.K2_ActivateAbility");

	UGA_GenericConsume_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GenericConsume.GA_GenericConsume_C.ExecuteUbergraph_GA_GenericConsume
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_GenericConsume_C::ExecuteUbergraph_GA_GenericConsume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GenericConsume.GA_GenericConsume_C.ExecuteUbergraph_GA_GenericConsume");

	UGA_GenericConsume_C_ExecuteUbergraph_GA_GenericConsume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
