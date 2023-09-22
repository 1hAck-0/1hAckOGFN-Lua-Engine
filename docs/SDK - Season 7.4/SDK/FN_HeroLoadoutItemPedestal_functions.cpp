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

// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHeroLoadoutItemPedestal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.UserConstructionScript");

	AHeroLoadoutItemPedestal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.HandleSlotFocusInUIChanged
// (Event, Protected, BlueprintEvent)

void AHeroLoadoutItemPedestal_C::HandleSlotFocusInUIChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.HandleSlotFocusInUIChanged");

	AHeroLoadoutItemPedestal_C_HandleSlotFocusInUIChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)

void AHeroLoadoutItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.OnHeroPawnSetupCompleted");

	AHeroLoadoutItemPedestal_C_OnHeroPawnSetupCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.ExecuteUbergraph_HeroLoadoutItemPedestal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeroLoadoutItemPedestal_C::ExecuteUbergraph_HeroLoadoutItemPedestal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.ExecuteUbergraph_HeroLoadoutItemPedestal");

	AHeroLoadoutItemPedestal_C_ExecuteUbergraph_HeroLoadoutItemPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
