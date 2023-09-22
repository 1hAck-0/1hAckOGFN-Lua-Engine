#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavUpToAffiliateKey
struct UAffiliateKeyModal_C_OnNavUpToAffiliateKey_Params
{
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnNavDownFromAffiliateKey
struct UAffiliateKeyModal_C_OnNavDownFromAffiliateKey_Params
{
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnActivated
struct UAffiliateKeyModal_C_OnActivated_Params
{
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
struct UAffiliateKeyModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
struct UAffiliateKeyModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnSet
struct UAffiliateKeyModal_C_OnSet_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C
struct UAffiliateKeyModal_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete
struct UAffiliateKeyModal_C_OnCheckComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasValidAffiliateName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AffilateNameChecked;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnFinish
struct UAffiliateKeyModal_C_OnFinish_Params
{
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal
struct UAffiliateKeyModal_C_ExecuteUbergraph_AffiliateKeyModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature
struct UAffiliateKeyModal_C_OnPopupClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
