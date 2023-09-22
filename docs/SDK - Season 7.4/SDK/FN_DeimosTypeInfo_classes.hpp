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

// BlueprintGeneratedClass DeimosTypeInfo.DeimosTypeInfo_C
// 0x0000 (0x0028 - 0x0028)
class UDeimosTypeInfo_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeimosTypeInfo.DeimosTypeInfo_C");
		return ptr;
	}


	void GetEnemyColor(struct FLinearColor* Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
