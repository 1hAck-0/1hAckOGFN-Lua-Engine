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

// 0x458 (0x458 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
struct UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params
{
public:
	struct FSlateBrush                           Temp_struct_Variable;                              // 0x0(0x88)()
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Temp_struct_Variable1;                             // 0x90(0x88)()
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                CallFunc_GetCurrentGamepadType_ReturnValue;        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable1;                               // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x128(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x1B0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush12;                    // 0x238(0x88)()
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x2C0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush123;                   // 0x348(0x88)()
	struct FSlateBrush                           K2Node_Select1_Default;                            // 0x3D0(0x88)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
struct UAthenaSpectatorScoreboard_C_UpdateListUI_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
struct UAthenaSpectatorScoreboard_C_ResetFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
struct UAthenaSpectatorScoreboard_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
struct UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
