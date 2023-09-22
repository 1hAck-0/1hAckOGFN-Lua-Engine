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

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnHover
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayUnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnHover");

	UHeroLoadoutPerkDetailRow_C_PlayUnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHover
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHover");

	UHeroLoadoutPerkDetailRow_C_PlayHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InShouldDisplayWarning         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetShouldDisplayWarning(bool InShouldDisplayWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayWarning");

	UHeroLoadoutPerkDetailRow_C_SetShouldDisplayWarning_Params params;
	params.InShouldDisplayWarning = InShouldDisplayWarning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateLockedImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateLockedImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateLockedImage");

	UHeroLoadoutPerkDetailRow_C_UpdateLockedImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayUnhoverCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue");

	UHeroLoadoutPerkDetailRow_C_PlayUnhoverCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayHoverCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue");

	UHeroLoadoutPerkDetailRow_C_PlayHoverCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InShouldDisplayAsIgnored       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetShouldDisplayAsIgnored(bool InShouldDisplayAsIgnored)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored");

	UHeroLoadoutPerkDetailRow_C_SetShouldDisplayAsIgnored_Params params;
	params.InShouldDisplayAsIgnored = InShouldDisplayAsIgnored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortHeroLoadoutPerkType       Perk_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetPerkTypeToRepresent(EFortHeroLoadoutPerkType Perk_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent");

	UHeroLoadoutPerkDetailRow_C_SetPerkTypeToRepresent_Params params;
	params.Perk_Type = Perk_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHeroLoadoutPerkDetailRow_C::IsPerkUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked");

	UHeroLoadoutPerkDetailRow_C_IsPerkUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortAbilityKit* UHeroLoadoutPerkDetailRow_C::GetPerkAbilityKit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit");

	UHeroLoadoutPerkDetailRow_C_GetPerkAbilityKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*               Hero                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetHero(class UFortHero* Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero");

	UHeroLoadoutPerkDetailRow_C_SetHero_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateTextStyles()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles");

	UHeroLoadoutPerkDetailRow_C_UpdateTextStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateFromState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState");

	UHeroLoadoutPerkDetailRow_C_UpdateFromState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateFromStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle");

	UHeroLoadoutPerkDetailRow_C_UpdateFromStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct");

	UHeroLoadoutPerkDetailRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetHoverAlphaValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue");

	UHeroLoadoutPerkDetailRow_C_SetHoverAlphaValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::SetHoverHorizontalOffset(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset");

	UHeroLoadoutPerkDetailRow_C_SetHoverHorizontalOffset_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerkDetailRow_C::ExecuteUbergraph_HeroLoadoutPerkDetailRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow");

	UHeroLoadoutPerkDetailRow_C_ExecuteUbergraph_HeroLoadoutPerkDetailRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
