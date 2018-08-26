#pragma once
#include "FCaptureProtocolID.hpp"
#include "FMovieSceneCaptureSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCapture // Size: 0x250
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(157); // id32("Class MovieSceneCapture.MovieSceneCapture")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	FCaptureProtocolID CaptureType; /* Ofs: 0x40 Size: 0x8 - StructProperty MovieSceneCapture.MovieSceneCapture.CaptureType */
	ExternalPtr<struct UMovieSceneCaptureProtocolSettings> ProtocolSettings; /* Ofs: 0x48 Size: 0x8 - ObjectProperty MovieSceneCapture.MovieSceneCapture.ProtocolSettings */
	FMovieSceneCaptureSettings Settings; /* Ofs: 0x50 Size: 0x50 - StructProperty MovieSceneCapture.MovieSceneCapture.Settings */
	uint8_t boolFieldA0;
	uint8_t boolFieldA1;
	uint8_t UnknownDataA2[0x6];
	FString AdditionalCommandLineArguments; /* Ofs: 0xA8 Size: 0x10 - StrProperty MovieSceneCapture.MovieSceneCapture.AdditionalCommandLineArguments */
	FString InheritedCommandLineArguments; /* Ofs: 0xB8 Size: 0x10 - StrProperty MovieSceneCapture.MovieSceneCapture.InheritedCommandLineArguments */
	uint8_t UnknownDataC8[0x188];


	inline bool SetCaptureType(t_structHelper inst, FCaptureProtocolID value) { inst.WriteOffset(0x40, value); }
	inline bool SetProtocolSettings(t_structHelper inst, ExternalPtr<struct UMovieSceneCaptureProtocolSettings> value) { inst.WriteOffset(0x48, value); }
	inline bool SetSettings(t_structHelper inst, FMovieSceneCaptureSettings value) { inst.WriteOffset(0x50, value); }
	inline bool bUseSeparateProcess()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbUseSeparateProcess(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCloseEditorWhenCaptureStarts()
	{
		return boolFieldA1& 0x1;
	}
	inline bool SetbCloseEditorWhenCaptureStarts(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAdditionalCommandLineArguments(t_structHelper inst, FString value) { inst.WriteOffset(0xA8, value); }
	inline bool SetInheritedCommandLineArguments(t_structHelper inst, FString value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCapture = sizeof(UMovieSceneCapture); // 592
    static_assert(sizeof(UMovieSceneCapture) == 0x250, "Size of UMovieSceneCapture is not correct.");
	auto constexpr UMovieSceneCapture_CaptureType_Offset = offsetof(UMovieSceneCapture, CaptureType);
	static_assert(UMovieSceneCapture_CaptureType_Offset == 0x40, "UMovieSceneCapture::CaptureType offset is not 40");
	auto constexpr UMovieSceneCapture_ProtocolSettings_Offset = offsetof(UMovieSceneCapture, ProtocolSettings);
	static_assert(UMovieSceneCapture_ProtocolSettings_Offset == 0x48, "UMovieSceneCapture::ProtocolSettings offset is not 48");
	auto constexpr UMovieSceneCapture_Settings_Offset = offsetof(UMovieSceneCapture, Settings);
	static_assert(UMovieSceneCapture_Settings_Offset == 0x50, "UMovieSceneCapture::Settings offset is not 50");
	auto constexpr UMovieSceneCapture_boolFieldA0_Offset = offsetof(UMovieSceneCapture, boolFieldA0);
	static_assert(UMovieSceneCapture_boolFieldA0_Offset == 0xa0, "UMovieSceneCapture::boolFieldA0 offset is not a0");
	auto constexpr UMovieSceneCapture_boolFieldA1_Offset = offsetof(UMovieSceneCapture, boolFieldA1);
	static_assert(UMovieSceneCapture_boolFieldA1_Offset == 0xa1, "UMovieSceneCapture::boolFieldA1 offset is not a1");
	auto constexpr UMovieSceneCapture_AdditionalCommandLineArguments_Offset = offsetof(UMovieSceneCapture, AdditionalCommandLineArguments);
	static_assert(UMovieSceneCapture_AdditionalCommandLineArguments_Offset == 0xa8, "UMovieSceneCapture::AdditionalCommandLineArguments offset is not a8");
	auto constexpr UMovieSceneCapture_InheritedCommandLineArguments_Offset = offsetof(UMovieSceneCapture, InheritedCommandLineArguments);
	static_assert(UMovieSceneCapture_InheritedCommandLineArguments_Offset == 0xb8, "UMovieSceneCapture::InheritedCommandLineArguments offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
