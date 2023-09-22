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

// Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead
// (Event, Public, BlueprintEvent)

void UPCB_InfoPannel_C::CmsDataRead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead");

	UPCB_InfoPannel_C_CmsDataRead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPCB_InfoPannel_C::ExecuteUbergraph_PCB_InfoPannel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel");

	UPCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
