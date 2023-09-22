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

// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ProvideData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           InData                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScoreboard_UI_Row_C::ProvideData(TArray<struct FText>* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ProvideData");

	UScoreboard_UI_Row_C_ProvideData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InData != nullptr)
		*InData = params.InData;
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboard_UI_Row_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.Construct");

	UScoreboard_UI_Row_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_Row_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.PreConstruct");

	UScoreboard_UI_Row_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ExecuteUbergraph_Scoreboard_UI_Row
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_Row_C::ExecuteUbergraph_Scoreboard_UI_Row(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI_Row.Scoreboard_UI_Row_C.ExecuteUbergraph_Scoreboard_UI_Row");

	UScoreboard_UI_Row_C_ExecuteUbergraph_Scoreboard_UI_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
