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

// 0x19 (0x459 - 0x440)
// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
class UEulaWidget_C : public UFortEulaWidget
{
public:
	class UCommonTextBlock*                      TitleText;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnEulaResponse;                                    // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SelectedResponse;                                  // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EulaWidget_C");
		return Clss;
	}

	void OnEulaResponse__DelegateSignature(bool Accepted);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
