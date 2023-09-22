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

// WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C
// 0x0010 (0x02A8 - 0x0298)
class UTabGameOptionsHud_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            TooltipDisplayReference;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C");
		return ptr;
	}


	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent(class UUserWidget* Widget);
	void HUD_Changed(int Selected_Index, struct FGameplayTag Gameplay_Tag);
	void ExecuteUbergraph_TabGameOptionsHud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
