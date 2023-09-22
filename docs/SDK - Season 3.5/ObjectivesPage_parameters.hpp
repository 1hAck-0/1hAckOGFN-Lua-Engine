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

// 0x1A (0x1A - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
struct UObjectivesPage_C_MissionHasModifiers_Params
{
public:
	bool                                         MissionHasModifiers;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4188[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasActiveGameplayModifiers_ReturnValue;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
struct UObjectivesPage_C_ConfigureModifiersView_Params
{
public:
	bool                                         ShowModifiers;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4189[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_418A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortGameplayModifierItemDefinition*> CallFunc_GetActiveModifiers_OutActiveModifiers;    // 0x20(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
struct UObjectivesPage_C_HandleInventory_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_418B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
struct UObjectivesPage_C_HandleSelectedButtonChanged_Params
{
public:
	class UCommonButton*                         InButton;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InButtonIndex;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.HandleBack
struct UObjectivesPage_C_HandleBack_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_418C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.Construct
struct UObjectivesPage_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.OnActivated
struct UObjectivesPage_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.Destruct
struct UObjectivesPage_C_Destruct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_0
struct UObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0_Params
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0xCD (0xCD - 0x0)
// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
struct UObjectivesPage_C_ExecuteUbergraph_ObjectivesPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_418D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UCommonButtonGroup*                    CallFunc_SpawnObject_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_418E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x50(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x60(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle1;             // 0x70(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle12;            // 0x90(0x10)(NoDestructor)
	bool                                         CallFunc_MissionHasModifiers_MissionHasModifiers;  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_418F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_AppliedModifiers;               // 0xB8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
