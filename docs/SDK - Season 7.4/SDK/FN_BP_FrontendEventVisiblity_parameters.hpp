#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity_InvisibleonActive
struct ABP_FrontendEventVisiblity_C_SetAssetListVisiblity_InvisibleonActive_Params
{
	bool                                               Visibilty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity
struct ABP_FrontendEventVisiblity_C_SetAssetListVisiblity_Params
{
	bool                                               Visibilty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.UserConstructionScript
struct ABP_FrontendEventVisiblity_C_UserConstructionScript_Params
{
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventEnded_D90685A246E0B23B716622898E705932
struct ABP_FrontendEventVisiblity_C_OnEventEnded_D90685A246E0B23B716622898E705932_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventUpdated_D90685A246E0B23B716622898E705932
struct ABP_FrontendEventVisiblity_C_OnEventUpdated_D90685A246E0B23B716622898E705932_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventActive_D90685A246E0B23B716622898E705932
struct ABP_FrontendEventVisiblity_C_OnEventActive_D90685A246E0B23B716622898E705932_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimespanRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ReceiveBeginPlay
struct ABP_FrontendEventVisiblity_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ExecuteUbergraph_BP_FrontendEventVisiblity
struct ABP_FrontendEventVisiblity_C_ExecuteUbergraph_BP_FrontendEventVisiblity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
