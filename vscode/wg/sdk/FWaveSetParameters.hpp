#pragma once
#include "FWaveParameter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWaveSetParameters // Size: 0xA0
{
public:
    FWaveParameter Wave01; /* Ofs: 0x0 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave01 */
    FWaveParameter Wave02; /* Ofs: 0x14 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave02 */
    FWaveParameter Wave03; /* Ofs: 0x28 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave03 */
    FWaveParameter Wave04; /* Ofs: 0x3C Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave04 */
    FWaveParameter Wave05; /* Ofs: 0x50 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave05 */
    FWaveParameter Wave06; /* Ofs: 0x64 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave06 */
    FWaveParameter Wave07; /* Ofs: 0x78 Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave07 */
    FWaveParameter Wave08; /* Ofs: 0x8C Size: 0x14 StructProperty OceanPlugin.WaveSetParameters.Wave08 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWaveSetParameters = sizeof(FWaveSetParameters); // 160
    static_assert(sizeof(FWaveSetParameters) == 0xA0, "Size of FWaveSetParameters is not correct.");
	auto constexpr FWaveSetParameters_Wave01_Offset = offsetof(FWaveSetParameters, Wave01);
	static_assert(FWaveSetParameters_Wave01_Offset == 0x0, "FWaveSetParameters::Wave01 offset is not 0");
	auto constexpr FWaveSetParameters_Wave02_Offset = offsetof(FWaveSetParameters, Wave02);
	static_assert(FWaveSetParameters_Wave02_Offset == 0x14, "FWaveSetParameters::Wave02 offset is not 14");
	auto constexpr FWaveSetParameters_Wave03_Offset = offsetof(FWaveSetParameters, Wave03);
	static_assert(FWaveSetParameters_Wave03_Offset == 0x28, "FWaveSetParameters::Wave03 offset is not 28");
	auto constexpr FWaveSetParameters_Wave04_Offset = offsetof(FWaveSetParameters, Wave04);
	static_assert(FWaveSetParameters_Wave04_Offset == 0x3c, "FWaveSetParameters::Wave04 offset is not 3c");
	auto constexpr FWaveSetParameters_Wave05_Offset = offsetof(FWaveSetParameters, Wave05);
	static_assert(FWaveSetParameters_Wave05_Offset == 0x50, "FWaveSetParameters::Wave05 offset is not 50");
	auto constexpr FWaveSetParameters_Wave06_Offset = offsetof(FWaveSetParameters, Wave06);
	static_assert(FWaveSetParameters_Wave06_Offset == 0x64, "FWaveSetParameters::Wave06 offset is not 64");
	auto constexpr FWaveSetParameters_Wave07_Offset = offsetof(FWaveSetParameters, Wave07);
	static_assert(FWaveSetParameters_Wave07_Offset == 0x78, "FWaveSetParameters::Wave07 offset is not 78");
	auto constexpr FWaveSetParameters_Wave08_Offset = offsetof(FWaveSetParameters, Wave08);
	static_assert(FWaveSetParameters_Wave08_Offset == 0x8c, "FWaveSetParameters::Wave08 offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
