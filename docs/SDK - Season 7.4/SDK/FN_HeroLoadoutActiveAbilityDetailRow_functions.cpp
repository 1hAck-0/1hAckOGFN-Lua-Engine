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

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDescription                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseVerboseDescription          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailRow_C::SetDisplayState(bool ShowName, bool ShowDescription, bool UseVerboseDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState");

	UHeroLoadoutActiveAbilityDetailRow_C_SetDisplayState_Params params;
	params.ShowName = ShowName;
	params.ShowDescription = ShowDescription;
	params.UseVerboseDescription = UseVerboseDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*         AbilityKit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailRow_C::SetAbilityKit(class UFortAbilityKit* AbilityKit)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit");

	UHeroLoadoutActiveAbilityDetailRow_C_SetAbilityKit_Params params;
	params.AbilityKit = AbilityKit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeroLoadoutActiveAbilityDetailRow_C::IsAbilityUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked");

	UHeroLoadoutActiveAbilityDetailRow_C_IsAbilityUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailRow_C::GetAbilityKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit");

	UHeroLoadoutActiveAbilityDetailRow_C_GetAbilityKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*               Hero                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailRow_C::SetHero(class UFortHero* Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero");

	UHeroLoadoutActiveAbilityDetailRow_C_SetHero_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateTextStyles()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles");

	UHeroLoadoutActiveAbilityDetailRow_C_UpdateTextStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState");

	UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle");

	UHeroLoadoutActiveAbilityDetailRow_C_UpdateFromStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct");

	UHeroLoadoutActiveAbilityDetailRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct");

	UHeroLoadoutActiveAbilityDetailRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutActiveAbilityDetailRow_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow");

	UHeroLoadoutActiveAbilityDetailRow_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
