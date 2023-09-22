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

// Function ShowdownPin.ShowdownPin_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownPin_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.Refresh");

	UShowdownPin_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownPin_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.RefreshDataBP");

	UShowdownPin_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownPin_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.PreConstruct");

	UShowdownPin_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.EventSetTier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownPin_C::EventSetTier(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.EventSetTier");

	UShowdownPin_C_EventSetTier_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.EventFixPts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownPin_C::EventFixPts(int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.EventFixPts");

	UShowdownPin_C_EventFixPts_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UShowdownPin_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.EventColorize");

	UShowdownPin_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.EventRevealAnim
// (BlueprintCallable, BlueprintEvent)

void UShowdownPin_C::EventRevealAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.EventRevealAnim");

	UShowdownPin_C_EventRevealAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownPin_C::ExecuteUbergraph_ShowdownPin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin");

	UShowdownPin_C_ExecuteUbergraph_ShowdownPin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
