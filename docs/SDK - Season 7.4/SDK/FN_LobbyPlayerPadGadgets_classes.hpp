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

// WidgetBlueprintGeneratedClass LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C
// 0x0040 (0x0278 - 0x0238)
class ULobbyPlayerPadGadgets_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULobbyGadgetButton_C*                        Gadget1;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ULobbyGadgetButton_C*                        Gadget2;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PlayerIndex;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0254(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered
	unsigned char                                      UnknownData02[0x10];                                      // 0x0268(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C");
		return ptr;
	}


	void Initialize(int PlayerIndex);
	void OnInputClicked();
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void Refresh(struct FFortTeamMemberInfo TeamMemberInfo);
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void OnMouseLeave(struct FPointerEvent MouseEvent);
	void ExecuteUbergraph_LobbyPlayerPadGadgets(int EntryPoint);
	void OnGadgetsMouseLeft__DelegateSignature();
	void OnGadgetsMouseEntered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
