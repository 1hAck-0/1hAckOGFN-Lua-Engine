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

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}


	bool STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
	bool STATIC_StartSession();
	void STATIC_SetUserId(struct FString UserId);
	void STATIC_SetSessionId(struct FString SessionId);
	void STATIC_SetLocation(struct FString Location);
	void STATIC_SetGender(struct FString Gender);
	void STATIC_SetBuildInfo(struct FString BuildInfo);
	void STATIC_SetAge(int Age);
	void STATIC_RecordSimpleItemPurchaseWithAttributes(struct FString ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordSimpleItemPurchase(struct FString ItemId, int ItemQuantity);
	void STATIC_RecordSimpleCurrencyPurchaseWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordSimpleCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount);
	void STATIC_RecordProgressWithFullHierarchyAndAttributes(struct FString ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordProgressWithAttributes(struct FString ProgressType, struct FString ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordProgress(struct FString ProgressType, struct FString ProgressName);
	void STATIC_RecordItemPurchase(struct FString ItemId, struct FString Currency, int PerItemCost, int ItemQuantity);
	void STATIC_RecordEventWithAttributes(struct FString EventName, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordEventWithAttribute(struct FString EventName, struct FString AttributeName, struct FString AttributeValue);
	void STATIC_RecordEvent(struct FString EventName);
	void STATIC_RecordErrorWithAttributes(struct FString Error, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordError(struct FString Error);
	void STATIC_RecordCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount, struct FString RealCurrencyType, float RealMoneyCost, struct FString PaymentProvider);
	void STATIC_RecordCurrencyGivenWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	void STATIC_RecordCurrencyGiven(struct FString GameCurrencyType, int GameCurrencyAmount);
	struct FAnalyticsEventAttr STATIC_MakeEventAttribute(struct FString AttributeName, struct FString AttributeValue);
	struct FString STATIC_GetUserId();
	struct FString STATIC_GetSessionId();
	void STATIC_FlushEvents();
	void STATIC_EndSession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
