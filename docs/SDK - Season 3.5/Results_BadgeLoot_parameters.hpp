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

// 0x8 (0x8 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Focus
struct UResults_BadgeLoot_C_Focus_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.ShouldBadgeBeShown
struct UResults_BadgeLoot_C_ShouldBadgeBeShown_Params
{
public:
	class UFortItem*                             Badge;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShownBadgeBeShown;                                 // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBadgeItemDefinition*              K2Node_DynamicCast_AsFort_Badge_Item_Definition;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMissionPoints_ReturnValue;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.SkipToFinalState
struct UResults_BadgeLoot_C_SkipToFinalState_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidgetAnimation*>              K2Node_MakeArray_Array;                            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class UWidgetAnimation*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.SetSkippingToEnd
struct UResults_BadgeLoot_C_SetSkippingToEnd_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.InitializeDelays
struct UResults_BadgeLoot_C_InitializeDelays_Params
{
public:
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue1;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue12;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue123;         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue1234;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue12345;       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.PlayAnimationCommon
struct UResults_BadgeLoot_C_PlayAnimationCommon_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.StepBadgeQueues
struct UResults_BadgeLoot_C_StepBadgeQueues_Params
{
public:
	class UWidgetAnimation*                      BadgeAnimation;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_Badge_C*                      Badge;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_Badge_C*                      CallFunc_Array_Get_Item1;                          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.HasMoreBadgesToShow
struct UResults_BadgeLoot_C_HasMoreBadgesToShow_Params
{
public:
	bool                                         bMoreBadgesToShow;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.PopulateNextBadge
struct UResults_BadgeLoot_C_PopulateNextBadge_Params
{
public:
	class UResults_Badge_C*                      Badge;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldBadgeBeShown_ShownBadgeBeShown;     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow;    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_Array_Get_Item1;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Initialize
struct UResults_BadgeLoot_C_Initialize_Params
{
public:
	TArray<class UFortItem*>                     RewardItems;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_Badge_C*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidgetAnimation*>              K2Node_MakeArray_Array;                            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UResults_Badge_C*>              K2Node_MakeArray_Array1;                           // 0x40(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Intro Sequence
struct UResults_BadgeLoot_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Results_RewardPackage_K2Node_ComponentBoundEvent_9_IntroComplete__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Badges Sequence
struct UResults_BadgeLoot_C_Add_Badges_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Add Next Badge
struct UResults_BadgeLoot_C_Add_Next_Badge_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.OnConvertFinished
struct UResults_BadgeLoot_C_OnConvertFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.FinishedAddingBadges
struct UResults_BadgeLoot_C_FinishedAddingBadges_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ResultsBar_K2Node_ComponentBoundEvent_3_FinishedAddingBadgePoints__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ResultsBadgeLootBar_K2Node_ComponentBoundEvent_5_LeveledUp__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Zoom In Sequence
struct UResults_BadgeLoot_C_Zoom_In_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip To End Sequence
struct UResults_BadgeLoot_C_Skip_To_End_Sequence_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestIntroDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestIntroDone_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestProgressionDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestProgressionDone_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestResultFocusDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestResultFocusDone_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.HandleClientEvent_ChestOutroDone
struct UResults_BadgeLoot_C_HandleClientEvent_ChestOutroDone_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Skip
struct UResults_BadgeLoot_C_Skip_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_BadgeLoot_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.ExecuteUbergraph_Results_BadgeLoot
struct UResults_BadgeLoot_C_ExecuteUbergraph_Results_BadgeLoot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue12;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue123;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1234;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue12345;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue123456;              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1234567;             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue12345678;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable;           // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable;           // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_A_Execution_Happened_Variable1;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_B_Execution_Happened_Variable1;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidItem_HasValidItem;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidItem_HasValidItem1;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidItem_HasValidItem12;              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D45[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_Badge_C*                      CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidItem_HasValidItem123;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue123456789;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D46[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      CallFunc_Array_Get_Item1;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidItem_HasValidItem1234;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidItem_HasValidItem12345;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue12345678910;         // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D47[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource123;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus123;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent123;           // 0x58(0x20)(ConstParm, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource12;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus12;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent12;            // 0x88(0x20)(ConstParm, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource1;             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus1;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent1;             // 0xB8(0x20)(ConstParm, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0xE8(0x20)(ConstParm, NoDestructor)
	bool                                         CallFunc_HasMoreBadgesToShow_bMoreBadgesToShow;    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_BadgeLoot.Results_BadgeLoot_C.Finished__DelegateSignature
struct UResults_BadgeLoot_C_Finished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
