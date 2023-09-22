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

// Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset
struct UBuildWatermark_C_UpdateCalenderOffset_Params
{
};

// Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault
struct UBuildWatermark_C_SetTextCollapseIfDefault_Params
{
	class UTextBlock*                                  Text_Widget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InputText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     DefaultText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BuildWatermark.BuildWatermark_C.Update Watermark
struct UBuildWatermark_C_Update_Watermark_Params
{
};

// Function BuildWatermark.BuildWatermark_C.Construct
struct UBuildWatermark_C_Construct_Params
{
};

// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
struct UBuildWatermark_C_HandlePartyJoined_Params
{
};

// Function BuildWatermark.BuildWatermark_C.Destruct
struct UBuildWatermark_C_Destruct_Params
{
};

// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
struct UBuildWatermark_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
struct UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
