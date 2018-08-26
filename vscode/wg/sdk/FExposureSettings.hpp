#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExposureSettings // Size: 0x8
{
public:
    int32_t LogOffset; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.ExposureSettings.LogOffset */
    bool bFixed; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.ExposureSettings.bFixed */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExposureSettings = sizeof(FExposureSettings); // 8
    static_assert(sizeof(FExposureSettings) == 0x8, "Size of FExposureSettings is not correct.");
	auto constexpr FExposureSettings_LogOffset_Offset = offsetof(FExposureSettings, LogOffset);
	static_assert(FExposureSettings_LogOffset_Offset == 0x0, "FExposureSettings::LogOffset offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
