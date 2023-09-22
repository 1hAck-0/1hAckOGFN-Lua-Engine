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

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*         AbilityKit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetAbilityKit(class UFortAbilityKit* AbilityKit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit");

	UHeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit_Params params;
	params.AbilityKit = AbilityKit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeroLoadoutActiveAbilityDetailColumn_C::IsAbilityUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked");

	UHeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailColumn_C::GetAbilityKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit");

	UHeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*               Hero                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetHero(class UFortHero* Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero");

	UHeroLoadoutActiveAbilityDetailColumn_C_SetHero_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState");

	UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle");

	UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailColumn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct");

	UHeroLoadoutActiveAbilityDetailColumn_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailColumn_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.Construct");

	UHeroLoadoutActiveAbilityDetailColumn_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailColumn_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn");

	UHeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
