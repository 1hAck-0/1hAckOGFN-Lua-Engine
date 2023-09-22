#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FortUIStylesheet.FortUIStylesheet
// 0x0B20
struct FFortUIStylesheet
{
	struct FFortUITheme                                Theme_Default;                                            // 0x0000(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortUITheme                                Theme_Emphasis;                                           // 0x0060(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortUITheme                                Theme_Critical;                                           // 0x00C0(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortMultiSizeBrush                         Standard_Icon_Size;                                       // 0x0120(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Item_Size;                                                // 0x0450(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Item_Icon_Size;                                           // 0x0780(0x0330) (Edit, BlueprintVisible)
	struct FLinearColor                                Color_Buff;                                               // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_Debuff;                                             // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_Unique;                                             // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_FireElemental;                                      // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_IceElemental;                                       // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_BoltElemental;                                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_HarvestWeakPoint;                                   // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
