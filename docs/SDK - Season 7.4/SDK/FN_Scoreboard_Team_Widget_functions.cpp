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

// Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.SetVictoryColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicMaterialInstance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_Team_Widget_C::SetVictoryColors(class UMaterialInstanceDynamic* DynamicMaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.SetVictoryColors");

	UScoreboard_Team_Widget_C_SetVictoryColors_Params params;
	params.DynamicMaterialInstance = DynamicMaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_Team_Widget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.PreConstruct");

	UScoreboard_Team_Widget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboard_Team_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.Construct");

	UScoreboard_Team_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.ExecuteUbergraph_Scoreboard_Team_Widget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_Team_Widget_C::ExecuteUbergraph_Scoreboard_Team_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_Team_Widget.Scoreboard_Team_Widget_C.ExecuteUbergraph_Scoreboard_Team_Widget");

	UScoreboard_Team_Widget_C_ExecuteUbergraph_Scoreboard_Team_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
