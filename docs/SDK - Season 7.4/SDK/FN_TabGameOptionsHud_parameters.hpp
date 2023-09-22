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

// Function TabGameOptionsHud.TabGameOptionsHud_C.Construct
struct UTabGameOptionsHud_C_Construct_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.UpdateOptionsTab
struct UTabGameOptionsHud_C_UpdateOptionsTab_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.CenterOnTab
struct UTabGameOptionsHud_C_CenterOnTab_Params
{
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent
struct UTabGameOptionsHud_C_BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.HUD Changed
struct UTabGameOptionsHud_C_HUD_Changed_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Gameplay_Tag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TabGameOptionsHud.TabGameOptionsHud_C.ExecuteUbergraph_TabGameOptionsHud
struct UTabGameOptionsHud_C_ExecuteUbergraph_TabGameOptionsHud_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
