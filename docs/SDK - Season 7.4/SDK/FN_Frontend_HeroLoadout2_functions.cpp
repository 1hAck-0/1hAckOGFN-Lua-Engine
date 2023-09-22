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

// Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_HeroLoadout2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.UserConstructionScript");

	AFrontend_HeroLoadout2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_HeroLoadout2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.OnActivated");

	AFrontend_HeroLoadout2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_HeroLoadout2_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.OnDeactivated");

	AFrontend_HeroLoadout2_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.ExecuteUbergraph_Frontend_HeroLoadout2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_HeroLoadout2_C::ExecuteUbergraph_Frontend_HeroLoadout2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_HeroLoadout2.Frontend_HeroLoadout2_C.ExecuteUbergraph_Frontend_HeroLoadout2");

	AFrontend_HeroLoadout2_C_ExecuteUbergraph_Frontend_HeroLoadout2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
