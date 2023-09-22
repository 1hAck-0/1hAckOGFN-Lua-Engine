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

// Function ItemInfoWidget.ItemInfoWidget_C.GenerateItemName
struct UItemInfoWidget_C_GenerateItemName_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function ItemInfoWidget.ItemInfoWidget_C.Update Text
struct UItemInfoWidget_C_Update_Text_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem
struct UItemInfoWidget_C_PopulateUsingItem_Params
{
	class UFortItem*                                   NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItemDefinition
struct UItemInfoWidget_C_PopulateUsingItemDefinition_Params
{
	class UFortItemDefinition*                         NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.Populate_Internal
struct UItemInfoWidget_C_Populate_Internal_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInfoWidget.ItemInfoWidget_C.Construct
struct UItemInfoWidget_C_Construct_Params
{
};

// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
struct UItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
