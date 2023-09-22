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

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UActivatableMovieWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnActivated");

	UActivatableMovieWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UActivatableMovieWidget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnDeactivated");

	UActivatableMovieWidget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget");

	UActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
