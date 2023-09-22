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

// 0xA (0xA - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
struct UItemInspectScreen_C_RefreshItemViewHandlerStates_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable12;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable123;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ZoomAllowed_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RotateAllowed_ReturnValue;                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select1_Default;                            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
struct UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityInputState
struct UItemInspectScreen_C_GetUpgradeRarityInputState_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasRarityUpgrade_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue12;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
struct UItemInspectScreen_C_GetFavoriteInputState_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionInputState
struct UItemInspectScreen_C_GetEvolutionInputState_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasEvolutions_ReturnValue;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
struct UItemInspectScreen_C_GetViewInputState_Params
{
public:
	enum class EInputActionState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HideDisableAllInputActions
struct UItemInspectScreen_C_HideDisableAllInputActions_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
struct UItemInspectScreen_C_HandleUpgradeItemRarity_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x312 (0x312 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
struct UItemInspectScreen_C_RefreshExtraDetailsTabs_Params
{
public:
	class FName                                  SelectedTabId;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTabCount_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetSelectedTabId_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectTabByID_ReturnValue1;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTabCount_ReturnValue1;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortAlterationSlotStatus>     CallFunc_GetAlterationSlots_ReturnValue;           // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue1;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue12;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero;                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo;          // 0x60(0xA0)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue;              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorker*                           K2Node_DynamicCast_AsFort_Worker;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             K2Node_DynamicCast_AsFort_Hero1;                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSchematic_ReturnValue;                  // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo1;         // 0x128(0xA0)()
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo12;        // 0x1C8(0xA0)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue1;             // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo123;       // 0x270(0xA0)()
	bool                                         CallFunc_RegisterFortTab_ReturnValue12;            // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RegisterFortTab_ReturnValue123;           // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
struct UItemInspectScreen_C_OnItemCycleChangedItem_Params
{
public:
	class UFortItem*                             NewItemToRepresent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Passthrough
struct UItemInspectScreen_C_Passthrough_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
struct UItemInspectScreen_C_SetInspectModeForChildPanels_Params
{
public:
	enum class EFortItemInspectionMode           NewInspectMode;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
struct UItemInspectScreen_C_SetTabButtonStyle_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
struct UItemInspectScreen_C_ShowPreviewHeader_Params
{
public:
	bool                                         ShowPreviewLabel;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
struct UItemInspectScreen_C_RefreshCallout_Params
{
public:
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
struct UItemInspectScreen_C_RefreshActionHandlers_Params
{
public:
	class UFortItemInspectCycleWidget*           CallFunc_GetCycleWidget_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 CallFunc_GetUpgradeRarityInputState_ReturnValue;   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 CallFunc_GetFavoriteInputState_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 CallFunc_GetEvolutionInputState_ReturnValue;       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 CallFunc_GetViewInputState_ReturnValue;            // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x25 (0x25 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
struct UItemInspectScreen_C_HandleEvolutionComplete_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> ResultingItems;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FFortItemInstanceQuantityPair         CallFunc_Array_Get_Item;                           // 0x10(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
struct UItemInspectScreen_C_RefreshOnUpgrade_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
struct UItemInspectScreen_C_HandleCursorModeChanging_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
struct UItemInspectScreen_C_OpenItemInspect__Function__Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowFavoriting;                             // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldShowPreviewDisplay;                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Allow_Rarity_Upgrading;                            // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
struct UItemInspectScreen_C_ResetDetailsPanel_Params
{
public:
};

// 0x128 (0x128 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
struct UItemInspectScreen_C_SetupActionHandlers_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle1;             // 0x30(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle12;            // 0x40(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x60(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle123;           // 0x70(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle1234;          // 0x90(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle12345;         // 0xA0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle123456;        // 0xD0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle1234567;       // 0xF0(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0x100(0x10)(ZeroConstructor, NoDestructor)
	enum class EInputActionState                 CallFunc_GetUpgradeRarityInputState_ReturnValue;   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle12345678;      // 0x118(0x10)(NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
struct UItemInspectScreen_C_GetFirstEvolutionOption_Params
{
public:
	class UFortItem*                             EvolutionItem;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         Results;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemQuantityPair                 CallFunc_Array_Get_Item;                           // 0x48(0x30)()
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemFromItemQuantityPair_ReturnValue;  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe>                       CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue; // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRecipe                               CallFunc_Array_Get_Item1;                          // 0xA0(0x58)()
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue1;              // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
struct UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
struct UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
struct UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
struct UItemInspectScreen_C_SetInspectMode_Params
{
public:
	enum class EFortItemInspectionMode           NewInspectMode;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
struct UItemInspectScreen_C_HandleUpgrade_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
struct UItemInspectScreen_C_HandleEvolution_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
struct UItemInspectScreen_C_HandleView_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
struct UItemInspectScreen_C_HandleFavorite_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFavorite_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
struct UItemInspectScreen_C_HandleBack_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
struct UItemInspectScreen_C_SetItemToRepresent_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
struct UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bItemChanged;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoChanged;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIngredientsChanged;                               // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
struct UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
struct UItemInspectScreen_C_OnActivated_Params
{
public:
};

// 0xE (0xE - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
struct UItemInspectScreen_C_OpenItemInspect_Params
{
public:
	class UFortItem*                             ItemToInspect;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           Mode;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAllowUpgrading;                              // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowEvolution;                              // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldAllowFavorite;                               // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsTemporaryItem;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAllowRarityUpgrading;                             // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
struct UItemInspectScreen_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
struct UItemInspectScreen_C_OnDeactivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
struct UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
struct UItemInspectScreen_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndex;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.Construct
struct UItemInspectScreen_C_Construct_Params
{
public:
};

// 0x160 (0x160 - 0x0)
// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
struct UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue12;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue123;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue1234;               // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12345;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue123456;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bItemChanged;           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bAmmoChanged;           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bIngredientsChanged;    // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough1;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue1234567;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_ComponentBoundEvent_Item1;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_RecipeIndex1;           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue12345678;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_ItemToInspect;                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemInspectionMode           K2Node_Event_Mode;                                 // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ShouldAllowUpgrading;                 // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_ShouldAllowEvolution;                 // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_ShouldAllowFavorite;                  // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsTemporaryItem;                      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAllowRarityUpgrading;                // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue123456789;          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x88(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HandleUpgrade_PassThrough;                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxLevel_ReturnValue;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleEvolution_PassThrough;              // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemView_C*                           CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue12345678910;        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue;                  // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemInspectCycleWidget*           CallFunc_GetCycleWidget_ReturnValue;               // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x100(0x10)(ZeroConstructor, NoDestructor)
	class UFortItemInspectCycleWidget*           CallFunc_GetCycleWidget_ReturnValue1;              // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x118(0x10)(ZeroConstructor, NoDestructor)
	class UFortItem*                             K2Node_ComponentBoundEvent_Item;                   // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_RecipeIndex;            // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x138(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x148(0x10)(ZeroConstructor, NoDestructor)
	class UFortItemInspectCycleWidget*           CallFunc_GetCycleWidget_ReturnValue12;             // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
