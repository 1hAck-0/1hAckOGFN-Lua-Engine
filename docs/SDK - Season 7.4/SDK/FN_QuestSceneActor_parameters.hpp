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

// Function QuestSceneActor.QuestSceneActor_C.UserConstructionScript
struct AQuestSceneActor_C_UserConstructionScript_Params
{
};

// Function QuestSceneActor.QuestSceneActor_C.ReceiveBeginPlay
struct AQuestSceneActor_C_ReceiveBeginPlay_Params
{
};

// Function QuestSceneActor.QuestSceneActor_C.CameraChanged
struct AQuestSceneActor_C_CameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestSceneActor.QuestSceneActor_C.ExecuteUbergraph_QuestSceneActor
struct AQuestSceneActor_C_ExecuteUbergraph_QuestSceneActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
