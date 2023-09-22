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

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass AthenaGamePhaseWidget.AthenaGamePhaseWidget_C
class UAthenaGamePhaseWidget_C : public UAthenaGamePhaseWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGamePhaseWidget_C");
		return Clss;
	}

	void OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint, enum class EAthenaGamePhaseStep K2Node_Event_GamePhaseStep, enum class EAthenaGamePhaseStep Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* Temp_object_Variable123, class UMaterialInterface* Temp_object_Variable1234, class UMaterialInterface* Temp_object_Variable12345, class UMaterialInterface* Temp_object_Variable123456, class UMaterialInterface* Temp_object_Variable1234567, class UMaterialInterface* Temp_object_Variable12345678, class UMaterialInterface* Temp_object_Variable123456789, class UMaterialInterface* Temp_object_Variable12345678910, class UMaterialInterface* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
