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

// 0x2C (0x2C - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleFavorite
struct UAthenaCustomizationTab_C_HandleFavorite_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFavorite_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterFavorite
struct UAthenaCustomizationTab_C_RegisterFavorite_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetItemDetailsToDisplay
struct UAthenaCustomizationTab_C_SetItemDetailsToDisplay_Params
{
public:
	class UFortItem*                             InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  DescriptionText;                                   // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSingleLineDescription_ReturnValue;     // 0x48(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x60(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x80(0x18)()
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x98(0x80)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue1;      // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetHeaderToBanner
struct UAthenaCustomizationTab_C_SetHeaderToBanner_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetupBanner
struct UAthenaCustomizationTab_C_SetupBanner_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x18(0x28)(HasGetValueTypeHash)
};

// 0x129 (0x129 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowVaultItemByCategory
struct UAthenaCustomizationTab_C_ShowVaultItemByCategory_Params
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubslotIndex;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanShowEmpty;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetFavoriteItemForCategory_ReturnValue;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetGameAccountId_ReturnValue;             // 0x30(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpProfileAthena*                 CallFunc_GetAthenaProfile_ReturnValue;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCharacterItemDefinition*        CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue12;                 // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue123;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortAthenaLoadout                    CallFunc_GetLoadoutForPlayer_ReturnValue;          // 0xA0(0x88)()
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5C (0x5C - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotHovered
struct UAthenaCustomizationTab_C_HandleSlotHovered_Params
{
public:
	enum class EAthenaCustomizationCategory      Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HeaderText;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  DescriptionText;                                   // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        SubslotIndex;                                      // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetFavoriteItemForCategory_ReturnValue;   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
struct UAthenaCustomizationTab_C_SelectFirstWidget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowSavingModal
struct UAthenaCustomizationTab_C_ShowSavingModal_Params
{
public:
	class UFortUIManagerWidget_NUI*              UIManager;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)(ConstParm)
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x38(0x88)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                CallFunc_Create_ReturnValue;                       // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
struct UAthenaCustomizationTab_C_RefreshInputActions_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable1234;                            // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable12345;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x18(0x10)(NoDestructor)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle1;             // 0x30(0x10)(NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle12;            // 0x48(0x10)(NoDestructor)
	enum class EInputActionState                 K2Node_Select12_Default;                           // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
struct UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
struct UAthenaCustomizationTab_C_EndPickingCustomization_Params
{
public:
	bool                                         RestoreFocus;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
struct UAthenaCustomizationTab_C_BeginPickingCustomization_Params
{
public:
	enum class EAthenaCustomizationCategory      Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         WidgetToReturnFocusTo;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Subslot_Index;                                     // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaCustomizationCategory      NewLocalVar_0;                                     // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
struct UAthenaCustomizationTab_C_RegisterInputActions_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
struct UAthenaCustomizationTab_C_RegisterCancel_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
struct UAthenaCustomizationTab_C_HandleCancel_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_GetFavoriteItemForCategory_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
struct UAthenaCustomizationTab_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
struct UAthenaCustomizationTab_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
struct UAthenaCustomizationTab_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
struct UAthenaCustomizationTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Destruct
struct UAthenaCustomizationTab_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationTab_C_BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
struct UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable12;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable123;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue12;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue123;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item1;                          // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1234;             // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBannerSelectModal_C*            CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123;              // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item12;                         // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue12;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue12;                // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item123;                        // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue123;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue123;               // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_ComponentBoundEvent_SelectedItem;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12;               // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleCancel_PassThrough;                 // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryCommitSelectedItem_ReturnValue;        // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaCustomizationSlotButtonWrapper_C*> K2Node_MakeArray_Array;                            // 0xF8(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
