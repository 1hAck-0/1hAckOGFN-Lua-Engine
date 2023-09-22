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

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.GetListItemObject
struct UOptionsMenuInputDisplayOnly_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnEntryReleased
struct UOptionsMenuInputDisplayOnly_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemExpansionChanged
struct UOptionsMenuInputDisplayOnly_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemSelectionChanged
struct UOptionsMenuInputDisplayOnly_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.OnListItemObjectSet
struct UOptionsMenuInputDisplayOnly_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputDisplayOnly
struct UOptionsMenuInputDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputDisplayOnly_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
