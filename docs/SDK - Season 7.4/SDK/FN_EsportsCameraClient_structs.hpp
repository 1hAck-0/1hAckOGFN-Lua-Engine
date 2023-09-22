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

// Enum EsportsCameraClient.EDisplayMode
enum class EDisplayMode : uint8_t
{
	None                           = 0,
	WebCam                         = 1,
	M3U8MovieTest                  = 2,
	EDisplayMode_MAX               = 3
};


// Enum EsportsCameraClient.EM3U8StreamState
enum class EM3U8StreamState : uint8_t
{
	RequestingM3U8                 = 0,
	M3U8Received                   = 1,
	M3U8Failed                     = 2,
	StartFirstBuffering            = 3,
	FirstBufferingComplete         = 4,
	PlayingTS                      = 5,
	TSFinished                     = 6,
	TSError                        = 7,
	EM3U8StreamState_MAX           = 8
};


// Enum EsportsCameraClient.EDecodeType
enum class EDecodeType : uint8_t
{
	DecodeNone                     = 0,
	DecodeWebCamLo                 = 1,
	EDecodeType_MAX                = 2
};


// Enum EsportsCameraClient.EWebCamMessageServiceSenderState
enum class EWebCamMessageServiceSenderState : uint8_t
{
	None                           = 0,
	Connecting                     = 1,
	SentHello                      = 2,
	Connected                      = 3,
	EWebCamMessageServiceSenderState_MAX = 4
};


// Enum EsportsCameraClient.EWebCameraMessageType
enum class EWebCameraMessageType : uint8_t
{
	None                           = 0,
	SC_Welcome                     = 1,
	CS_WebCamReaderReady           = 2,
	CS_WebCamViewerReady           = 3,
	SC_RequestWebCamUpdates        = 4,
	CS_HereIsWebCamUpdate          = 5,
	SC_MakeReadyToReceiveWebCamUpdates = 6,
	SC_HereIsWebCamUpdate          = 7,
	CS_StillAlive                  = 8,
	CS_ChangeWebCamViewerPlayer    = 9,
	CS_EndConnection               = 10,
	EWebCameraMessageType_MAX      = 11
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
