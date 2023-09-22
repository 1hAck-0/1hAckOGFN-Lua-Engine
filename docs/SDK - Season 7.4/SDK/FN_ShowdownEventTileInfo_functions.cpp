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

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownEventTileInfo_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP");

	UShowdownEventTileInfo_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTileInfo_C::EventAnimFocus(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus");

	UShowdownEventTileInfo_C_EventAnimFocus_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket
// (BlueprintCallable, BlueprintEvent)

void UShowdownEventTileInfo_C::EventStyleSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket");

	UShowdownEventTileInfo_C_EventStyleSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTileInfo_C::EventAnimHover(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover");

	UShowdownEventTileInfo_C_EventAnimHover_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownEventTileInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct");

	UShowdownEventTileInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UShowdownEventTileInfo_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize");

	UShowdownEventTileInfo_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTileInfo_C::ExecuteUbergraph_ShowdownEventTileInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo");

	UShowdownEventTileInfo_C_ExecuteUbergraph_ShowdownEventTileInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.MultiRoundSession__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShowdownEventTileInfo_C::MultiRoundSession__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.MultiRoundSession__DelegateSignature");

	UShowdownEventTileInfo_C_MultiRoundSession__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo DisplayInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTileInfo_C::SetDisplayInfo__DelegateSignature(struct FFortTournamentDisplayInfo DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature");

	UShowdownEventTileInfo_C_SetDisplayInfo__DelegateSignature_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortShowdownEventState        EventState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTileInfo_C::SetEventState__DelegateSignature(EFortShowdownEventState EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature");

	UShowdownEventTileInfo_C_SetEventState__DelegateSignature_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
