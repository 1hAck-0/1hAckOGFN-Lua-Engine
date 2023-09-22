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

// Function GiftingUserItem.GiftingUserItem_C.SetSelectionState
struct UGiftingUserItem_C_SetSelectionState_Params
{
	ESelectionState                                    NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOnSelect;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingUserItem.GiftingUserItem_C.UpdateMessageText
struct UGiftingUserItem_C_UpdateMessageText_Params
{
	struct FText                                       NewMessage;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem
struct UGiftingUserItem_C_ExecuteUbergraph_GiftingUserItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
