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

// BlueprintGeneratedClass ColorLibrary.ColorLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UColorLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ColorLibrary.ColorLibrary_C");
		return ptr;
	}


	void STATIC_Get_HarvestWeakPoint_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	void STATIC_Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff);
	void STATIC_Get_Bolt_Elemental_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Ice_Elemental_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Fire_Elemental_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Unique_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Debuff_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Buff_Color(struct FColorStylesheet Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
