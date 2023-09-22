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

// 0x20 (0x838 - 0x818)
// WidgetBlueprintGeneratedClass LeaderboardRowWidget.LeaderboardRowWidget_C
class ULeaderboardRowWidget_C : public UFortLeaderboardEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x818(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      Rank;                                              // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatValue;                                         // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      User;                                              // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardRowWidget_C");
		return Clss;
	}

	void Refresh(class UFortLeaderboardRowProxyInstance* RowObject, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1);
	void SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData);
	void OnLeaderboardEntryDataSet();
	void ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint, class UFortLeaderboardRowProxyInstance* K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
