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

// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumFractionalDigits            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardDetails_Stat_C::SetStatData(struct FText Name, float Value, int NumFractionalDigits)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData");

	UEventLeaderboardDetails_Stat_C_SetStatData_Params params;
	params.Name = Name;
	params.Value = Value;
	params.NumFractionalDigits = NumFractionalDigits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventLeaderboardDetails_Stat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct");

	UEventLeaderboardDetails_Stat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardDetails_Stat_C::EventStatAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim");

	UEventLeaderboardDetails_Stat_C_EventStatAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardDetails_Stat_C::ExecuteUbergraph_EventLeaderboardDetails_Stat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat");

	UEventLeaderboardDetails_Stat_C_ExecuteUbergraph_EventLeaderboardDetails_Stat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
