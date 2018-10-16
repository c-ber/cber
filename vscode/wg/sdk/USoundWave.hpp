#pragma once
#include "USoundBase.hpp"
#include "ESoundGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundWave // Size: 0x288
	: public USoundBase // Size: 0xA8
{
private:
	typedef USoundWave t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(349); // id32("Class Engine.SoundWave")
		return ptr;
	}
	int32_t CompressionQuality; /* Ofs: 0xA8 Size: 0x4 - IntProperty Engine.SoundWave.CompressionQuality */
	uint8_t boolFieldAC;
	uint8_t UnknownDataAD[0x3];
	int32_t StreamingPriority; /* Ofs: 0xB0 Size: 0x4 - IntProperty Engine.SoundWave.StreamingPriority */
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];
	TEnumAsByte<enum ESoundGroup> SoundGroup; /* Ofs: 0xB8 Size: 0x1 - ByteProperty Engine.SoundWave.SoundGroup */
	uint8_t UnknownDataB9[0x7];
	FString SpokenText; /* Ofs: 0xC0 Size: 0x10 - StrProperty Engine.SoundWave.SpokenText */
	float SubtitlePriority; /* Ofs: 0xD0 Size: 0x4 - FloatProperty Engine.SoundWave.SubtitlePriority */
	float Volume; /* Ofs: 0xD4 Size: 0x4 - FloatProperty Engine.SoundWave.Volume */
	float Pitch; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.SoundWave.Pitch */
	int32_t NumChannels; /* Ofs: 0xDC Size: 0x4 - IntProperty Engine.SoundWave.NumChannels */
	int32_t SampleRate; /* Ofs: 0xE0 Size: 0x4 - IntProperty Engine.SoundWave.SampleRate */
	int32_t RawPCMDataSize; /* Ofs: 0xE4 Size: 0x4 - IntProperty Engine.SoundWave.RawPCMDataSize */
	TArray<struct FSubtitleCue> Subtitles; /* Ofs: 0xE8 Size: 0x10 - ArrayProperty Engine.SoundWave.Subtitles */
	TArray<struct FLocalizedSubtitle> LocalizedSubtitles; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty Engine.SoundWave.LocalizedSubtitles */
	ExternalPtr<struct UCurveTable> Curves; /* Ofs: 0x108 Size: 0x8 - ObjectProperty Engine.SoundWave.Curves */
	ExternalPtr<struct UCurveTable> InternalCurves; /* Ofs: 0x110 Size: 0x8 - ObjectProperty Engine.SoundWave.InternalCurves */
	uint8_t UnknownData118[0x170];


	inline bool SetCompressionQuality(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA8, value); }
	inline bool bLooping()
	{
		return boolFieldAC& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStreaming()
	{
		return boolFieldAC& 0x2;
	}
	inline bool SetbStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetStreamingPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB0, value); }
	inline bool bMature()
	{
		return boolFieldB4& 0x8;
	}
	inline bool SetbMature(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bManualWordWrap()
	{
		return boolFieldB4& 0x10;
	}
	inline bool SetbManualWordWrap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSingleLine()
	{
		return boolFieldB4& 0x20;
	}
	inline bool SetbSingleLine(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bVirtualizeWhenSilent()
	{
		return boolFieldB4& 0x40;
	}
	inline bool SetbVirtualizeWhenSilent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetSoundGroup(t_structHelper inst, TEnumAsByte<enum ESoundGroup> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetSpokenText(t_structHelper inst, FString value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSubtitlePriority(t_structHelper inst, float value) { inst.WriteOffset(0xD0, value); }
	inline bool SetVolume(t_structHelper inst, float value) { inst.WriteOffset(0xD4, value); }
	inline bool SetPitch(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetNumChannels(t_structHelper inst, int32_t value) { inst.WriteOffset(0xDC, value); }
	inline bool SetSampleRate(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE0, value); }
	inline bool SetRawPCMDataSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE4, value); }
	inline bool SetSubtitles(t_structHelper inst, TArray<struct FSubtitleCue> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetLocalizedSubtitles(t_structHelper inst, TArray<struct FLocalizedSubtitle> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetCurves(t_structHelper inst, ExternalPtr<struct UCurveTable> value) { inst.WriteOffset(0x108, value); }
	inline bool SetInternalCurves(t_structHelper inst, ExternalPtr<struct UCurveTable> value) { inst.WriteOffset(0x110, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundWave = sizeof(USoundWave); // 648
    static_assert(sizeof(USoundWave) == 0x288, "Size of USoundWave is not correct.");
	auto constexpr USoundWave_CompressionQuality_Offset = offsetof(USoundWave, CompressionQuality);
	static_assert(USoundWave_CompressionQuality_Offset == 0xa8, "USoundWave::CompressionQuality offset is not a8");
	auto constexpr USoundWave_boolFieldAC_Offset = offsetof(USoundWave, boolFieldAC);
	static_assert(USoundWave_boolFieldAC_Offset == 0xac, "USoundWave::boolFieldAC offset is not ac");
	auto constexpr USoundWave_StreamingPriority_Offset = offsetof(USoundWave, StreamingPriority);
	static_assert(USoundWave_StreamingPriority_Offset == 0xb0, "USoundWave::StreamingPriority offset is not b0");
	auto constexpr USoundWave_boolFieldB4_Offset = offsetof(USoundWave, boolFieldB4);
	static_assert(USoundWave_boolFieldB4_Offset == 0xb4, "USoundWave::boolFieldB4 offset is not b4");
	auto constexpr USoundWave_SoundGroup_Offset = offsetof(USoundWave, SoundGroup);
	static_assert(USoundWave_SoundGroup_Offset == 0xb8, "USoundWave::SoundGroup offset is not b8");
	auto constexpr USoundWave_SpokenText_Offset = offsetof(USoundWave, SpokenText);
	static_assert(USoundWave_SpokenText_Offset == 0xc0, "USoundWave::SpokenText offset is not c0");
	auto constexpr USoundWave_SubtitlePriority_Offset = offsetof(USoundWave, SubtitlePriority);
	static_assert(USoundWave_SubtitlePriority_Offset == 0xd0, "USoundWave::SubtitlePriority offset is not d0");
	auto constexpr USoundWave_Volume_Offset = offsetof(USoundWave, Volume);
	static_assert(USoundWave_Volume_Offset == 0xd4, "USoundWave::Volume offset is not d4");
	auto constexpr USoundWave_Pitch_Offset = offsetof(USoundWave, Pitch);
	static_assert(USoundWave_Pitch_Offset == 0xd8, "USoundWave::Pitch offset is not d8");
	auto constexpr USoundWave_NumChannels_Offset = offsetof(USoundWave, NumChannels);
	static_assert(USoundWave_NumChannels_Offset == 0xdc, "USoundWave::NumChannels offset is not dc");
	auto constexpr USoundWave_SampleRate_Offset = offsetof(USoundWave, SampleRate);
	static_assert(USoundWave_SampleRate_Offset == 0xe0, "USoundWave::SampleRate offset is not e0");
	auto constexpr USoundWave_RawPCMDataSize_Offset = offsetof(USoundWave, RawPCMDataSize);
	static_assert(USoundWave_RawPCMDataSize_Offset == 0xe4, "USoundWave::RawPCMDataSize offset is not e4");
	auto constexpr USoundWave_Subtitles_Offset = offsetof(USoundWave, Subtitles);
	static_assert(USoundWave_Subtitles_Offset == 0xe8, "USoundWave::Subtitles offset is not e8");
	auto constexpr USoundWave_LocalizedSubtitles_Offset = offsetof(USoundWave, LocalizedSubtitles);
	static_assert(USoundWave_LocalizedSubtitles_Offset == 0xf8, "USoundWave::LocalizedSubtitles offset is not f8");
	auto constexpr USoundWave_Curves_Offset = offsetof(USoundWave, Curves);
	static_assert(USoundWave_Curves_Offset == 0x108, "USoundWave::Curves offset is not 108");
	auto constexpr USoundWave_InternalCurves_Offset = offsetof(USoundWave, InternalCurves);
	static_assert(USoundWave_InternalCurves_Offset == 0x110, "USoundWave::InternalCurves offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
