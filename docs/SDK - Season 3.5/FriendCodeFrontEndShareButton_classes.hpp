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

// 0x8 (0x848 - 0x840)
// WidgetBlueprintGeneratedClass FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C
class UFriendCodeFrontEndShareButton_C : public UFriendCodeShareButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodeFrontEndShareButton_C");
		return Clss;
	}

	void OnClicked();
	void Construct();
	void ExecuteUbergraph_FriendCodeFrontEndShareButton(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
