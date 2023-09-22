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

// Function MenuScreen_Constructor.MenuScreen_Constructor_C.AnimNotify_playFacialAnim
// (BlueprintCallable, BlueprintEvent)

void UMenuScreen_Constructor_C::AnimNotify_playFacialAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuScreen_Constructor.MenuScreen_Constructor_C.AnimNotify_playFacialAnim");

	UMenuScreen_Constructor_C_AnimNotify_playFacialAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuScreen_Constructor.MenuScreen_Constructor_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuScreen_Constructor_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuScreen_Constructor.MenuScreen_Constructor_C.BlueprintUpdateAnimation");

	UMenuScreen_Constructor_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuScreen_Constructor.MenuScreen_Constructor_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMenuScreen_Constructor_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuScreen_Constructor.MenuScreen_Constructor_C.BlueprintInitializeAnimation");

	UMenuScreen_Constructor_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuScreen_Constructor.MenuScreen_Constructor_C.ExecuteUbergraph_MenuScreen_Constructor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuScreen_Constructor_C::ExecuteUbergraph_MenuScreen_Constructor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuScreen_Constructor.MenuScreen_Constructor_C.ExecuteUbergraph_MenuScreen_Constructor");

	UMenuScreen_Constructor_C_ExecuteUbergraph_MenuScreen_Constructor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuScreen_Constructor.MenuScreen_Constructor_C.MenuScreenDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenuScreen_Constructor_C::MenuScreenDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuScreen_Constructor.MenuScreen_Constructor_C.MenuScreenDispatcher__DelegateSignature");

	UMenuScreen_Constructor_C_MenuScreenDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
