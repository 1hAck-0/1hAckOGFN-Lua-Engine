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

// 0xBF (0xBF - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
struct UPlayerEmblemAndXp_C_SetupReward_Params
{
public:
	class UWidget*                               Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            RewardText;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                RewardItemCard;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                RewardImageWidget;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardCountTextBlock;                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasReward;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4266[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         RewardItem;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        LevelRewarded;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4267[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x48(0x18)()
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x60(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4268[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0xA0(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC5 (0xC5 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
struct UPlayerEmblemAndXp_C_Refresh_Params
{
public:
	struct FFortPublicAccountInfo                FortPublicAccountInfo;                             // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4269[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue1;                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentSeasonNumber_ReturnValue;       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x50(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_426B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x70(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         CallFunc_GetNextSeasonReward_Reward;               // 0x90(0x10)(NoDestructor)
	int32                                        CallFunc_GetNextSeasonReward_RewardLevel;          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNextSeasonReward_ReturnValue;          // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_426D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemInstanceQuantityPair         CallFunc_GetNextSeasonChaseReward_Reward;          // 0xB0(0x10)(NoDestructor)
	int32                                        CallFunc_GetNextSeasonChaseReward_RewardLevel;     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNextSeasonChaseReward_ReturnValue;     // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
struct UPlayerEmblemAndXp_C_Construct_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
struct UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params
{
public:
	struct FFortPublicAccountInfo                Result;                                            // 0x0(0x34)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
struct UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPublicAccountInfo                K2Node_Event_Result;                               // 0x4(0x34)(ConstParm, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
