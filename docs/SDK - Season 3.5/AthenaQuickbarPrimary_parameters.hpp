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

// 0x13 (0x13 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.UpdateQuickBarCaching
struct UAthenaQuickbarPrimary_C_UpdateQuickBarCaching_Params
{
public:
	bool                                         DesireCaching;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
struct UAthenaQuickbarPrimary_C_HandleShowHideWeaponRail_Params
{
public:
	bool                                         CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
struct UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params
{
public:
	bool                                         HasNonHarvestWeapon;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuickbarSlot_C*                       CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
struct UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
struct UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
struct UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
struct UAthenaQuickbarPrimary_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
struct UAthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind_Params
{
public:
	enum class EFortQuickBars                    QuickbarIndex;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_393E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Slot;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
struct UAthenaQuickbarPrimary_C_Maximize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
struct UAthenaQuickbarPrimary_C_Minimize_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
struct UAthenaQuickbarPrimary_C_OnQuickbarContentsChanged_Params
{
public:
	enum class EFortQuickBars                    QuickbarIndex;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_393F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ChangedSlots;                                      // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
struct UAthenaQuickbarPrimary_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.AnimationFinished
struct UAthenaQuickbarPrimary_C_AnimationFinished_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
struct UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3940[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor)
	enum class EFortQuickBars                    K2Node_CustomEvent_QuickbarIndex;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3941[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Slot;                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3942[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue12;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x70(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortQuickBars                    K2Node_Event_QuickbarIndex;                        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_Event_ChangedSlots;                         // 0x88(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UQuickbarSlot_C*>               K2Node_MakeArray_Array;                            // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue123;                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuickBars                    CallFunc_GetQuickbarFocus_OutQuickBar;             // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3945[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetQuickbarFocus_OutSlot;                 // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetQuickbarFocus_OutSecondarySlot;        // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;  // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
