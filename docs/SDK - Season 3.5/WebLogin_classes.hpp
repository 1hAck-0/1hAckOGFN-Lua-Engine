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

// 0x28 (0x3F8 - 0x3D0)
// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
class UWebLogin_C : public UFortWebLoginWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UCircularThrobber*                     Throbber;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WebContent;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebLogin_C");
		return Clss;
	}

	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
	void ExecuteUbergraph_WebLogin(int32 EntryPoint, class UWidget* K2Node_Event_WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
