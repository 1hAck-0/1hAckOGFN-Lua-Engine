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

// Function InfoWindow.InfoWindow_C.Initialize
struct UInfoWindow_C_Initialize_Params
{
};

// Function InfoWindow.InfoWindow_C.AddInfo
struct UInfoWindow_C_AddInfo_Params
{
	TArray<class UFortItemDefinition*>                 Info_Items;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InfoWindow.InfoWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UInfoWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.Construct
struct UInfoWindow_C_Construct_Params
{
};

// Function InfoWindow.InfoWindow_C.Destruct
struct UInfoWindow_C_Destruct_Params
{
};

// Function InfoWindow.InfoWindow_C.BndEvt__Lightbox_K2Node_ComponentBoundEvent
struct UInfoWindow_C_BndEvt__Lightbox_K2Node_ComponentBoundEvent_Params
{
};

// Function InfoWindow.InfoWindow_C.OnBeginOutro
struct UInfoWindow_C_OnBeginOutro_Params
{
};

// Function InfoWindow.InfoWindow_C.OnBeginIntro
struct UInfoWindow_C_OnBeginIntro_Params
{
};

// Function InfoWindow.InfoWindow_C.BndEvt__InfoButtons_K2Node_ComponentBoundEvent
struct UInfoWindow_C_BndEvt__InfoButtons_K2Node_ComponentBoundEvent_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.Set Info
struct UInfoWindow_C_Set_Info_Params
{
	class UFortItemDefinition*                         Entry_Item_Definition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.ExecuteUbergraph_InfoWindow
struct UInfoWindow_C_ExecuteUbergraph_InfoWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoWindow.InfoWindow_C.OnInfoIndowClosed__DelegateSignature
struct UInfoWindow_C_OnInfoIndowClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
