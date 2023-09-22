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

// Function AthenaNews.AthenaNews_C.BeginIntroSequence
// (BlueprintCallable, BlueprintEvent)

void UAthenaNews_C::BeginIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.BeginIntroSequence");

	UAthenaNews_C_BeginIntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
// (Event, Public, BlueprintEvent)

void UAthenaNews_C::SingleItemConfiguration()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.SingleItemConfiguration");

	UAthenaNews_C_SingleItemConfiguration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
// (Event, Public, BlueprintEvent)

void UAthenaNews_C::ResetViewConfiguration()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.ResetViewConfiguration");

	UAthenaNews_C_ResetViewConfiguration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.HandleNewsStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// EAthenaNewsStyle               NewsStyle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNews_C::HandleNewsStyle(EAthenaNewsStyle NewsStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.HandleNewsStyle");

	UAthenaNews_C_HandleNewsStyle_Params params;
	params.NewsStyle = NewsStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews");

	UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaNewsStyle               NewStyle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNews_C::UpdateStyle__DelegateSignature(EAthenaNewsStyle NewStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature");

	UAthenaNews_C_UpdateStyle__DelegateSignature_Params params;
	params.NewStyle = NewStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
