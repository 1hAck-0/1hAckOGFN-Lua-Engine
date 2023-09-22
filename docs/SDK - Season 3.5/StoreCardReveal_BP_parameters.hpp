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

// 0x21 (0x21 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
struct AStoreCardReveal_BP_C_RarityEnumToText_Params
{
public:
	enum class EFortRarity                       InRarity;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutRarity;                                         // 0x8(0x18)(Parm, OutParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBA0 (0xBA0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
struct AStoreCardReveal_BP_C_IsDefender_Params
{
public:
	class UFortAccountItemDefinition*            Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDefender;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Result;                                            // 0x10(0x18)(Parm, OutParm)
	enum class EFortItemType                     Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)()
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_RarityEnumToText_OutRarity;               // 0x58(0x18)()
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0xB8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetTertiaryCategory_ItemCategoryText;     // 0xF8(0x18)()
	struct FSlateBrush                           CallFunc_GetTertiaryCategory_ItemCategoryBrush;    // 0x110(0x88)()
	bool                                         CallFunc_GetTertiaryCategory_ReturnValue;          // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetSecondaryCategory_ItemCategoryText;    // 0x1A0(0x18)()
	struct FSlateBrush                           CallFunc_GetSecondaryCategory_ItemCategoryBrush;   // 0x1B8(0x88)()
	bool                                         CallFunc_GetSecondaryCategory_ReturnValue;         // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData12;            // 0x248(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData123;           // 0x288(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x2C8(0x18)()
	enum class EFortItemType                     CallFunc_GetType_ReturnValue1;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable1;                               // 0x2E8(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable12;                              // 0x308(0x18)()
	class FText                                  Temp_text_Variable123;                             // 0x320(0x18)()
	class FText                                  Temp_text_Variable1234;                            // 0x338(0x18)()
	class FText                                  Temp_text_Variable12345;                           // 0x350(0x18)()
	class FText                                  Temp_text_Variable123456;                          // 0x368(0x18)()
	class FText                                  Temp_text_Variable1234567;                         // 0x380(0x18)()
	class FText                                  Temp_text_Variable12345678;                        // 0x398(0x18)()
	class FText                                  Temp_text_Variable123456789;                       // 0x3B0(0x18)()
	class FText                                  Temp_text_Variable12345678910;                     // 0x3C8(0x18)()
	class FText                                  Temp_text_Variable1234567891011;                   // 0x3E0(0x18)()
	class FText                                  Temp_text_Variable123456789101112;                 // 0x3F8(0x18)()
	class FText                                  Temp_text_Variable12345678910111213;               // 0x410(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314;             // 0x428(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415;           // 0x440(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516;         // 0x458(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617;       // 0x470(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718;     // 0x488(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819;   // 0x4A0(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920; // 0x4B8(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021; // 0x4D0(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122; // 0x4E8(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223; // 0x500(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324; // 0x518(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425; // 0x530(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526; // 0x548(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627; // 0x560(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728; // 0x578(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829; // 0x590(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930; // 0x5A8(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031; // 0x5C0(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132; // 0x5D8(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233; // 0x5F0(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334; // 0x608(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435; // 0x620(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536; // 0x638(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637; // 0x650(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738; // 0x668(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839; // 0x680(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940; // 0x698(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041; // 0x6B0(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142; // 0x6C8(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243; // 0x6E0(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344; // 0x6F8(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445; // 0x710(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546; // 0x728(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647; // 0x740(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748; // 0x758(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849; // 0x770(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950; // 0x788(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051; // 0x7A0(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152; // 0x7B8(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253; // 0x7D0(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354; // 0x7E8(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455; // 0x800(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556; // 0x818(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657; // 0x830(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758; // 0x848(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859; // 0x860(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960; // 0x878(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061; // 0x890(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162; // 0x8A8(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263; // 0x8C0(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364; // 0x8D8(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465; // 0x8F0(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566; // 0x908(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667; // 0x920(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768; // 0x938(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869; // 0x950(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970; // 0x968(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071; // 0x980(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172; // 0x998(0x18)()
	class FText                                  Temp_text_Variable12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152535455565758596061626364656667686970717273; // 0x9B0(0x18)()
	class FText                                  Temp_text_Variable1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374; // 0x9C8(0x18)()
	class FText                                  Temp_text_Variable123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475; // 0x9E0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x9F8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1234;          // 0xA10(0x40)(HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0xA50(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData12345;         // 0xA68(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData123456;        // 0xAA8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xAE8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0xAF8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB08(0x18)()
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0xB20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1234567;       // 0xB38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array12;                          // 0xB78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue12;                     // 0xB88(0x18)()
};

