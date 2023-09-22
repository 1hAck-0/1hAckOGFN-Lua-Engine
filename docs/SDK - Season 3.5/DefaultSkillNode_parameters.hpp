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

// 0x50 (0x50 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
struct UDefaultSkillNode_C_SetBackgroundColor_Params
{
public:
	enum class ESkillTreePages                   Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreePages                   Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreePages                   Temp_byte_Variable12;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESkillTreeGroups                  Temp_byte_Variable123;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select1_Default;                            // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select12_Default;                           // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select123_Default;                          // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
struct UDefaultSkillNode_C_UpdateFromButtonState_Params
{
public:
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
struct UDefaultSkillNode_C_UpdateSelectionGlow_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
struct UDefaultSkillNode_C_UpdateHoverGlow_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
struct UDefaultSkillNode_C_StepSelectionGlowInterpolation_Params
{
public:
	float                                        TargetGlowPercentage;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_345E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_345F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
struct UDefaultSkillNode_C_StepHoverGlowInterpolation_Params
{
public:
	float                                        TargetGlowPercentage;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3460[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42F (0x42F - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
struct UDefaultSkillNode_C_UpdateFromNodeData_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHomebaseNodeMagnitude        Temp_byte_Variable123;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1234;                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3461[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable12345;                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3462[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSkillTreeNodeDisplayData         CallFunc_TryGetNodeDisplayData_OutDisplayData;     // 0x18(0x338)()
	bool                                         CallFunc_TryGetNodeDisplayData_ReturnValue;        // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3463[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseNode                         CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x358(0xC0)()
	bool                                         CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3464[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetSkillTreeNodeSizeByMagnitude_Size;     // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare; // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode; // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3465[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x424(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x42D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x42E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
struct UDefaultSkillNode_C_UpdateFromNodeState_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetSingleMaterialStyleMID_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHomebaseNodeState                    CallFunc_TryGetSkillTreeNodeState_OutNodeState;    // 0x8(0x8)(NoDestructor)
	bool                                         CallFunc_TryGetSkillTreeNodeState_ReturnValue;     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.Construct
struct UDefaultSkillNode_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.HandleSkillTreeNodeStateChanged
struct UDefaultSkillNode_C_HandleSkillTreeNodeStateChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
struct UDefaultSkillNode_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnUnhovered
struct UDefaultSkillNode_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnHovered
struct UDefaultSkillNode_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnSelected
struct UDefaultSkillNode_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.OnDeselected
struct UDefaultSkillNode_C_OnDeselected_Params
{
public:
};

// 0xF9 (0xF9 - 0x0)
// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
struct UDefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3466[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue1;                 // 0x10(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue12;                // 0x18(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue123;               // 0x20(0x8)(NoDestructor)
	struct FHomebaseNode                         CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData; // 0x28(0xC0)()
	bool                                         CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue; // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3467[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
