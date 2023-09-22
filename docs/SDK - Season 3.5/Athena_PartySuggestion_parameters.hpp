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

// 0x3A (0x3A - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetupMIDReferences
struct UAthena_PartySuggestion_C_SetupMIDReferences_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1234; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1234;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.SetMainMIDs
struct UAthena_PartySuggestion_C_SetMainMIDs_Params
{
public:
	class UMaterialInstanceDynamic*              BorderMID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TailMID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SparklesMID;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_Cur_Border_L;                                   // 0x18(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_CurBorder_R;                                    // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurMIDScalar_ShapeChange;                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue1;  // 0x50(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitPhysAnim
struct UAthena_PartySuggestion_C_InitPhysAnim_Params
{
public:
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState;                // 0x0(0x8)(NoDestructor)
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState1;               // 0x8(0x8)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitMIDs
struct UAthena_PartySuggestion_C_InitMIDs_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.InitNewPartySuggestion
struct UAthena_PartySuggestion_C_InitNewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  NewPartySuggestion;                                // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x218 (0x218 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnMouseButtonDown_0
struct UAthena_PartySuggestion_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.NewPartySuggestion
struct UAthena_PartySuggestion_C_NewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  Party_Suggestion_Struct;                           // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdateDisplay
struct UAthena_PartySuggestion_C_UpdateDisplay_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.UpdatePartySuggestion
struct UAthena_PartySuggestion_C_UpdatePartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  PartySuggestionStruct;                             // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayOutro
struct UAthena_PartySuggestion_C_PlayOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.HidePartySuggestion
struct UAthena_PartySuggestion_C_HidePartySuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnUnhovered
struct UAthena_PartySuggestion_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnHovered
struct UAthena_PartySuggestion_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PlayIntro
struct UAthena_PartySuggestion_C_PlayIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.DismissSuggestion
struct UAthena_PartySuggestion_C_DismissSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ClobberSuggestion
struct UAthena_PartySuggestion_C_ClobberSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ForceAcceptSuggestion
struct UAthena_PartySuggestion_C_ForceAcceptSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Construct
struct UAthena_PartySuggestion_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
struct UAthena_PartySuggestion_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.Tick
struct UAthena_PartySuggestion_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PreConstruct
struct UAthena_PartySuggestion_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3E8 (0x3E8 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.ExecuteUbergraph_Athena_PartySuggestion
struct UAthena_PartySuggestion_C_ExecuteUbergraph_Athena_PartySuggestion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_455D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x40(0x18)()
	class FText                                  Temp_text_Variable123;                             // 0x58(0x18)()
	class FText                                  Temp_text_Variable1234;                            // 0x70(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable12;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable123;                              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_455F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable1234;                             // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4560[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSocialItem*>               CallFunc_Map_Values_Values;                        // 0xA0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Variable12;                              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialItem*                       CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable12345;                            // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4562[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentPlatform_ReturnValue;           // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xD8(0x18)()
	int32                                        Temp_int_Variable123456;                           // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4563[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable123;                             // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1234;                            // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12345;                           // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4564[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable123456;                          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4565[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x10C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable1;                             // 0x11C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1234567;                         // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4566[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable12345;                           // 0x130(0x18)()
	class FText                                  Temp_text_Variable123456;                          // 0x148(0x18)()
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue1;                  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4567[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPartySuggestion                  K2Node_CustomEvent_Party_Suggestion_Struct;        // 0x170(0x80)()
	struct FFortPartySuggestion                  K2Node_CustomEvent_PartySuggestionStruct;          // 0x1F0(0x80)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4568[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x280(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x290(0x8)(NoDestructor)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable1234567;                          // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_DateTimeMinValue_ReturnValue;             // 0x2A0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select1_Default;                            // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12345678;                        // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select12_Default;                           // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2C8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select123_Default;                          // 0x310(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x328(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x368(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x378(0x18)()
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4570[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FloatSpringInterp_ReturnValue;            // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4571[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select1234_Default;                         // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select12345_Default;                        // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_Select123456_Default;                       // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_Select1234567_Default;                      // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select12345678_Default;                     // 0x3B8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue1;              // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4572[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select123456789_Default;                    // 0x3D0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.OnSuggestionMouseDown__DelegateSignature
struct UAthena_PartySuggestion_C_OnSuggestionMouseDown__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion.Athena_PartySuggestion_C.PartyFocused__DelegateSignature
struct UAthena_PartySuggestion_C_PartyFocused__DelegateSignature_Params
{
public:
	class UAthena_LFG_SuggestedPartyItem_C*      FocusedPartyItem;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
