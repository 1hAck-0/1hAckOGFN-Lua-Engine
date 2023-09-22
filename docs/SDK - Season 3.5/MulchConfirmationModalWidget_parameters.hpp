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

// 0x2F4 (0x2F4 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.UpdateWarningsList
struct UMulchConfirmationModalWidget_C_UpdateWarningsList_Params
{
public:
	int32                                        TotalWarnings;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EItemRecyclingWarning, int32> WarningsMap;                                       // 0x8(0x50)(Edit, BlueprintVisible, ZeroConstructor)
	class FText                                  Temp_text_Variable;                                // 0x58(0x18)()
	enum class EItemRecyclingWarning             Temp_byte_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable1;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x90(0x18)()
	class FText                                  Temp_text_Variable123;                             // 0xA8(0x18)()
	class FText                                  Temp_text_Variable1234;                            // 0xC0(0x18)()
	TMap<enum class EItemRecyclingWarning, int32> K2Node_MakeVariable_MakeVariableOutput;            // 0xD8(0x50)(ZeroConstructor)
	TArray<enum class EItemRecyclingWarning>     CallFunc_Map_Keys_Keys;                            // 0x128(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemRecyclingWarning             CallFunc_Array_Get_Item;                           // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CEC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x148(0x18)()
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EItemRecyclingWarning, int32> CallFunc_GetMulchWarnings_ReturnValue;             // 0x168(0x50)(ZeroConstructor)
	class FText                                  Temp_text_Variable12345;                           // 0x1B8(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1D8(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CEF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x220(0x18)()
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x238(0x10)(IsPlainOldData, NoDestructor)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x248(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x288(0x10)(ZeroConstructor, ReferenceParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2A0(0x18)()
	class UMulchWarning_C*                       CallFunc_Create_ReturnValue;                       // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select12_Default;                           // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CF1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x2D8(0x18)()
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UMulchConfirmationModalWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.Construct
struct UMulchConfirmationModalWidget_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.PreConstruct
struct UMulchConfirmationModalWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.UpdateConfirmationModal_BP
struct UMulchConfirmationModalWidget_C_UpdateConfirmationModal_BP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.OnActivated
struct UMulchConfirmationModalWidget_C_OnActivated_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_8_OnListViewItemSelected__DelegateSignature
struct UMulchConfirmationModalWidget_C_BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_8_OnListViewItemSelected__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UMulchConfirmationModalWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_21_OnListViewItemClicked__DelegateSignature
struct UMulchConfirmationModalWidget_C_BndEvt__RecycleItemTileView_K2Node_ComponentBoundEvent_21_OnListViewItemClicked__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x261 (0x261 - 0x0)
// Function MulchConfirmationModalWidget.MulchConfirmationModalWidget_C.ExecuteUbergraph_MulchConfirmationModalWidget
struct UMulchConfirmationModalWidget_C_ExecuteUbergraph_MulchConfirmationModalWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable1;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable12;                              // 0x58(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemManagementMulchDetailsPanel_C*    K2Node_DynamicCast_AsItem_Management_Mulch_Details_Panel; // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable123;                             // 0x90(0x18)()
	TArray<class UFortItem*>                     CallFunc_GetItemsToMulchBP_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xC0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x108(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x120(0x40)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12;                              // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x168(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)()
	class UObject*                               K2Node_ComponentBoundEvent_Item1;                  // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsSelected;            // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item;                    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue1;                  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAnyItemsAnimate_ReturnValue;           // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x1D0(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMulchWarning_C*>               CallFunc_Map_Values_Values;                        // 0x1F0(0x10)(ZeroConstructor, ReferenceParm)
	class UMulchWarning_C*                       CallFunc_Array_Get_Item;                           // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_DynamicCast_AsFort_Item1;                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             K2Node_Select12_Default;                           // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     K2Node_MakeArray_Array1;                           // 0x230(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<enum class EItemRecyclingWarning>     CallFunc_EnumerateRecyclingWarningsForItems_OutWarnings; // 0x240(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue12;               // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemRecyclingWarning             CallFunc_Array_Get_Item1;                          // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D00[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMulchWarning_C*                       CallFunc_Map_Find_Value;                           // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
