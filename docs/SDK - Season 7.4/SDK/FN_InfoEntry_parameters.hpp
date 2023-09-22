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

// Function InfoEntry.InfoEntry_C.GetListItemObject
struct UInfoEntry_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.BP_OnEntryReleased
struct UInfoEntry_C_BP_OnEntryReleased_Params
{
};

// Function InfoEntry.InfoEntry_C.BP_OnItemExpansionChanged
struct UInfoEntry_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.BP_OnItemSelectionChanged
struct UInfoEntry_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.Construct
struct UInfoEntry_C_Construct_Params
{
};

// Function InfoEntry.InfoEntry_C.OnListItemObjectSet
struct UInfoEntry_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UInfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.ExecuteUbergraph_InfoEntry
struct UInfoEntry_C_ExecuteUbergraph_InfoEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.Entry Selected__DelegateSignature
struct UInfoEntry_C_Entry_Selected__DelegateSignature_Params
{
	class UFortItemDefinition*                         Entry_Item_Definition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
