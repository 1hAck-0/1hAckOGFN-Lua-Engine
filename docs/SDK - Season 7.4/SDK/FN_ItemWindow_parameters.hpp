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

// Function ItemWindow.ItemWindow_C.GetPeopleName
struct UItemWindow_C_GetPeopleName_Params
{
	class UFortItem*                                   InfoItemInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function ItemWindow.ItemWindow_C.HandleSelectedButtonChanged
struct UItemWindow_C_HandleSelectedButtonChanged_Params
{
	class UCommonButton*                               SelectedButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SelectedButtonIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.Set Description Text
struct UItemWindow_C_Set_Description_Text_Params
{
	class UFortItemDefinition*                         Item_Definition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            Text_Box_to_Set;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
struct UItemWindow_C_InternalToExternalRarity_Params
{
	EFortRarity                                        InRarity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ExternalRarity;                                           // (Parm, OutParm)
};

// Function ItemWindow.ItemWindow_C.HandleButton
struct UItemWindow_C_HandleButton_Params
{
	class UWidget*                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.Initialize
struct UItemWindow_C_Initialize_Params
{
};

// Function ItemWindow.ItemWindow_C.SetTitleAndItems
struct UItemWindow_C_SetTitleAndItems_Params
{
	TArray<class UFortItemDefinition*>                 Info_Items;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemWindow.ItemWindow_C.Construct
struct UItemWindow_C_Construct_Params
{
};

// Function ItemWindow.ItemWindow_C.Destruct
struct UItemWindow_C_Destruct_Params
{
};

// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
struct UItemWindow_C_ExecuteUbergraph_ItemWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
