#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInteriorSettings // Size: 0x24
{
public:
    bool bIsWorldSettings; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.InteriorSettings.bIsWorldSettings */
    uint8_t UnknownData1[0x3];
    float ExteriorVolume; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.InteriorSettings.ExteriorVolume */
    float ExteriorTime; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.InteriorSettings.ExteriorTime */
    float ExteriorLPF; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.InteriorSettings.ExteriorLPF */
    float ExteriorLPFTime; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.InteriorSettings.ExteriorLPFTime */
    float InteriorVolume; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.InteriorSettings.InteriorVolume */
    float InteriorTime; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.InteriorSettings.InteriorTime */
    float InteriorLPF; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.InteriorSettings.InteriorLPF */
    float InteriorLPFTime; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.InteriorSettings.InteriorLPFTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInteriorSettings = sizeof(FInteriorSettings); // 36
    static_assert(sizeof(FInteriorSettings) == 0x24, "Size of FInteriorSettings is not correct.");
	auto constexpr FInteriorSettings_ExteriorVolume_Offset = offsetof(FInteriorSettings, ExteriorVolume);
	static_assert(FInteriorSettings_ExteriorVolume_Offset == 0x4, "FInteriorSettings::ExteriorVolume offset is not 4");
	auto constexpr FInteriorSettings_ExteriorTime_Offset = offsetof(FInteriorSettings, ExteriorTime);
	static_assert(FInteriorSettings_ExteriorTime_Offset == 0x8, "FInteriorSettings::ExteriorTime offset is not 8");
	auto constexpr FInteriorSettings_ExteriorLPF_Offset = offsetof(FInteriorSettings, ExteriorLPF);
	static_assert(FInteriorSettings_ExteriorLPF_Offset == 0xc, "FInteriorSettings::ExteriorLPF offset is not c");
	auto constexpr FInteriorSettings_ExteriorLPFTime_Offset = offsetof(FInteriorSettings, ExteriorLPFTime);
	static_assert(FInteriorSettings_ExteriorLPFTime_Offset == 0x10, "FInteriorSettings::ExteriorLPFTime offset is not 10");
	auto constexpr FInteriorSettings_InteriorVolume_Offset = offsetof(FInteriorSettings, InteriorVolume);
	static_assert(FInteriorSettings_InteriorVolume_Offset == 0x14, "FInteriorSettings::InteriorVolume offset is not 14");
	auto constexpr FInteriorSettings_InteriorTime_Offset = offsetof(FInteriorSettings, InteriorTime);
	static_assert(FInteriorSettings_InteriorTime_Offset == 0x18, "FInteriorSettings::InteriorTime offset is not 18");
	auto constexpr FInteriorSettings_InteriorLPF_Offset = offsetof(FInteriorSettings, InteriorLPF);
	static_assert(FInteriorSettings_InteriorLPF_Offset == 0x1c, "FInteriorSettings::InteriorLPF offset is not 1c");
	auto constexpr FInteriorSettings_InteriorLPFTime_Offset = offsetof(FInteriorSettings, InteriorLPFTime);
	static_assert(FInteriorSettings_InteriorLPFTime_Offset == 0x20, "FInteriorSettings::InteriorLPFTime offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
