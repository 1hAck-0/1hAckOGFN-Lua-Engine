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

// Function Announcement_Basic.Announcement_Basic_C.SetBodyText
struct UAnnouncement_Basic_C_SetBodyText_Params
{
};

// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
struct UAnnouncement_Basic_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Basic.Announcement_Basic_C.Construct
struct UAnnouncement_Basic_C_Construct_Params
{
};

// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
struct UAnnouncement_Basic_C_AnnouncementStopped_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Basic.Announcement_Basic_C.OnInputMethodChanged
struct UAnnouncement_Basic_C_OnInputMethodChanged_Params
{
	ECommonInputType                                   bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Basic.Announcement_Basic_C.Destruct
struct UAnnouncement_Basic_C_Destruct_Params
{
};

// Function Announcement_Basic.Announcement_Basic_C.OnKeybindsChanged
struct UAnnouncement_Basic_C_OnKeybindsChanged_Params
{
};

// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
struct UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
