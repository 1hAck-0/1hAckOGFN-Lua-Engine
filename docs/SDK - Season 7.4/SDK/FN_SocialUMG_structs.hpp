#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SocialUMG.EOnlineStatus
enum class EOnlineStatus : uint8_t
{
	Online                         = 0,
	Away                           = 1,
	Offline                        = 2,
	Blocked                        = 3,
	EOnlineStatus_MAX              = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialUMG.SocialChatMessageEntryTextStyle
// 0x0060
struct FSocialChatMessageEntryTextStyle
{
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0000(0x0050) (Edit, DisableEditOnInstance)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct SocialUMG.SocialChatMessageEntryStyle
// 0x0120
struct FSocialChatMessageEntryStyle
{
	struct FSocialChatMessageEntryTextStyle            SenderNameStyle;                                          // 0x0000(0x0060) (Edit, DisableEditOnInstance)
	struct FSocialChatMessageEntryTextStyle            ChannelNameStyle;                                         // 0x0060(0x0060) (Edit, DisableEditOnInstance)
	struct FSocialChatMessageEntryTextStyle            MessageTextStyle;                                         // 0x00C0(0x0060) (Edit, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
