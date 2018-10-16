#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVelocityGearData // Size: 0x8
{
public:
    float DownSpeed; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.VelocityGearData.DownSpeed */
    float UpSpeed; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.VelocityGearData.UpSpeed */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVelocityGearData = sizeof(FVelocityGearData); // 8
    static_assert(sizeof(FVelocityGearData) == 0x8, "Size of FVelocityGearData is not correct.");
	auto constexpr FVelocityGearData_DownSpeed_Offset = offsetof(FVelocityGearData, DownSpeed);
	static_assert(FVelocityGearData_DownSpeed_Offset == 0x0, "FVelocityGearData::DownSpeed offset is not 0");
	auto constexpr FVelocityGearData_UpSpeed_Offset = offsetof(FVelocityGearData, UpSpeed);
	static_assert(FVelocityGearData_UpSpeed_Offset == 0x4, "FVelocityGearData::UpSpeed offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
