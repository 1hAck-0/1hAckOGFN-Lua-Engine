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

// 0x0 (0x36F - 0x36F)
// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
class UAthenaQuickBarSlot_C : public UQuickbarSlot_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaQuickBarSlot_C");
		return Clss;
	}

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
