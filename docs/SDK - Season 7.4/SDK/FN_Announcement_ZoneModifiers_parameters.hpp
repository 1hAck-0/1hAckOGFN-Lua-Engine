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

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
struct UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement*                     Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
struct UAnnouncement_ZoneModifiers_C_OnDisplayTimerFinished_Params
{
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationStopped
struct UAnnouncement_ZoneModifiers_C_OnConversationStopped_Params
{
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnAnnouncementStopped
struct UAnnouncement_ZoneModifiers_C_OnAnnouncementStopped_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
struct UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
