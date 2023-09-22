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

// Function PartySuggestionButton.PartySuggestionButton_C.SetupMIDReferences
struct UPartySuggestionButton_C_SetupMIDReferences_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.SetMainMIDs
struct UPartySuggestionButton_C_SetMainMIDs_Params
{
	class UMaterialInstanceDynamic*                    BorderMID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TailMID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SparklesMID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartySuggestionButton.PartySuggestionButton_C.InitPhysAnim
struct UPartySuggestionButton_C_InitPhysAnim_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.InitMIDs
struct UPartySuggestionButton_C_InitMIDs_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.HandleOutroAnimationFinished
struct UPartySuggestionButton_C_HandleOutroAnimationFinished_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.Construct
struct UPartySuggestionButton_C_Construct_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.Tick
struct UPartySuggestionButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartySuggestionButton.PartySuggestionButton_C.PlayIntro
struct UPartySuggestionButton_C_PlayIntro_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.BP_OnHovered
struct UPartySuggestionButton_C_BP_OnHovered_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.BP_OnUnhovered
struct UPartySuggestionButton_C_BP_OnUnhovered_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnDisplayInfoUpdated
struct UPartySuggestionButton_C_OnDisplayInfoUpdated_Params
{
	struct FDateTime                                   LFGTime;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIsInvited;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionAccepted
struct UPartySuggestionButton_C_OnSuggestionAccepted_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnDismissSuggestion
struct UPartySuggestionButton_C_OnDismissSuggestion_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnNewSuggestionAdded
struct UPartySuggestionButton_C_OnNewSuggestionAdded_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.PlayOutro
struct UPartySuggestionButton_C_PlayOutro_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnInitialized
struct UPartySuggestionButton_C_OnInitialized_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionChanged
struct UPartySuggestionButton_C_OnSuggestionChanged_Params
{
};

// Function PartySuggestionButton.PartySuggestionButton_C.ExecuteUbergraph_PartySuggestionButton
struct UPartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
