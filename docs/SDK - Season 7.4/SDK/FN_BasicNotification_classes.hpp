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

// BlueprintGeneratedClass BasicNotification.BasicNotification_C
// 0x0088 (0x0128 - 0x00A0)
class UBasicNotification_C : public UFortUINotification
{
public:
	struct FSlateBrush                                 Image;                                                    // 0x00A0(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasicNotification.BasicNotification_C");
		return ptr;
	}


	class UTexture2D* GetImageOverride();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
