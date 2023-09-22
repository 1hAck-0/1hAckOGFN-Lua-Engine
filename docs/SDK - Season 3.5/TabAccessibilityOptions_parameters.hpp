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

// 0x38 (0x38 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.Initialize Data
struct UTabAccessibilityOptions_C_Initialize_Data_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array1;                           // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x34 (0x34 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.Update Data
struct UTabAccessibilityOptions_C_Update_Data_Params
{
public:
	enum class EColorBlindMode                   Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable12;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable123;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable1234;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable12345;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   CallFunc_GetColorBlindMode_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetColorBlindStrength_ReturnValue;        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHearingImpairedMode_ReturnValue;       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select1_Default;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.Construct
struct UTabAccessibilityOptions_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.UpdateOptionsTab
struct UTabAccessibilityOptions_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.CenterOnTab
struct UTabAccessibilityOptions_C_CenterOnTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature
struct UTabAccessibilityOptions_C_BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.BndEvt__ColorBlindMode_K2Node_ComponentBoundEvent_11_Selection Changed__DelegateSignature
struct UTabAccessibilityOptions_C_BndEvt__ColorBlindMode_K2Node_ComponentBoundEvent_11_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.BndEvt__HearingImpairedMode_K2Node_ComponentBoundEvent_13_Selection Changed__DelegateSignature
struct UTabAccessibilityOptions_C_BndEvt__HearingImpairedMode_K2Node_ComponentBoundEvent_13_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function TabAccessibilityOptions.TabAccessibilityOptions_C.ExecuteUbergraph_TabAccessibilityOptions
struct UTabAccessibilityOptions_C_ExecuteUbergraph_TabAccessibilityOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHearingImpairedFeatureAvailable_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   Temp_byte_Variable1;                               // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   Temp_byte_Variable12;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   Temp_byte_Variable123;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1234;                            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable12345;                           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value;           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index1;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index;         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EColorBlindMode                   K2Node_Select1_Default;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
