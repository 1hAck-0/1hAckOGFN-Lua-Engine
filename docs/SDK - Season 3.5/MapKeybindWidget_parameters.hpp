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

// 0x148 (0x148 - 0x0)
// Function MapKeybindWidget.MapKeybindWidget_C.UpdateKeybindWidget
struct UMapKeybindWidget_C_UpdateKeybindWidget_Params
{
public:
	class UTexture2D*                            PCIcon;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            XB1Icon;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PS4Icon;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                CallFunc_GetCurrentGamepadType_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0x88)()
	class UTexture2D*                            K2Node_Select_Default;                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0xC0(0x88)()
};

// 0x0 (0x0 - 0x0)
// Function MapKeybindWidget.MapKeybindWidget_C.Construct
struct UMapKeybindWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MapKeybindWidget.MapKeybindWidget_C.Destruct
struct UMapKeybindWidget_C_Destruct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function MapKeybindWidget.MapKeybindWidget_C.ExecuteUbergraph_MapKeybindWidget
struct UMapKeybindWidget_C_ExecuteUbergraph_MapKeybindWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
