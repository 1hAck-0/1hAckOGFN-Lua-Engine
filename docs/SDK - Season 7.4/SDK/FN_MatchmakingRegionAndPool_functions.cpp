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

// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingRegionAndPool_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick");

	UMatchmakingRegionAndPool_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingRegionAndPool_C::ExecuteUbergraph_MatchmakingRegionAndPool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool");

	UMatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
