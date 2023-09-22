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

// Function ChatContainer.ChatContainer_C.OnKeyDown
struct UChatContainer_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ChatContainer.ChatContainer_C.HandleChatOpenChanged
struct UChatContainer_C_HandleChatOpenChanged_Params
{
	bool                                               bChatShouldBeOpen;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete
struct UChatContainer_C_OnSizeAnimationComplete_Params
{
};

// Function ChatContainer.ChatContainer_C.HandleCursorModeChanged
struct UChatContainer_C_HandleCursorModeChanged_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.Construct
struct UChatContainer_C_Construct_Params
{
};

// Function ChatContainer.ChatContainer_C.OnChatOpenChanged
struct UChatContainer_C_OnChatOpenChanged_Params
{
	bool                                               bShouldBeOpen;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged
struct UChatContainer_C_OnSendButtonDisplayChanged_Params
{
	bool                                               bShowSendButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent
struct UChatContainer_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.Destruct
struct UChatContainer_C_Destruct_Params
{
};

// Function ChatContainer.ChatContainer_C.Tick
struct UChatContainer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer
struct UChatContainer_C_ExecuteUbergraph_ChatContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
