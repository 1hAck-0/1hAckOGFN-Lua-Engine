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

// 0x8 (0x368 - 0x360)
// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
class UCollectionBookSlotView_C : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CollectionBookSlotView_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
