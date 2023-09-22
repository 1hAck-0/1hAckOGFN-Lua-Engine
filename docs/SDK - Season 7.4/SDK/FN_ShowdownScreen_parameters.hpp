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

// Function ShowdownScreen.ShowdownScreen_C.PreConstruct
struct UShowdownScreen_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent
struct UShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent
struct UShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent
struct UShowdownScreen_C_BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_Params
{
	float                                              CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.ShowTournamentDetails
struct UShowdownScreen_C_ShowTournamentDetails_Params
{
	struct FString                                     SelectedTournament;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ShowdownScreen.ShowdownScreen_C.Construct
struct UShowdownScreen_C_Construct_Params
{
};

// Function ShowdownScreen.ShowdownScreen_C.OnActivated
struct UShowdownScreen_C_OnActivated_Params
{
};

// Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent
struct UShowdownScreen_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_Params
{
};

// Function ShowdownScreen.ShowdownScreen_C.OnInputModeChanged
struct UShowdownScreen_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.TournamentListSelect
struct UShowdownScreen_C_TournamentListSelect_Params
{
	class UWidget*                                     CurrentWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.Tick
struct UShowdownScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.SelectedFrontTournament
struct UShowdownScreen_C_SelectedFrontTournament_Params
{
	bool                                               bFrontIsSelected;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.SelectedEndTournament
struct UShowdownScreen_C_SelectedEndTournament_Params
{
	bool                                               bEndIsSelected;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownScreen.ShowdownScreen_C.ExecuteUbergraph_ShowdownScreen
struct UShowdownScreen_C_ExecuteUbergraph_ShowdownScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
