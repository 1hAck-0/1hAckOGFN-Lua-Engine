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

// Function BoostIndicator.BoostIndicator_C.IsPartyMemberBoosted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Boosted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBoostIndicator_C::IsPartyMemberBoosted(bool* Boosted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostIndicator.BoostIndicator_C.IsPartyMemberBoosted");

	UBoostIndicator_C_IsPartyMemberBoosted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Boosted != nullptr)
		*Boosted = params.Boosted;
}


// Function BoostIndicator.BoostIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBoostIndicator_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostIndicator.BoostIndicator_C.Update");

	UBoostIndicator_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostIndicator.BoostIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBoostIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostIndicator.BoostIndicator_C.Construct");

	UBoostIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoostIndicator.BoostIndicator_C.ExecuteUbergraph_BoostIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBoostIndicator_C::ExecuteUbergraph_BoostIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostIndicator.BoostIndicator_C.ExecuteUbergraph_BoostIndicator");

	UBoostIndicator_C_ExecuteUbergraph_BoostIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
