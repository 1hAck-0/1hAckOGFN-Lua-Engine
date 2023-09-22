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

// 0x19 (0x19 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get FortPC
struct UBP_ItemTransform_TabButton_C_Get_FortPC_Params
{
public:
	class AFortPlayerController*                 FortPC;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7D (0x7D - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Item from Transform Seen State
struct UBP_ItemTransform_TabButton_C_Get_Item_from_Transform_Seen_State_Params
{
public:
	class UFortAccountItem*                      Transform_Key;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      Item;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Catalyst_Tags;                                     // 0x10(0x20)(Edit, BlueprintVisible)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*  K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetRequiredCatalysts_ReturnValue;         // 0x48(0x20)()
	class AFortPlayerController*                 CallFunc_Get_FortPC_FortPC;                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseNodeItem*                 CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumGameplayTagsInContainer_ReturnValue; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Calculate Unseen Keys
struct UBP_ItemTransform_TabButton_C_Calculate_Unseen_Keys_Params
{
public:
	TArray<class UFortAccountItem*>              Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        NumUnseen;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalNumUnseen;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_Get_Item_from_Transform_Seen_State_Item;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
struct UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params
{
public:
	enum class EConversionControlKeyRequest      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
struct UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params
{
public:
	int32                                        NumUnseen;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EConversionControlKeyRequest      CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue;   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetTransformKeys_TransformKeys;           // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Calculate_Unseen_Keys_NumUnseen;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
struct UBP_ItemTransform_TabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
struct UBP_ItemTransform_TabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
struct UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
struct UBP_ItemTransform_TabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
struct UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
struct UBP_ItemTransform_TabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
struct UBP_ItemTransform_TabButton_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
struct UBP_ItemTransform_TabButton_C_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
struct UBP_ItemTransform_TabButton_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
struct UBP_ItemTransform_TabButton_C_OnUnhovered_Params
{
public:
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
struct UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xA0)(ConstParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue1;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xD8(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x100(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor12;                    // 0x128(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor123;                   // 0x150(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1234;                  // 0x178(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor12345;                 // 0x1A0(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor123456;                // 0x1C8(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
