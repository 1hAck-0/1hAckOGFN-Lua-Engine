#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x1D0 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon
struct UMissionAlertIndicator_C_Get_Mission_Alert_Visual_Icon_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                           OutBrush;                                          // 0x20(0x88)(Parm, OutParm)
	class UObject*                               MinibossAlertImage;                                // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               StormAlertImage;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xB8(0x88)()
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasTag_ReturnValue1;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x148(0x88)()
};

// 0x108 (0x108 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
struct UMissionAlertIndicator_C_Config_Params
{
public:
	struct FGameplayTagContainer                 AlertVisualTags;                                   // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x20(0x48)()
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush;   // 0x70(0x88)()
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0xF8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
struct UMissionAlertIndicator_C_Update_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
struct UMissionAlertIndicator_C_ToggleTimer_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
