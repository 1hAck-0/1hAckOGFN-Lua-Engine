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

// 0x10 (0x378 - 0x368)
// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
class UAthenaCompass_C : public UAthenaCompassBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(Transient, DuplicateTransient)
	class UImage*                                CompassImage_DONOTADDMOREWIDGETS;                  // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCompass_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_AthenaCompass(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
