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

// Class FacialAnimSystem.FacialLiveLinkRemapAsset
// 0x0008 (0x0030 - 0x0028)
class UFacialLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	bool                                               bExtractBoneTransform;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExtractCurve;                                            // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FacialAnimSystem.FacialLiveLinkRemapAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
