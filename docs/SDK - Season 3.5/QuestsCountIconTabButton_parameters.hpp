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

// 0x8 (0x8 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialNameID
struct UQuestsCountIconTabButton_C_SetTutorialNameID_Params
{
public:
	class FName                                  InTutorialBangID;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
struct UQuestsCountIconTabButton_C_Update_Bang_State_Params
{
public:
	bool                                         bBangEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6A (0x6A - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
struct UQuestsCountIconTabButton_C_Update_Text_Params
{
public:
	int32                                        QuestCount;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable1;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue12;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortQuestCategory*>            CallFunc_GetCurrentQuestsCategories_Categories;    // 0x38(0x10)(ZeroConstructor, ReferenceParm)
	class UFortQuestCategory*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_Array_Get_Item1;                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestState                   CallFunc_GetQuestState_ReturnValue;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
struct UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params
{
public:
	class UClass*                                BorderStyle;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
struct UQuestsCountIconTabButton_C_ShowText_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
struct UQuestsCountIconTabButton_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
struct UQuestsCountIconTabButton_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
struct UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
struct UQuestsCountIconTabButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
struct UQuestsCountIconTabButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnSelected
struct UQuestsCountIconTabButton_C_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDeselected
struct UQuestsCountIconTabButton_C_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
struct UQuestsCountIconTabButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnHovered
struct UQuestsCountIconTabButton_C_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnUnhovered
struct UQuestsCountIconTabButton_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
struct UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnEnabled
struct UQuestsCountIconTabButton_C_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDisabled
struct UQuestsCountIconTabButton_C_OnDisabled_Params
{
public:
};

// 0xE9 (0xE9 - 0x0)
// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
struct UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue1;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue1;       // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x8(0xA0)(ConstParm)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue12;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue123;     // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue1234;    // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue12345;   // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue123456;  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetCurrentTextStyleClass_ReturnValue1;    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
