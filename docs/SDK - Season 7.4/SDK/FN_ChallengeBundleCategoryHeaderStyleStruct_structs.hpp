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

// UserDefinedStruct ChallengeBundleCategoryHeaderStyleStruct.ChallengeBundleCategoryHeaderStyleStruct
// 0x00C1
struct FChallengeBundleCategoryHeaderStyleStruct
{
	struct FSlateBrush                                 IconAppearance;                                           // 0x0000(0x0088) (Edit, BlueprintVisible)
	struct FWidgetTransform                            IconTransform;                                            // 0x0088(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UClass*                                      BundleCategoryBorderStyle;                                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BundleCategoryNameStyle;                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EffectWidget;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanShowLockedIcon;                                        // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
