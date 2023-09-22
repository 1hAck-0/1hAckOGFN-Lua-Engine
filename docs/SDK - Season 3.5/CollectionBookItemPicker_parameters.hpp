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

// 0x27 (0x27 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
struct UCollectionBookItemPicker_C_Get_Type_Text_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Type;                                              // 0x8(0x18)(Parm, OutParm)
	enum class EFortInventoryFilter              CallFunc_GetFilterCategory_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue123;       // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1234;      // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
struct UCollectionBookItemPicker_C_HandleCommitAction_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryCommitSelectedItem_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
struct UCollectionBookItemPicker_C_HandleItemSelected_Params
{
public:
	class UObject*                               ItemSelected;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
struct UCollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaitingForLatentActionCompletion;                 // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle WaitingDialogHandle;                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Construct
struct UCollectionBookItemPicker_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
struct UCollectionBookItemPicker_C_ShowSlotItemConfirmation_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x571 (0x571 - 0x0)
// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
struct UCollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle Temp_struct_Variable;                              // 0x4(0x4)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class UFortItem*                             K2Node_CustomEvent_SelectedItem;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDONOTUSE_C*                           CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionData                CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x2D8)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWaitingForLatentActionCompletion; // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle K2Node_CustomEvent_WaitingDialogHandle;            // 0x334(0x4)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x338(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x348(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue1;             // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCollectionBookRecycleSlotResultsWidget_C* CallFunc_Create_ReturnValue1;                      // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_GetCurrentSlottedItem_ReturnValue;        // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_GetCurrentSlottedItem_ReturnValue1;       // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue;              // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetSelectedItem_ReturnValue1;             // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Type_Text_Type;                       // 0x390(0x18)()
	class FText                                  CallFunc_Get_Type_Text_Type1;                      // 0x3A8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3C0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x400(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x440(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0x450(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x460(0x18)()
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0x478(0x18)()
	struct FConfirmationDialogAction             K2Node_MakeStruct_ConfirmationDialogAction;        // 0x490(0xC8)()
	TArray<struct FConfirmationDialogAction>     K2Node_MakeArray_Array12;                          // 0x558(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue; // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
