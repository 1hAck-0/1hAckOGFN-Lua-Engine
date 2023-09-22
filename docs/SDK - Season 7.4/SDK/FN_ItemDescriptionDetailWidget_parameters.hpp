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

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleItemChanged
struct UItemDescriptionDetailWidget_C_HandleItemChanged_Params
{
	bool                                               ItemChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IngredientsChanged;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.UpdateQuantityTextBlock
struct UItemDescriptionDetailWidget_C_UpdateQuantityTextBlock_Params
{
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple
struct UItemDescriptionDetailWidget_C_IsItemSimple_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet
struct UItemDescriptionDetailWidget_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePreDifferentItemToDetailSet
struct UItemDescriptionDetailWidget_C_HandlePreDifferentItemToDetailSet_Params
{
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleQuantityOverrideChanged
struct UItemDescriptionDetailWidget_C_HandleQuantityOverrideChanged_Params
{
};

// Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget
struct UItemDescriptionDetailWidget_C_ExecuteUbergraph_ItemDescriptionDetailWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
