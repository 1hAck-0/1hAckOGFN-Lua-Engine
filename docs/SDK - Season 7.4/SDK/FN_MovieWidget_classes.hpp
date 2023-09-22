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

// WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C
// 0x0040 (0x02A8 - 0x0268)
class UMovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Video_Image;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   Video_ScaleBox;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               shouldloop;                                               // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainAspectRatio;                                      // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0283(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0283(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MovieWidget.MovieWidget_C.OnMediaReadyToPlay
	unsigned char                                      UnknownData02[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty MovieWidget.MovieWidget_C.OnMediaFailedToOpen

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MovieWidget.MovieWidget_C");
		return ptr;
	}


	void SetDelayedContentValues();
	void Play(bool ShouldRewind);
	void StopPlaying();
	void Init(class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int AudioTrack);
	void Destruct();
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void ExecuteUbergraph_MovieWidget(int EntryPoint);
	void OnMediaFailedToOpen__DelegateSignature();
	void OnMediaReadyToPlay__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
