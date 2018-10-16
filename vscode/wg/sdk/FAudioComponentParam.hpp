#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAudioComponentParam // Size: 0x20
{
public:
    FName ParamName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AudioComponentParam.ParamName */
    float FloatParam; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.AudioComponentParam.FloatParam */
    bool BoolParam; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.AudioComponentParam.BoolParam */
    uint8_t UnknownDataD[0x3];
    int32_t IntParam; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.AudioComponentParam.IntParam */
    uint8_t UnknownData14[0x4];
    ExternalPtr<struct USoundWave> SoundWaveParam; /* Ofs: 0x18 Size: 0x8 ObjectProperty Engine.AudioComponentParam.SoundWaveParam */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAudioComponentParam = sizeof(FAudioComponentParam); // 32
    static_assert(sizeof(FAudioComponentParam) == 0x20, "Size of FAudioComponentParam is not correct.");
	auto constexpr FAudioComponentParam_ParamName_Offset = offsetof(FAudioComponentParam, ParamName);
	static_assert(FAudioComponentParam_ParamName_Offset == 0x0, "FAudioComponentParam::ParamName offset is not 0");
	auto constexpr FAudioComponentParam_FloatParam_Offset = offsetof(FAudioComponentParam, FloatParam);
	static_assert(FAudioComponentParam_FloatParam_Offset == 0x8, "FAudioComponentParam::FloatParam offset is not 8");
	auto constexpr FAudioComponentParam_IntParam_Offset = offsetof(FAudioComponentParam, IntParam);
	static_assert(FAudioComponentParam_IntParam_Offset == 0x10, "FAudioComponentParam::IntParam offset is not 10");
	auto constexpr FAudioComponentParam_SoundWaveParam_Offset = offsetof(FAudioComponentParam, SoundWaveParam);
	static_assert(FAudioComponentParam_SoundWaveParam_Offset == 0x18, "FAudioComponentParam::SoundWaveParam offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
