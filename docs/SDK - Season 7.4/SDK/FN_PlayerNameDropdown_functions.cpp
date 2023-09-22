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

// Function PlayerNameDropdown.PlayerNameDropdown_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerNameDropdown_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameDropdown.PlayerNameDropdown_C.Destruct");

	UPlayerNameDropdown_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameDropdown.PlayerNameDropdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerNameDropdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameDropdown.PlayerNameDropdown_C.Construct");

	UPlayerNameDropdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameDropdown.PlayerNameDropdown_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerNameDropdown_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameDropdown.PlayerNameDropdown_C.OnActivated");

	UPlayerNameDropdown_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerNameDropdown.PlayerNameDropdown_C.ExecuteUbergraph_PlayerNameDropdown
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerNameDropdown_C::ExecuteUbergraph_PlayerNameDropdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerNameDropdown.PlayerNameDropdown_C.ExecuteUbergraph_PlayerNameDropdown");

	UPlayerNameDropdown_C_ExecuteUbergraph_PlayerNameDropdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
