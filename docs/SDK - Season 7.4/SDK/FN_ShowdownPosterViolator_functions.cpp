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

// Function ShowdownPosterViolator.ShowdownPosterViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownPosterViolator_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPosterViolator.ShowdownPosterViolator_C.RefreshDataBP");

	UShowdownPosterViolator_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownPosterViolator_C::ExecuteUbergraph_ShowdownPosterViolator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator");

	UShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
