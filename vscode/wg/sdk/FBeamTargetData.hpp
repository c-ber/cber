#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBeamTargetData // Size: 0x10
{
public:
    FName TargetName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BeamTargetData.TargetName */
    float TargetPercentage; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.BeamTargetData.TargetPercentage */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBeamTargetData = sizeof(FBeamTargetData); // 16
    static_assert(sizeof(FBeamTargetData) == 0x10, "Size of FBeamTargetData is not correct.");
	auto constexpr FBeamTargetData_TargetName_Offset = offsetof(FBeamTargetData, TargetName);
	static_assert(FBeamTargetData_TargetName_Offset == 0x0, "FBeamTargetData::TargetName offset is not 0");
	auto constexpr FBeamTargetData_TargetPercentage_Offset = offsetof(FBeamTargetData, TargetPercentage);
	static_assert(FBeamTargetData_TargetPercentage_Offset == 0x8, "FBeamTargetData::TargetPercentage offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
