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

// Function LobbyGadgetButton.LobbyGadgetButton_C.Focus
struct ULobbyGadgetButton_C_Focus_Params
{
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
struct ULobbyGadgetButton_C_GetLocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
struct ULobbyGadgetButton_C_SetLocked_Params
{
	bool                                               bLocked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
struct ULobbyGadgetButton_C_GetGadgetItem_Params
{
	class UFortWorldItem*                              GadgetItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
struct ULobbyGadgetButton_C_Refresh_Params
{
	class UFortWorldItem*                              WorldItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
struct ULobbyGadgetButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent
struct ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
struct ULobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature
struct ULobbyGadgetButton_C_OnButtonHovered__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature
struct ULobbyGadgetButton_C_OnButtonClicked__DelegateSignature_Params
{
	class ULobbyGadgetButton_C*                        GadgetButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
