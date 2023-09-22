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

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.SetCardSizeAndSlotImage
struct UAthenaCustomizationSlotButton_C_SetCardSizeAndSlotImage_Params
{
	EFortItemCardSize                                  CardSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 SlotImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.PreConstruct
struct UAthenaCustomizationSlotButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct
struct UAthenaCustomizationSlotButton_C_Construct_Params
{
};

// Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton
struct UAthenaCustomizationSlotButton_C_ExecuteUbergraph_AthenaCustomizationSlotButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
