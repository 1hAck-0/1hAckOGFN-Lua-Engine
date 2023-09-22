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

// Function OnlineStatusButton.OnlineStatusButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnlineStatusButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusButton.OnlineStatusButton_C.PreConstruct");

	UOnlineStatusButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineStatusButton.OnlineStatusButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UOnlineStatusButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusButton.OnlineStatusButton_C.BP_OnHovered");

	UOnlineStatusButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineStatusButton.OnlineStatusButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UOnlineStatusButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusButton.OnlineStatusButton_C.BP_OnUnhovered");

	UOnlineStatusButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineStatusButton.OnlineStatusButton_C.ExecuteUbergraph_OnlineStatusButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnlineStatusButton_C::ExecuteUbergraph_OnlineStatusButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineStatusButton.OnlineStatusButton_C.ExecuteUbergraph_OnlineStatusButton");

	UOnlineStatusButton_C_ExecuteUbergraph_OnlineStatusButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
