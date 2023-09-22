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

// Function EventScoreRow.EventScoreRow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreRow_C::SetData(struct FText Label, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreRow.EventScoreRow_C.SetData");

	UEventScoreRow_C_SetData_Params params;
	params.Label = Label;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventScoreRow.EventScoreRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreRow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreRow.EventScoreRow_C.PreConstruct");

	UEventScoreRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventScoreRow.EventScoreRow_C.ExecuteUbergraph_EventScoreRow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreRow_C::ExecuteUbergraph_EventScoreRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreRow.EventScoreRow_C.ExecuteUbergraph_EventScoreRow");

	UEventScoreRow_C_ExecuteUbergraph_EventScoreRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
