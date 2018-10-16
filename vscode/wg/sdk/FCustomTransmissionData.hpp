#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomTransmissionData // Size: 0x20
{
public:
    bool bUseVelocityTransmission; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomTransmissionData.bUseVelocityTransmission */
    uint8_t UnknownData1[0x3];
    float CustomTransmissionMaxSpeed; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.CustomTransmissionData.CustomTransmissionMaxSpeed */
    bool bDownShiftingOnly; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomTransmissionData.bDownShiftingOnly */
    uint8_t UnknownData9[0x7];
    TArray<struct FVelocityGearData> VelocityGears; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.CustomTransmissionData.VelocityGears */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomTransmissionData = sizeof(FCustomTransmissionData); // 32
    static_assert(sizeof(FCustomTransmissionData) == 0x20, "Size of FCustomTransmissionData is not correct.");
	auto constexpr FCustomTransmissionData_CustomTransmissionMaxSpeed_Offset = offsetof(FCustomTransmissionData, CustomTransmissionMaxSpeed);
	static_assert(FCustomTransmissionData_CustomTransmissionMaxSpeed_Offset == 0x4, "FCustomTransmissionData::CustomTransmissionMaxSpeed offset is not 4");
	auto constexpr FCustomTransmissionData_VelocityGears_Offset = offsetof(FCustomTransmissionData, VelocityGears);
	static_assert(FCustomTransmissionData_VelocityGears_Offset == 0x10, "FCustomTransmissionData::VelocityGears offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
