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

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
struct UPurchaseFlowJSBridge_RequestClose_Params
{
	struct FString                                     CloseInfo;                                                // (Parm, ZeroConstructor)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
struct UPurchaseFlowJSBridge_RECEIPT_Params
{
	struct FPurchaseFlowReceiptParam                   RECEIPT;                                                  // (Parm)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
struct UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Params
{
	struct FString                                     AllowedBrowserID;                                         // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
struct UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
struct UPurchaseFlowJSBridge_GetExternalBrowserPath_Params
{
	struct FString                                     BrowserId;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
struct UPurchaseFlowJSBridge_GetExternalBrowserName_Params
{
	struct FString                                     BrowserId;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
struct UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
