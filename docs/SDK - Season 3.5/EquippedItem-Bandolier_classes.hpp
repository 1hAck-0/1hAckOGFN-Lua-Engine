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

// 0x14 (0x22C - 0x218)
// WidgetBlueprintGeneratedClass EquippedItem-Bandolier.EquippedItem-Bandolier_C
class UEquippedItem_Bandolier_C : public UCommonUserWidget
{
public:
	class UImage*                                _Image__Current;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Max;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MaxDisplayCapacity;                                // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EquippedItem-Bandolier_C");
		return Clss;
	}

	void UpdateCapacity(int32 Capacity, class UFortAmmoItemDefinition* AmmoData, int32 CallFunc_Clamp_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void UpdateCurrent(int32 Current, class UFortAmmoItemDefinition* AmmoData, int32 CallFunc_Clamp_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