// 0xB0 (0xB0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
struct AStoreCardReveal_BP_C_SetText_CCB_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CCB_Rarity;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CCB_Text;                                          // 0x8(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChoiceCardName_C*                     K2Node_DynamicCast_AsChoice_Card_Name;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0x50(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x98(0x18)()
};

// 0xC1 (0xC1 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
struct AStoreCardReveal_BP_C_SetText_CCA_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CCA_Text;                                          // 0x8(0x18)(Edit, BlueprintVisible)
	enum class EFortRarity                       CCA_Rarity;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0x38(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x88(0x18)()
	bool                                         Temp_bool_Variable12;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChoiceCardName_C*                     K2Node_DynamicCast_AsChoice_Card_Name;             // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x590 (0x590 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
struct AStoreCardReveal_BP_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_BreakRotator_Roll;                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x20(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xA8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x150(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x180(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x18C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x198(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB8[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue1;      // 0x1B0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location1;                 // 0x1E0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation1;                 // 0x1EC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale1;                    // 0x1F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12;     // 0x210(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue123;    // 0x240(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x270(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue1;     // 0x27C(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DBA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x290(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0x2C0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x2F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult1;     // 0x378(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1234; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12345; // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123456; // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678; // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789; // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910; // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011; // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1;     // 0x448(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult1;   // 0x458(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult1;      // 0x4E0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112; // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213; // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314; // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415; // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516; // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
struct AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
struct AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
struct AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
struct AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
struct AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
struct AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
struct AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
struct AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
struct AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
struct AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
struct AStoreCardReveal_BP_C_InpTchEvt_Released_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
struct AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0
struct AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
struct AStoreCardReveal_BP_C_OnStoreStateChanged_Params
{
public:
	enum class EFortStoreState                   NewStoreState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
struct AStoreCardReveal_BP_C_StartPackOpen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
struct AStoreCardReveal_BP_C_CardEnterStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
struct AStoreCardReveal_BP_C_PackDestroyStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
struct AStoreCardReveal_BP_C_CardFlipStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
struct AStoreCardReveal_BP_C_CardExitStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
struct AStoreCardReveal_BP_C_TurnOffFastForward_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
struct AStoreCardReveal_BP_C_CardBackRevealStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
struct AStoreCardReveal_BP_C_CardFrontRevealStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
struct AStoreCardReveal_BP_C_TurnOnFastForward_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
struct AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
struct AStoreCardReveal_BP_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
struct AStoreCardReveal_BP_C_CardPackStoreStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
struct AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
struct AStoreCardReveal_BP_C_PresentChoiceStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
struct AStoreCardReveal_BP_C_ChoiceMadeStart_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
struct AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
struct AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
struct AStoreCardReveal_BP_C_ConstructCardFront_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
struct AStoreCardReveal_BP_C_GetReadyToShowCards_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
struct AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
struct AStoreCardReveal_BP_C_HoverStart_CC_A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
struct AStoreCardReveal_BP_C_HoverEnd_CC_A_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
struct AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
struct AStoreCardReveal_BP_C_HoverStart_CC_B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
struct AStoreCardReveal_BP_C_HoverEnd_CC_B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
struct AStoreCardReveal_BP_C_CheckHoverStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
struct AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
struct AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
struct AStoreCardReveal_BP_C_EnableOpenAllPacks_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
struct AStoreCardReveal_BP_C_CardInPlace_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
struct AStoreCardReveal_BP_C_CompareRarity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
struct AStoreCardReveal_BP_C_PlayUpgradeAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
struct AStoreCardReveal_BP_C_ReadyForCardToCome_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
struct AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
struct AStoreCardReveal_BP_C_ExitPackStore_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
struct AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params
{
public:
	enum class ETouchIndex                       FingerIndex;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
struct AStoreCardReveal_BP_C_ResetGamepadInput_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
struct AStoreCardReveal_BP_C_OpenGamepadGate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
struct AStoreCardReveal_BP_C_CloseGamepadGate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
struct AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
struct AStoreCardReveal_BP_C_SetCCRarityColor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
struct AStoreCardReveal_BP_C_CCRarityColorReady_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40
struct AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
struct AStoreCardReveal_BP_C_InitiatePinata_Params
{
public:
};

// 0x23C8 (0x23C8 - 0x0)
// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
struct AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue;      // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1;     // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12;    // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123;   // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234;  // 0x50(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345; // 0x60(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456; // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567; // 0x80(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x90(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678; // 0x9C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789; // 0xB0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910; // 0xC4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011; // 0xD4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112; // 0xE4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213; // 0xF4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314; // 0x104(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415; // 0x114(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516; // 0x124(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617; // 0x134(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718; // 0x144(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819; // 0x154(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920; // 0x164(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021; // 0x174(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122; // 0x184(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223; // 0x194(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324; // 0x1A4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425; // 0x1B4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526; // 0x1C4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627; // 0x1D4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728; // 0x1E4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829; // 0x1F4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x204(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x208(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue1;            // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930; // 0x21C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031; // 0x22C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132; // 0x23C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x250(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue1;                // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233; // 0x280(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334; // 0x290(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435; // 0x2A0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536; // 0x2B0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637; // 0x2C0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738; // 0x2D0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839; // 0x2E0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940; // 0x2F0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041; // 0x300(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142; // 0x310(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243; // 0x320(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344; // 0x330(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445; // 0x340(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable1;                // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue1;         // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546; // 0x360(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1;                      // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent123;    // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_ComponentBoundEvent_ButtonPressed1;         // 0x380(0x18)(HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent12;     // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_ComponentBoundEvent_ButtonPressed;          // 0x3A0(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable12;               // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable12;                     // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DC9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable123;              // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable123;                    // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AStoreCamera_Blueprint_C*>      CallFunc_GetAllActorsOfClass_OutActors1;           // 0x3D0(0x10)(ZeroConstructor, ReferenceParm)
	class AStoreCamera_Blueprint_C*              CallFunc_Array_Get_Item1;                          // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable1234;             // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1234;                   // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue12;        // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647; // 0x40C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748; // 0x428(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849; // 0x438(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950; // 0x448(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051; // 0x458(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546474849505152; // 0x468(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x478(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253; // 0x484(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1;     // 0x494(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent123;            // 0x4A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent12;             // 0x4A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent1;              // 0x4B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_TouchedComponent;               // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4C0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4CC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x4D8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location1;                 // 0x4E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation1;                 // 0x4F0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale1;                    // 0x4FC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location12;                // 0x508(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation12;                // 0x514(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale12;                   // 0x520(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location123;               // 0x52C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation123;               // 0x538(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale123;                  // 0x544(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x550(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x580(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x608(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x614(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12;    // 0x620(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x638(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue1;     // 0x644(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue12;    // 0x650(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue1;        // 0x65C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue123;   // 0x668(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X1;                           // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y1;                           // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z1;                           // 0x67C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue123;   // 0x680(0xC)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable12345;                  // 0x68C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortStoreState                   K2Node_CustomEvent_NewStoreState;                  // 0x68D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x68E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue1;      // 0x690(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue1234;  // 0x6C0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue12;       // 0x6CC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1234;  // 0x6D8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X12;                          // 0x6E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y12;                          // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z12;                          // 0x6EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue1;                  // 0x6F0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult1;     // 0x700(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue12345; // 0x788(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue123456; // 0x794(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue1234567; // 0x7A0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue123;      // 0x7AC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12345; // 0x7B8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X123;                         // 0x7C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y123;                         // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z123;                         // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable12345;            // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x7D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1; // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue123456; // 0x7E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1234567; // 0x7F0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12;     // 0x800(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue123;    // 0x830(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable123456;                 // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable123456;           // 0x861(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12345678; // 0x864(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue123456789; // 0x870(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable12; // 0x87C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue1234;   // 0x880(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12345;  // 0x8B0(0x30)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue123456; // 0x8F0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue1234567; // 0x920(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12345678; // 0x950(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location1234;              // 0x980(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation1234;              // 0x98C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale1234;                 // 0x998(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll12;                      // 0x9A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch12;                     // 0x9A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw12;                       // 0x9AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X1234;                        // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y1234;                        // 0x9B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z1234;                        // 0x9B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue123456789; // 0x9C0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable123; // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location12345;             // 0x9F4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation12345;             // 0xA00(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale12345;                // 0xA0C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll123;                     // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch123;                    // 0xA1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw123;                      // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X12345;                       // 0xA24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y12345;                       // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z12345;                       // 0xA2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue12345678910; // 0xA30(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue1234567891011; // 0xA60(0x30)(IsPlainOldData, NoDestructor)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0xA90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue1;                  // 0xA98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0xAA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue1;         // 0xAA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xAA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12;                 // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut;                        // 0xAB0(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue;                      // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0xAC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0xAD0(0x18)(HasGetValueTypeHash)
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue123;                // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLimitedToES2Features_ReturnValue;       // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable;                              // 0xAF4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       Temp_byte_Variable;                                // 0xB00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       K2Node_InputTouchEvent_FingerIndex;                // 0xB01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DD9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_InputTouchEvent_Location;                   // 0xB04(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       K2Node_InputTouchEvent_FingerIndex1;               // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_InputTouchEvent_Location1;                  // 0xB14(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB20(0x10)(ZeroConstructor, NoDestructor)
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue1234;               // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key1;                         // 0xB38(0x18)(HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Create_ReturnValue;                       // 0xB50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface; // 0xB58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354; // 0xB78(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12345;              // 0xB90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue; // 0xB98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xB9C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_VLerp_ReturnValue1;                       // 0xBAC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0xBB8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue1;       // 0xC40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xC48(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xC58(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue123;       // 0xCE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable1;                             // 0xCE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xCF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0xCF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_ByteByte_ReturnValue;           // 0xCFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum12_CmpSuccess;                    // 0xCFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded1;                        // 0xD00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xD08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0xD09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0xD0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0xD0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable123;                             // 0xD0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable1;                               // 0xD0D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1234;                            // 0xD0E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0xD0F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12345;                           // 0xD10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable123456;                          // 0xD11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1234567;                         // 0xD12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll1234;                    // 0xD14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1234;                   // 0xD18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1234;                     // 0xD1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1;              // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue1;                 // 0xD24(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult1;   // 0xD30(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPauseType                        Temp_byte_Variable12;                              // 0xDB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable12345678;                        // 0xDB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select1_Default;                            // 0xDBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable123456789;                       // 0xDBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12345678910;                     // 0xDBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue12345678; // 0xDC0(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12345678910; // 0xDCC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0xDD8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        K2Node_InputAxisEvent_AxisValue1;                  // 0xE60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0xE64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0xE65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1234567891011;                   // 0xE66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable123;                             // 0xE67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable123456789101112;                 // 0xE68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select12_Default;                           // 0xE69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12345678910111213;               // 0xE6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0xE6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1234567891011121314;             // 0xE6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable123456789101112131415;           // 0xE6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPauseType                        Temp_byte_Variable1234;                            // 0xE6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select123_Default;                          // 0xE6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xE70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12;             // 0xE74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue123;            // 0xE78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0xE7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1234;           // 0xE80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12345;          // 0xE84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue12;                 // 0xE88(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue12;                // 0xE94(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VLerp_ReturnValue12;                      // 0xEA0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0xEAC(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xEC0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult12;    // 0xEF0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue12;        // 0xF78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue123456;         // 0xF7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1234567;        // 0xF80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue123;       // 0xF84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12345678;       // 0xF88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue123456789;      // 0xF8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue123;                // 0xF90(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue123;               // 0xF9C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VLerp_ReturnValue123;                     // 0xFA8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue1;                       // 0xFB4(0xC)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0xFC0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult123;   // 0xFF0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_4DE3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue;                        // 0x1080(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult1234;  // 0x10B0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable1234567;          // 0x1138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_VLerp_ReturnValue1234;                    // 0x113C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult1;      // 0x1148(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class ETouchIndex                       K2Node_ComponentBoundEvent_FingerIndex1;           // 0x11D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent1;      // 0x11D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETouchIndex                       K2Node_ComponentBoundEvent_FingerIndex;            // 0x11E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent;       // 0x11E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue12345;                   // 0x11F0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue12;                      // 0x11FC(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x1208(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1234;      // 0x1290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue123;                     // 0x1294(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12345678910;    // 0x12A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult1;      // 0x12A8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue1234;               // 0x1330(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue123456;                  // 0x133C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue12;         // 0x1348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult12;     // 0x1350(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue1234567;                 // 0x13D8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue1234;                    // 0x13E4(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult12;     // 0x13F0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1234567891011;  // 0x1478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue12345;                   // 0x147C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue12345;              // 0x1488(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult123;    // 0x1498(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue12345678;                // 0x1520(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult123;    // 0x1530(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x15B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x15BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue1;                        // 0x15C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue12;                       // 0x15CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue1;        // 0x15D0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue123;                      // 0x15DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue1234;                     // 0x15E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue12;       // 0x15E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue12345;                    // 0x15F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue123456;                   // 0x15F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue123;      // 0x15F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue1234567;                  // 0x1604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x1608(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x1618(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x1628(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x1638(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4DEA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue1;                       // 0x1650(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue12;                      // 0x1680(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult12345; // 0x16B0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult123456; // 0x1738(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue123456789;               // 0x17C0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult1234;   // 0x17D0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_Lerp_ReturnValue12345678;                 // 0x1858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable1234567;                // 0x185C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue123456789;                // 0x1860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue123456;             // 0x1868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue1234567;            // 0x1870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut1;                       // 0x1878(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue1;                     // 0x1890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut12;                      // 0x1898(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue12;                    // 0x18B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item;          // 0x18B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x18C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item1;         // 0x18C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123;                    // 0x18D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger1_CmpSuccess;                  // 0x18D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12345678;           // 0x18D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ChoiceResultComplete_ReturnValue;         // 0x18E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue123456789;          // 0x18E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeChoice_ReturnValue;                   // 0x18F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MakeChoice_ReturnValue1;                  // 0x18F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable12;                            // 0x18F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D1;                  // 0x1900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1234;                   // 0x1908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum123_CmpSuccess;                   // 0x1909(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x1910(0x80)()
	class UObject*                               K2Node_CustomEvent_Loaded12;                       // 0x1990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue1;   // 0x1998(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue123456789101112; // 0x19A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue1234;              // 0x19AC(0xC)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult12;  // 0x19B8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12345678910;        // 0x1A40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable1;                             // 0x1A48(0x18)(HasGetValueTypeHash)
	struct FCard                                 CallFunc_GetCard_ResultOut123;                     // 0x1A60(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue123;                   // 0x1A78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key12;                        // 0x1A80(0x18)(HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue1;                   // 0x1A98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key123;                       // 0x1AA0(0x18)(HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue123456;                  // 0x1AB8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult123; // 0x1AC8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue12345678910;             // 0x1B50(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue1234567891011;      // 0x1B60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x1B68(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_CardExitComplete_ReturnValue;             // 0x1BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue123456789101112;    // 0x1BF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardFrontRevealComplete_ReturnValue;      // 0x1C00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12345678910111213;  // 0x1C08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardFlipComplete_ReturnValue;             // 0x1C10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue1234567891011121314; // 0x1C18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardBackRevealComplete_ReturnValue;       // 0x1C20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue123456789101112131415; // 0x1C28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CardEntryComplete_ReturnValue;            // 0x1C30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x1C38(0x10)(ZeroConstructor, NoDestructor)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue12345678910111213141516; // 0x1C48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable123;                           // 0x1C50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded123;                      // 0x1C58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue1234567891011121314151617; // 0x1C60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItemDefinition*          K2Node_DynamicCast_AsFort_Schematic_Item_Definition; // 0x1C68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12345;                  // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCard                                 CallFunc_GetCard_ResultOut1234;                    // 0x1C78(0x18)(NoDestructor)
	bool                                         CallFunc_GetCard_ReturnValue1234;                  // 0x1C90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItemDefinition*              CallFunc_GetResultWorldItemDefinition_ReturnValue; // 0x1C98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue;         // 0x1CA0(0x28)(HasGetValueTypeHash)
	class UFortCardPackItem*                     K2Node_DynamicCast_AsFort_Card_Pack_Item12;        // 0x1CC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123456;                 // 0x1CD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x1CD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UFortAccountItemDefinition*>    CallFunc_GetChoices_Choices;                       // 0x1CE8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x1CF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1;                    // 0x1CF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12;                   // 0x1CFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123;                  // 0x1CFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1234;                 // 0x1CFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12345;                // 0x1CFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123456;               // 0x1CFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1234567;              // 0x1CFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12345678;             // 0x1D00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123456789;            // 0x1D01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue1;        // 0x1D08(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x1D30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D12;                 // 0x1D38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1234567;                // 0x1D40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSchematicItemDefinition*          K2Node_DynamicCast_AsFort_Schematic_Item_Definition1; // 0x1D48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12345678;               // 0x1D50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWorldItemDefinition*              CallFunc_GetResultWorldItemDefinition_ReturnValue1; // 0x1D58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPersistentName_ReturnValue1;           // 0x1D60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue12;       // 0x1D70(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue12345678910;          // 0x1D98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1234567891011;        // 0x1D99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123456789101112;      // 0x1D9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12345678910111213;    // 0x1D9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1234567891011121314;  // 0x1D9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123456789101112131415; // 0x1D9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12345678910111213141516; // 0x1D9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue1234567891011121314151617; // 0x1D9F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue123456789101112131415161718; // 0x1DA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue12345678910111213141516171819; // 0x1DA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E04[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLargePreviewImage_ReturnValue123;      // 0x1DA8(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue1; // 0x1DD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item12;                         // 0x1DD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D123;                // 0x1DE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123456789;              // 0x1DE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            CallFunc_Array_Get_Item123;                        // 0x1DF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E06[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue123456789101112; // 0x1E00(0x30)(IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0x1E30(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue123;                     // 0x1E40(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location123456;            // 0x1E70(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation123456;            // 0x1E7C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale123456;               // 0x1E88(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E07[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_TLerp_ReturnValue1234;                    // 0x1EA0(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue12345;                   // 0x1ED0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location1234567;           // 0x1F00(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation1234567;           // 0x1F0C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale1234567;              // 0x1F18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location12345678;          // 0x1F24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation12345678;          // 0x1F30(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale12345678;             // 0x1F3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue12;              // 0x1F50(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue123456;                  // 0x1F80(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult1234567; // 0x1FB0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_BreakTransform_Location123456789;         // 0x2038(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation123456789;         // 0x2044(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale123456789;            // 0x2050(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue123;             // 0x2060(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult12345678; // 0x2090(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0x2118(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0x2128(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable12345678;         // 0x2138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789;     // 0x2140(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1234567891011; // 0x2150(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue123456789101112; // 0x215C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue12345678910111213; // 0x2168(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue1234567891011;           // 0x2174(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult12345;  // 0x2180(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue1234567891011121314; // 0x2208(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult123456; // 0x2218(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_VLerp_ReturnValue123456789101112;         // 0x22A0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult1234567; // 0x22B0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult12345678; // 0x2338(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_IsClosed_Variable12345678;               // 0x23C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x23C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
