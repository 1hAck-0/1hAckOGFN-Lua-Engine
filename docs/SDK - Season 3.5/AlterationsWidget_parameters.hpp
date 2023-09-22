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

// 0xAA (0xAA - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
struct UAlterationsWidget_C_UpdatePerksMessage_Params
{
public:
	class FText                                  PerkCount;                                         // 0x0(0x18)(Edit, BlueprintVisible)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)()
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0x90(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.Construct
struct UAlterationsWidget_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
struct UAlterationsWidget_C_OnGenerateAlteration_Params
{
public:
	struct FFortUIAlteration                     AlterationInfo;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
struct UAlterationsWidget_C_OnItemChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
struct UAlterationsWidget_C_OnItemToCompareWithChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
struct UAlterationsWidget_C_OnStateChanged_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
struct UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAlterationWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlterationUnlocked_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIAlteration                     K2Node_Event_AlterationInfo;                       // 0x28(0x18)(NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F80[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue1;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue12;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                        CallFunc_Create_ReturnValue1;                      // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkDivider_C*                        CallFunc_Create_ReturnValue12;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue1;       // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue12;      // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue123;     // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
