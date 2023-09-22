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

// Function SubgameSelectScreen.SubgameSelectScreen_C.AnimShineDelay
struct USubgameSelectScreen_C_AnimShineDelay_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.AnimSaleDelay
struct USubgameSelectScreen_C_AnimSaleDelay_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SetCMSTextureToKeyArt
struct USubgameSelectScreen_C_SetCMSTextureToKeyArt_Params
{
	EFortSubgameSelectOption                           Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.StartSubgameSelectMusic
struct USubgameSelectScreen_C_StartSubgameSelectMusic_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
struct USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
struct USubgameSelectScreen_C_ShowUpsell_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
struct USubgameSelectScreen_C_InitializeRedeemButton_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
struct USubgameSelectScreen_C_InitializeShortDescriptions_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
struct USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
struct USubgameSelectScreen_C_Update_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
struct USubgameSelectScreen_C_AdvanceRotator_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
struct USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
struct USubgameSelectScreen_C_ToggleTimer_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
struct USubgameSelectScreen_C_SafeSetSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
struct USubgameSelectScreen_C_SetDescriptionForSubGame_Params
{
	EFortSubgameSelectOption                           SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
struct USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult
struct USubgameSelectScreen_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
struct USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
struct USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
struct USubgameSelectScreen_C_CustomEvent_1_Params
{
	EMatchmakingCompleteResult                         Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
struct USubgameSelectScreen_C_CustomEvent_2_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
struct USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
struct USubgameSelectScreen_C_Construct_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3
struct USubgameSelectScreen_C_CustomEvent_3_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
struct USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
struct USubgameSelectScreen_C_Destruct_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
struct USubgameSelectScreen_C_OnActivated_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowMinorShutdownMessage
struct USubgameSelectScreen_C_ShowMinorShutdownMessage_Params
{
	bool                                               bIsCampaign;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.HandleMinorWarning_Campaign
struct USubgameSelectScreen_C_HandleMinorWarning_Campaign_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.HandleMinorWarning_Athena
struct USubgameSelectScreen_C_HandleMinorWarning_Athena_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRedeemCodeComplete
struct USubgameSelectScreen_C_OnRedeemCodeComplete_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnInputModeChanged
struct USubgameSelectScreen_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnSubGameImageLoadedFromCMS
struct USubgameSelectScreen_C_OnSubGameImageLoadedFromCMS_Params
{
	EFortSubgameSelectOption                           SubGameOption;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.TryShowUpsellDireclty
struct USubgameSelectScreen_C_TryShowUpsellDireclty_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__Button_Creative_K2Node_ComponentBoundEvent
struct USubgameSelectScreen_C_BndEvt__Button_Creative_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
