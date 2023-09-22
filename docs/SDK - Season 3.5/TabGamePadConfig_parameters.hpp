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

// 0x6 (0x6 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.IsCustomConfig
struct UTabGamePadConfig_C_IsCustomConfig_Params
{
public:
	int32                                        PresetIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.SetInputEnabled
struct UTabGamePadConfig_C_SetInputEnabled_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumItems_ReturnValue;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetListWidget_ReturnValue;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuInputOneKey_C*             K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.OverlayKeyPressed
struct UTabGamePadConfig_C_OverlayKeyPressed_Params
{
public:
	struct FKey                                  NewKey;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue1;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A94[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetListWidget_ReturnValue;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenuInputOneKey_C*             K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x84 (0x84 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamepadMappingInfoChange
struct UTabGamePadConfig_C_HandleGamepadMappingInfoChange_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0(0x28)(HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue1; // 0x28(0x28)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomConfig_ReturnValue;               // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0x58(0x28)(ConstParm, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Handle Mode Toggled
struct UTabGamePadConfig_C_Handle_Mode_Toggled_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Update Data
struct UTabGamePadConfig_C_Update_Data_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentInputPresetName_ReturnValue;    // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetControllerPlatform_ReturnValue;        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue1;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x146 (0x146 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Initialize Data
struct UTabGamePadConfig_C_Initialize_Data_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames; // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x48(0x18)()
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x70(0x18)()
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0xA0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  K2Node_Select_Default;                             // 0xB0(0x18)()
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue1;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1; // 0xD8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1; // 0xE8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0xF8(0x18)()
	class FText                                  CallFunc_Array_Get_Item;                           // 0x110(0x18)()
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item1;                          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue1;           // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.UpdateOptionsTab
struct UTabGamePadConfig_C_UpdateOptionsTab_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.GamepadPlatformConfigChanged
struct UTabGamePadConfig_C_GamepadPlatformConfigChanged_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Gamepad Config Changed
struct UTabGamePadConfig_C_Gamepad_Config_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.ClearAndConstructKeybindList
struct UTabGamePadConfig_C_ClearAndConstructKeybindList_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.CenterOnTab
struct UTabGamePadConfig_C_CenterOnTab_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature
struct UTabGamePadConfig_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.InputClicked_Bind
struct UTabGamePadConfig_C_InputClicked_Bind_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Primary_Button;                                 // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Configuration Changed
struct UTabGamePadConfig_C_Configuration_Changed_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.HandleGamePadToggleMode
struct UTabGamePadConfig_C_HandleGamePadToggleMode_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Unclicked_Bind
struct UTabGamePadConfig_C_Unclicked_Bind_Params
{
public:
	int32                                        Number_in_List;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuInputOneKey_C*             Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
struct UTabGamePadConfig_C_BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params
{
public:
	int32                                        Selected_Index;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.DoResetToDefault
struct UTabGamePadConfig_C_DoResetToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.DoNotResetToDefault
struct UTabGamePadConfig_C_DoNotResetToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.Construct
struct UTabGamePadConfig_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.TrySetInputEnabled
struct UTabGamePadConfig_C_TrySetInputEnabled_Params
{
public:
};

// 0x151 (0x151 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.ExecuteUbergraph_TabGamePadConfig
struct UTabGamePadConfig_C_ExecuteUbergraph_TabGamePadConfig_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor)
	bool                                         CallFunc_IsPS4Platform_ReturnValue;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsXboxPlatform_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Selected_Index12;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x58(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_CustomEvent_Selected_Index1;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Number_In_List1;                // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Is_Primary_Button;              // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptionsMenuInputOneKey_C*             K2Node_DynamicCast_AsOptions_Menu_Input_One_Key;   // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xA0(0x18)()
	int32                                        K2Node_CustomEvent_Selected_Index;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Number_in_List;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsMenuInputOneKey_C*             K2Node_CustomEvent_Widget;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue12;                 // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable1;                             // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selected_Index;         // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item1;                          // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                K2Node_Select1_Default;                            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRefreshPending_ReturnValue;             // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x140(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasCustomGamepadBindingChanges_ReturnValue; // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.ShowResetToDefaultMessage__DelegateSignature
struct UTabGamePadConfig_C_ShowResetToDefaultMessage__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.GamepadMappingInfoChanged__DelegateSignature
struct UTabGamePadConfig_C_GamepadMappingInfoChanged__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function TabGamePadConfig.TabGamePadConfig_C.EnableGamepadInputOverlay__DelegateSignature
struct UTabGamePadConfig_C_EnableGamepadInputOverlay__DelegateSignature_Params
{
public:
	bool                                         AcceptInput;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverlayText;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
