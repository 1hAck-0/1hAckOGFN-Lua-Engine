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

// 0x11A (0x11A - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitFocalLengthOptions
struct UFortReplayLensSettingsTab_C_InitFocalLengthOptions_Params
{
public:
	float                                        CurrentFocalLength;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDoInsert;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4871[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InFocalLength;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable1;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue1;         // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4872[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x28(0x18)()
	float                                        CallFunc_Array_Get_Item;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x48(0x18)()
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue1;            // 0x60(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x78(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x98(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)()
	float                                        CallFunc_Array_Get_Item1;                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4874[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4875[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusDistanceWidget
struct UFortReplayLensSettingsTab_C_SetFocusDistanceWidget_Params
{
public:
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)()
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusVisibility
struct UFortReplayLensSettingsTab_C_SetFocusVisibility_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4876[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetExposureVisibility
struct UFortReplayLensSettingsTab_C_SetExposureVisibility_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4877[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetWidgetValues
struct UFortReplayLensSettingsTab_C_SetWidgetValues_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnActivated
struct UFortReplayLensSettingsTab_C_OnActivated_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnCameraTypeChanged
struct UFortReplayLensSettingsTab_C_OnCameraTypeChanged_Params
{
public:
	class AFortPlayerControllerSpectating*       FortPlayerControllerSpectating;                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpectatorCameraType              CameraType;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ResetToDefault
struct UFortReplayLensSettingsTab_C_ResetToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.CenterOnTab
struct UFortReplayLensSettingsTab_C_CenterOnTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.PreConstruct
struct UFortReplayLensSettingsTab_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitializeWidgets
struct UFortReplayLensSettingsTab_C_InitializeWidgets_Params
{
public:
};

// 0x250 (0x250 - 0x0)
// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ExecuteUbergraph_FortReplayLensSettingsTab
struct UFortReplayLensSettingsTab_C_ExecuteUbergraph_FortReplayLensSettingsTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4878[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1; // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4879[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12; // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_487A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x38(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_MakeArray_Array1;                           // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123; // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x6C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue1;                // 0x78(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue1;             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue12;            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_487B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue1;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1234; // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_487C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index123;      // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_487D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index12;       // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue1;              // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_487E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0xB0(0x18)()
	float                                        K2Node_ComponentBoundEvent_Slider_Value123;        // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue123;           // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value12;         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_487F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue1;                     // 0xD8(0x18)()
	float                                        CallFunc_MapRangeClamped_ReturnValue1234;          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4880[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue12;                    // 0xF8(0x18)()
	float                                        K2Node_ComponentBoundEvent_Slider_Value1;          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value;           // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12345; // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue12345;         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12345;                 // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4881[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerControllerSpectating*       K2Node_Event_FortPlayerControllerSpectating;       // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpectatorCameraType              K2Node_Event_CameraType;                           // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4882[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123456; // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456;                // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4883[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MapRangeClamped_ReturnValue123456;        // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1234567; // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue1234567;       // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234567;               // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index1;        // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4885[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x168(0x18)()
	float                                        CallFunc_Array_Get_Item;                           // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x188(0x18)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array12;                          // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1F8(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x210(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue12;             // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x225(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4887[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Selected_Index;         // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4888[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12345678; // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12345678;              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4889[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSpectatorCameraComponent*         CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123456789; // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue1;                  // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789;             // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue123;            // 0x24D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue12;                // 0x24E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x24F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
