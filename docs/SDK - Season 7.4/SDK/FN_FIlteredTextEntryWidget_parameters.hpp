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

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnFocusReceived
struct UFilteredTextEntryWidget_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
struct UFilteredTextEntryWidget_C_OnDirtyTextAttempted_Params
{
	bool                                               bIsBadText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
struct UFilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
