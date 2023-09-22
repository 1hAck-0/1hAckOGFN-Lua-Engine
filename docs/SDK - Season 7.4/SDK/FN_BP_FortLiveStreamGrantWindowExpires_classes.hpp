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

// WidgetBlueprintGeneratedClass BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C
// 0x0104 (0x033C - 0x0238)
class UBP_FortLiveStreamGrantWindowExpires_C : public UFortLiveStreamGrantWindowExpires
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeExpirationText;                                       // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               Border;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            ExpirationText;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_1;                                                // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      StreamImage;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 StreamBrush;                                              // 0x0268(0x0088) (Edit, BlueprintVisible)
	struct FTimespan                                   SimulatedTimespan;                                        // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerExpired
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerStarted
	struct FTimerHandle                                SimulatedExpirationTimerHandle;                           // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentName;                                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalNames;                                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               Viewers;                                                  // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SecondsToDisplayName;                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C");
		return ptr;
	}


	class UWidget* GetToolTipWidget_1();
	void Clean_Up_Name_Text();
	void Update_Name_Text();
	void Update_Expiration_Text(struct FTimespan Timespan);
	void Set_Stream_Brush(struct FSlateBrush InBrush);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLiveStreamingQuestWindowStarts_Event_1(float Seconds);
	void OnLiveStreamingQuestWindowEnds_Event_1();
	void OnLiveStreamingQuestWindowSelectedViewers_Event_1(TArray<struct FText> Names);
	void HandleSimulateExpirationTimer();
	void OnAnimation_Finished();
	void Handle_Wait_Between_Names();
	void TextFadedOut();
	void ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires(int EntryPoint);
	void StreamTimerStarted__DelegateSignature();
	void StreamTimerExpired__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
