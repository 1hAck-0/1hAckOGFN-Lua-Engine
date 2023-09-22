#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MinigameButtonsWidgetSwitcherConfiguration.MinigameButtonsWidgetSwitcherConfiguration
// 0x0040
struct FMinigameButtonsWidgetSwitcherConfiguration
{
	class UIconTextButton_C*                           ActiveEndGameButton;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UIconTextButton_C*                           ActiveStartGameButton;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       StartGameText;                                            // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PleaseWaitText;                                           // 0x0028(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
