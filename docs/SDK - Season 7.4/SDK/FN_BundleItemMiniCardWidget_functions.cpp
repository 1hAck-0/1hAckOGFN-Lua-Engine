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

// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBundleItemMiniCardWidget_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject");

	UBundleItemMiniCardWidget_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show
// (BlueprintCallable, BlueprintEvent)

void UBundleItemMiniCardWidget_C::Play_Anim___Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show");

	UBundleItemMiniCardWidget_C_Play_Anim___Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBundleItemMiniCardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct");

	UBundleItemMiniCardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBundleItemMiniCardWidget_C::ExecuteUbergraph_BundleItemMiniCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget");

	UBundleItemMiniCardWidget_C_ExecuteUbergraph_BundleItemMiniCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
