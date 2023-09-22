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

// WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C
// 0x0099 (0x0341 - 0x02A8)
class UItemInspectionItemExtraDetailsHostPanel_C : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Show_OptIn_Headers;                                       // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	struct FFortRarityItemData                         RarityData;                                               // 0x02B8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Border_Material;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysShowBorder;                                         // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C");
		return ptr;
	}


	void Update_Border_Color();
	void Update_Scrollbox_Layout();
	void Update_Header_Size();
	void HandleDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
