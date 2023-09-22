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

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.DoesItemHaveChildren
struct UOptionsMenuInputOneKey_C_DoesItemHaveChildren_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetIndentLevel
struct UOptionsMenuInputOneKey_C_GetIndentLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.IsItemExpanded
struct UOptionsMenuInputOneKey_C_IsItemExpanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetData
struct UOptionsMenuInputOneKey_C_GetData_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetClearButtonVisibility
struct UOptionsMenuInputOneKey_C_SetClearButtonVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnFocusReceived
struct UOptionsMenuInputOneKey_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center on Widget
struct UOptionsMenuInputOneKey_C_Center_on_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetExpanded
struct UOptionsMenuInputOneKey_C_SetExpanded_Params
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetIndexInList
struct UOptionsMenuInputOneKey_C_SetIndexInList_Params
{
public:
	int32                                        InIndexInList;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetSelected
struct UOptionsMenuInputOneKey_C_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ToggleExpansion
struct UOptionsMenuInputOneKey_C_ToggleExpansion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Reset
struct UOptionsMenuInputOneKey_C_Reset_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetData
struct UOptionsMenuInputOneKey_C_SetData_Params
{
public:
	class UObject*                               InData;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       OwningList;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseLeave
struct UOptionsMenuInputOneKey_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseEnter
struct UOptionsMenuInputOneKey_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.RegisterOnClicked
struct UOptionsMenuInputOneKey_C_RegisterOnClicked_Params
{
public:
	UDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuInputOneKey_C_Private_OnExpanderArrowShiftClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnReleaseToPool
struct UOptionsMenuInputOneKey_C_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnAcquireFromPool
struct UOptionsMenuInputOneKey_C_OnAcquireFromPool_Params
{
public:
};

// 0x1D8 (0x1D8 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ExecuteUbergraph_OptionsMenuInputOneKey
struct UOptionsMenuInputOneKey_C_ExecuteUbergraph_OptionsMenuInputOneKey_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_InData;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                       K2Node_Event_OwningList;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsMenuInputData*             K2Node_DynamicCast_AsFort_Options_Menu_Input_Data; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         K2Node_Event_bSelected;                            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
	int32                                        K2Node_Event_InIndexInList;                        // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bExpanded;                            // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent1;                          // 0xA0(0x70)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x110(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x148(0x70)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_Event_Callback;                             // 0x1C8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.UnbindClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_UnbindClicked__DelegateSignature_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuInputOneKey_C*             Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_Input_Clicked__DelegateSignature_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Primary_Button;                                 // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
