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

// 0x18 (0x230 - 0x218)
// WidgetBlueprintGeneratedClass XpBonusToolTip.XpBonusToolTip_C
class UXpBonusToolTip_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        HBoxBoost;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxDaily;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpBonusToolTip_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_XpBonusToolTip(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_GetRestXpBalance_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetXpBoostBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
