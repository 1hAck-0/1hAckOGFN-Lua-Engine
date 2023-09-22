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

// Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownLobbyViolator_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.RefreshDataBP");

	UShowdownLobbyViolator_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.ExecuteUbergraph_ShowdownLobbyViolator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownLobbyViolator_C::ExecuteUbergraph_ShowdownLobbyViolator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.ExecuteUbergraph_ShowdownLobbyViolator");

	UShowdownLobbyViolator_C_ExecuteUbergraph_ShowdownLobbyViolator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
