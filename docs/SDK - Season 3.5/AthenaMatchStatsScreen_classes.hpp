#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x408 - 0x3F0)
// WidgetBlueprintGeneratedClass AthenaMatchStatsScreen.AthenaMatchStatsScreen_C
class UAthenaMatchStatsScreen_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UAthenaMatchStatsPartial_C*            AthenaMatchStatsPartial;                           // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderTouchZone;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchStatsScreen_C");
		return Clss;
	}

	struct FEventReply On_BorderTouchZone_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_HandleBack_PassThrough, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InputRefresh(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void InputSetup();
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void RegisterBack(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void OnActivated();
	void Construct();
	void ExecuteUbergraph_AthenaMatchStatsScreen(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UAthenaPlayerMatchReport* CallFunc_GetMatchReport_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
