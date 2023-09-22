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

// WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C
// 0x00C0 (0x02F8 - 0x0238)
class URewardsIcon_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MaterializeAnimation;                                     // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            DisperseAnimation;                                        // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                            LazyImageIcon;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   ScaleBoxIconScale;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty RewardsIcon.RewardsIcon_C.OnSlideAnimationFinished
	unsigned char                                      UnknownData01[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty RewardsIcon.RewardsIcon_C.OnDisperseAnimationFinished
	unsigned char                                      UnknownData02[0x10];                                      // 0x0280(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty RewardsIcon.RewardsIcon_C.OnMaterializeAnimationFinished
	class UFortRewardNotificationData*                 Reward;                                                   // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimStartTime;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimStartTranslation;                                // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlideAnimTargetTranslation;                               // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                SlideAnimHandle;                                          // 0x02A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    IconMaterial;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty RewardsIcon.RewardsIcon_C.OnImageClicked
	class UMaterialInstanceDynamic*                    OriginalMaterial;                                         // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty RewardsIcon.RewardsIcon_C.GiftBoxMat

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsIcon.RewardsIcon_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void PopulateFromItemCacheData();
	void PopulateFromGiftBoxData();
	void PopulateFromDifficultyIncreaseRewards();
	void PopulateFromMissionAlertRewards();
	void Play_Show_Animation_Sound();
	void Play_Hide_Animation_Sound();
	void PlayShowAnimation();
	void RandomizeDesignView();
	void PopulateFromRandomLootLevel(class UTexture2D** Texture);
	void PopulateFromCollectionBookRewards();
	void PopulateFromExpedition();
	void PopulateFromNewQuest();
	void PopulateFromQuestRewards();
	void PopulateFromMissionRewards();
	void GetScale(float* Scale);
	void SetScale(float Scale);
	void PopulateFromLootLevel(int LootLevel, class UTexture2D** Texture);
	void PlaySlideAnimation(float TargetTranslation);
	void TickSlideAnimation();
	void HandleSlideAnimationFinished();
	void HandleShowAnimationFinished();
	void HandleHideAnimationFinished();
	void PopulateFromReward(class UFortRewardNotificationData* InRewardItem);
	void Cleanup();
	void PlayHideAnimation();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void whiteFadeOut(float Percent);
	void Destruct();
	void ExecuteUbergraph_RewardsIcon(int EntryPoint);
	void OnImageClicked__DelegateSignature();
	void OnMaterializeAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnDisperseAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
	void OnSlideAnimationFinished__DelegateSignature(class URewardsIcon_C* Icon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
