#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SocialSettingToggle.SocialSettingToggle_C
// 0x0008 (0x0260 - 0x0258)
class USocialSettingToggle_C : public UFortSocialSettingToggle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialSettingToggle.SocialSettingToggle_C");
		return ptr;
	}


	void UpdateSize();
	void Construct();
	void ExecuteUbergraph_SocialSettingToggle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
