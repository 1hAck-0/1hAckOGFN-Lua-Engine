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

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
struct UBP_FortExpeditionListItem_C_Update_Bang_State_Params
{
	class UFortAccountItem*                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
struct UBP_FortExpeditionListItem_C_Set_Success_Chance_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
struct UBP_FortExpeditionListItem_C_Set_Vehicle_Icon_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
struct UBP_FortExpeditionListItem_C_Set_Expedition_Returns_Data_Params
{
	class UFortExpeditionItem*                         InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
struct UBP_FortExpeditionListItem_C_Set_In_Progress_State_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
struct UBP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
struct UBP_FortExpeditionListItem_C_Set_Rarity_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
struct UBP_FortExpeditionListItem_C_Set_Rating_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
struct UBP_FortExpeditionListItem_C_Set_Rewards_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
struct UBP_FortExpeditionListItem_C_Get_Expedition_Item_Definition_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
struct UBP_FortExpeditionListItem_C_Set_Name_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
struct UBP_FortExpeditionListItem_C_Setup_Base_Item_Data_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnListItemObjectSet
struct UBP_FortExpeditionListItem_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnSelected
struct UBP_FortExpeditionListItem_C_BP_OnSelected_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
struct UBP_FortExpeditionListItem_C_OnItemChanged_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnDeselected
struct UBP_FortExpeditionListItem_C_BP_OnDeselected_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent
struct UBP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BP_OnHovered
struct UBP_FortExpeditionListItem_C_BP_OnHovered_Params
{
};

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
struct UBP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
