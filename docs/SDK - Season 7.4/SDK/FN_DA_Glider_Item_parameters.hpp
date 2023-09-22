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

// Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround
struct ADA_Glider_Item_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError
struct ADA_Glider_Item_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_Glider_Item.DA_Glider_Item_C.UserConstructionScript
struct ADA_Glider_Item_C_UserConstructionScript_Params
{
};

// Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger
struct ADA_Glider_Item_C_BPPressTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item
struct ADA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
