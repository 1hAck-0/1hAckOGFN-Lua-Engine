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

// 0x58 (0x58 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupSaleInfo
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupSaleInfo_Params
{
public:
	bool                                         bHasSale;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3280[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SaleText;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                BannerOverrideTag;                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  NormalPrice;                                       // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bHasBattlePassStars;                               // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3281[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumOfBattlePassStars;                              // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x240 (0x240 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateSaleStatus
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateSaleStatus_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x18(0x18)()
	enum class ECatalogSaleType                  Temp_byte_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3282[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBannerOverrideTag_ReturnValue;         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMetaAsBool_ReturnValue;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3283[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemQuantity_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3284[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemOfferCount_ReturnValue;            // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOwned_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3285[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0x80(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECatalogSaleType                  CallFunc_GetSaleType_ReturnValue;                  // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3286[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0xA0(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3287[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSaleText_ReturnValue;                  // 0xC0(0x18)()
	bool                                         CallFunc_Not_PreBool_ReturnValue12;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3288[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x128(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue12;                 // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x158(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData12;            // 0x198(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0x1D8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array12;                          // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0x1F8(0x18)()
	class FText                                  CallFunc_Format_ReturnValue12;                     // 0x210(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x228(0x18)()
};

// 0x41 (0x41 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePurchaseQuantity
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdatePurchaseQuantity_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetQuantityRemaining_ReturnValue;         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateAvailability
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateAvailability_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable12;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable123;                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnique_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetQuantityRemaining_ReturnValue;         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3290[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x50(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x40)(HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3291[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3292[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)()
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xE8(0x18)()
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOwned_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select1_Default;                            // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x118(0x18)()
	bool                                         Temp_bool_Variable12;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3294[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select12_Default;                           // 0x138(0x18)()
};

// 0x33 (0x33 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Update_Locked_Information_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3295[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3296[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_HasRequirement_RequirementText;           // 0x18(0x18)()
	bool                                         CallFunc_HasRequirement_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLockedByRequirement_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_AttemptPurchase_Params
{
public:
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPriceInMTX_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3297[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue1;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3298[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12;               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue1;                  // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_PurchaseOffer_ReturnValue;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandlePurchaseOfferComplete_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferPurchasedWidget_C* CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1CA (0x1CA - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_SetupPrice_Params
{
public:
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               PriceContainer;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            NormalPriceText;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               SalePriceContainer;                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            SalePriceText;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CurrencyImage;                                     // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OfferHasDenyRequirements_ReturnValue;     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUnique_ReturnValue;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetQuantityRemaining_ReturnValue;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPriceInMTX_ReturnValue;                 // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)()
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLockedByRequirement_ReturnValue;        // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_329B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanPurchaseOffer_ReturnValue;             // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12;               // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSalePrice_SalePrice;                   // 0xF0(0x18)()
	bool                                         CallFunc_GetSalePrice_ReturnValue;                 // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetNormalPrice_ReturnValue;               // 0x110(0x18)()
	int32                                        CallFunc_GetPriceItem_RequiredItemCount;           // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_GetPriceItem_ReturnValue;                 // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x140(0x88)()
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PopDetails_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_HandleBack_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPanelOnStack_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C8 (0x2C8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_UpdateFromOffer_Params
{
public:
	TArray<class FString>                        PlaceholderOneRecipient;                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGiftingDisabledOnCurrentPlatform_ReturnValue; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOfferId_ReturnValue;                   // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnique_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12;               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      CallFunc_CreatePreviewItem_ReturnValue;            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue123;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExclusive_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1234;             // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_GetFirstGrantItemDefinition_ReturnValue;  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaGliderItemDefinition*           K2Node_DynamicCast_AsAthena_Glider_Item_Definition; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue1;             // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateSizeRule                    Temp_byte_Variable12;                              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue1;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateSizeRule                    Temp_byte_Variable123;                             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateSizeRule                    Temp_byte_Variable1234;                            // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateSizeRule                    K2Node_Select1_Default;                            // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateSizeRule                    Temp_byte_Variable12345;                           // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0xFC(0x8)(NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable123456;                          // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateSizeRule                    K2Node_Select12_Default;                           // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1234567;                         // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize1;                 // 0x108(0x8)(NoDestructor)
	bool                                         Temp_bool_Variable123;                             // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12345678;                        // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select123_Default;                          // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123456789;                       // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1234;                            // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1234_Default;                         // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable1;                              // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12345;            // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetShortDescription_ReturnValue;          // 0x130(0x18)()
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x148(0x18)()
	class FText                                  CallFunc_GetName_ReturnValue;                      // 0x160(0x18)()
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x180(0x18)()
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12345;                           // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue123456;           // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFirstGrantQuantity_ReturnValue;        // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select12345_Default;                        // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_GetFirstGrantItemDefinition_ReturnValue1; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x1C8(0x80)()
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1234567;          // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasDisplayAsset_ReturnValue;              // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortMtxDetailsAttribute>      CallFunc_GetDetailsAttributes_ReturnValue;         // 0x258(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortMtxDetailsAttribute              CallFunc_Array_Get_Item;                           // 0x268(0x30)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*    CallFunc_Create_ReturnValue;                       // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOfferPurchaseError               CallFunc_CanGiftOffer_ReturnValue;                 // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DialogResult_9E262B7A4CA17B2146A54B8A29CFC473
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_DialogResult_9E262B7A4CA17B2146A54B8A29CFC473_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnOfferSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnActivated
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnUpdateStatus_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Show Not Enough Currency
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_Show_Not_Enough_Currency_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountLeft
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountRight
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_PurchaseAmountRight_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnCancelGifting
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnCancelGifting_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnGiftButtonClicked
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_OnGiftButtonClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature_Params
{
public:
};

// 0x89A (0x89A - 0x0)
// Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget
struct UAthenaDirectAcquisitionOfferDetailsWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue12;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          Temp_byte_Variable1234;                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable1;                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable12;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable123;                            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x58(0x10)(IsPlainOldData, NoDestructor)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123456;           // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCatalogOffer                         CallFunc_GetOffer_ReturnValue;                     // 0x78(0x210)(ConstParm)
	bool                                         CallFunc_IsUnique_ReturnValue;                     // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x290(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x2A0(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12345;            // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1234;             // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2D0(0x40)(HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1;                // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x318(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItemDefinition*            CallFunc_GetCurrencyItemDefinition_ReturnValue;    // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x330(0x18)()
	class UFortItemIcon*                         CallFunc_SpawnObject_ReturnValue;                  // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable12345;                           // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x36A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32BB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123;              // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12;               // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue123;              // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCatalogOffer                         CallFunc_GetOffer_ReturnValue1;                    // 0x3A0(0x210)(ConstParm)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_Array_Get_Item;                           // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12;               // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1234;             // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue1;                  // 0x5CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_Array_Get_Item1;                          // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue1;             // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_Array_Get_Item12;                         // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue12345;            // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCatalogOffer                         CallFunc_GetOffer_ReturnValue12;                   // 0x600(0x210)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x810(0x10)(ZeroConstructor, NoDestructor)
	enum class EFrontEndCamera                   Temp_byte_Variable123456;                          // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x828(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue1;         // 0x830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x831(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue123456;           // 0x838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnique_ReturnValue1;                    // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*       CallFunc_GetOfferInfo_ReturnValue1234567;          // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x860(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough1;                  // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x869(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue123;                // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select12_Default;                           // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x880(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   Temp_byte_Variable1234567;                         // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue1;                    // 0x889(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1;     // 0x890(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12;                              // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   K2Node_Select123_Default;                          // 0x899(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
