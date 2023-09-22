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

// UserDefinedStruct TooltipStat.TooltipStat
// 0x0031
struct FTooltipStat
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EWeaponTooltipStatType>                Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
