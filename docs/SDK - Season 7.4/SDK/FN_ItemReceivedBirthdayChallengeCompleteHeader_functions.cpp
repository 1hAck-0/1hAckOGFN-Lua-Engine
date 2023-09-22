// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedBirthdayChallengeCompleteHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.Construct");

	UItemReceivedBirthdayChallengeCompleteHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceivedBirthdayChallengeCompleteHeader_C::BndEvt__CandleLightButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent");

	UItemReceivedBirthdayChallengeCompleteHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceivedBirthdayChallengeCompleteHeader_C::ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceivedBirthdayChallengeCompleteHeader.ItemReceivedBirthdayChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader");

	UItemReceivedBirthdayChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedBirthdayChallengeCompleteHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
