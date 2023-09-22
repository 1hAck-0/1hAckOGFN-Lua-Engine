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

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity_InvisibleonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibilty                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::SetAssetListVisiblity_InvisibleonActive(bool Visibilty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity_InvisibleonActive");

	ABP_FrontendEventVisiblity_C_SetAssetListVisiblity_InvisibleonActive_Params params;
	params.Visibilty = Visibilty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibilty                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::SetAssetListVisiblity(bool Visibilty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity");

	ABP_FrontendEventVisiblity_C_SetAssetListVisiblity_Params params;
	params.Visibilty = Visibilty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontendEventVisiblity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.UserConstructionScript");

	ABP_FrontendEventVisiblity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventEnded_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::OnEventEnded_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventEnded_D90685A246E0B23B716622898E705932");

	ABP_FrontendEventVisiblity_C_OnEventEnded_D90685A246E0B23B716622898E705932_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventUpdated_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::OnEventUpdated_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventUpdated_D90685A246E0B23B716622898E705932");

	ABP_FrontendEventVisiblity_C_OnEventUpdated_D90685A246E0B23B716622898E705932_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventActive_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimespanRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::OnEventActive_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventActive_D90685A246E0B23B716622898E705932");

	ABP_FrontendEventVisiblity_C_OnEventActive_D90685A246E0B23B716622898E705932_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;
	params.TimespanRatio = TimespanRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontendEventVisiblity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ReceiveBeginPlay");

	ABP_FrontendEventVisiblity_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ExecuteUbergraph_BP_FrontendEventVisiblity
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FrontendEventVisiblity_C::ExecuteUbergraph_BP_FrontendEventVisiblity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ExecuteUbergraph_BP_FrontendEventVisiblity");

	ABP_FrontendEventVisiblity_C_ExecuteUbergraph_BP_FrontendEventVisiblity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
