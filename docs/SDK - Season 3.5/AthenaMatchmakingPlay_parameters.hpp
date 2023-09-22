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

// 0x68 (0x68 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
struct UAthenaMatchmakingPlay_C_OpenPlayOptions_Params
{
public:
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x8(0x10)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin1;                         // 0x1C(0x10)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_Select_Default;                             // 0x4C(0x10)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
struct UAthenaMatchmakingPlay_C_FillChange_Params
{
public:
	bool                                         bDirection;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
struct UAthenaMatchmakingPlay_C_PlaylistChange_Params
{
public:
	bool                                         bDirection;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
struct UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params
{
public:
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
struct UAthenaMatchmakingPlay_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
struct UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
struct UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
struct UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params
{
public:
	bool                                         bShowPlayButton;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
struct UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params
{
public:
	class FText                                  PlayButtonText;                                    // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
struct UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params
{
public:
	class FText                                  CancelButtonText;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x100 (0x100 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
struct UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_CancelButtonText;                     // 0x8(0x18)(ConstParm)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button1;            // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Value1;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12;               // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowPlayButton;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator;               // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRotator_C*                      K2Node_DynamicCast_AsAthena_Rotator1;              // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB8(0x10)(IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue1;       // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin1;                         // 0xD0(0x10)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue12;                   // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_PlayButtonText;                       // 0xE8(0x18)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
struct UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
