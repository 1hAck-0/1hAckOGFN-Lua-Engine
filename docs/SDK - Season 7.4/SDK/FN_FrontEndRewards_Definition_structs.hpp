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

// UserDefinedStruct FrontEndRewards_Definition.FrontEndRewards_Definition
// 0x0060
struct FFrontEndRewards_Definition
{
	bool                                               ShowMissionRewards;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowMissionAlertRewards;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class UFortQuestItem*>                      CompletedQuests;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortQuestItem*>                      NewQuests;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortExpeditionItem*>                 Expeditions;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortCollectionBookRewards>          CollectionBookRewards;                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ShowDifficultyIncreaseRewards;                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewGiftBoxes;                                             // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	TArray<class UFortItem*>                           ItemCacheRewards;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
