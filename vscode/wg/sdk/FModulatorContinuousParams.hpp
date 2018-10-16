#pragma once
#include "ModulationParamMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FModulatorContinuousParams // Size: 0x20
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ModulatorContinuousParams.ParameterName */
    float Default; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ModulatorContinuousParams.Default */
    float MinInput; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.ModulatorContinuousParams.MinInput */
    float MaxInput; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.ModulatorContinuousParams.MaxInput */
    float MinOutput; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.ModulatorContinuousParams.MinOutput */
    float MaxOutput; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.ModulatorContinuousParams.MaxOutput */
    TEnumAsByte<enum ModulationParamMode> ParamMode; /* Ofs: 0x1C Size: 0x1 ByteProperty Engine.ModulatorContinuousParams.ParamMode */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFModulatorContinuousParams = sizeof(FModulatorContinuousParams); // 32
    static_assert(sizeof(FModulatorContinuousParams) == 0x20, "Size of FModulatorContinuousParams is not correct.");
	auto constexpr FModulatorContinuousParams_ParameterName_Offset = offsetof(FModulatorContinuousParams, ParameterName);
	static_assert(FModulatorContinuousParams_ParameterName_Offset == 0x0, "FModulatorContinuousParams::ParameterName offset is not 0");
	auto constexpr FModulatorContinuousParams_Default_Offset = offsetof(FModulatorContinuousParams, Default);
	static_assert(FModulatorContinuousParams_Default_Offset == 0x8, "FModulatorContinuousParams::Default offset is not 8");
	auto constexpr FModulatorContinuousParams_MinInput_Offset = offsetof(FModulatorContinuousParams, MinInput);
	static_assert(FModulatorContinuousParams_MinInput_Offset == 0xc, "FModulatorContinuousParams::MinInput offset is not c");
	auto constexpr FModulatorContinuousParams_MaxInput_Offset = offsetof(FModulatorContinuousParams, MaxInput);
	static_assert(FModulatorContinuousParams_MaxInput_Offset == 0x10, "FModulatorContinuousParams::MaxInput offset is not 10");
	auto constexpr FModulatorContinuousParams_MinOutput_Offset = offsetof(FModulatorContinuousParams, MinOutput);
	static_assert(FModulatorContinuousParams_MinOutput_Offset == 0x14, "FModulatorContinuousParams::MinOutput offset is not 14");
	auto constexpr FModulatorContinuousParams_MaxOutput_Offset = offsetof(FModulatorContinuousParams, MaxOutput);
	static_assert(FModulatorContinuousParams_MaxOutput_Offset == 0x18, "FModulatorContinuousParams::MaxOutput offset is not 18");
	auto constexpr FModulatorContinuousParams_ParamMode_Offset = offsetof(FModulatorContinuousParams, ParamMode);
	static_assert(FModulatorContinuousParams_ParamMode_Offset == 0x1c, "FModulatorContinuousParams::ParamMode offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
