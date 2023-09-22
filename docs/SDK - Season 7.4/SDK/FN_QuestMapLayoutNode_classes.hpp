#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuestMapLayoutNode.QuestMapLayoutNode_C
// 0x0018 (0x0270 - 0x0258)
class UQuestMapLayoutNode_C : public UFortLayoutQuestNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Quest_Tile_Show_Bottom_Text;                              // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UFortQuestItemDefinition*                    Quest_Tile_Item_Def;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestMapLayoutNode.QuestMapLayoutNode_C");
		return ptr;
	}


	void SetQuestTileProps();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_QuestMapLayoutNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
