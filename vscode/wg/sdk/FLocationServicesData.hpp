#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLocationServicesData // Size: 0x18
{
public:
    float Timestamp; /* Ofs: 0x0 Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.Timestamp */
    float Longitude; /* Ofs: 0x4 Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.Longitude */
    float Latitude; /* Ofs: 0x8 Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.Latitude */
    float HorizontalAccuracy; /* Ofs: 0xC Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.HorizontalAccuracy */
    float VerticalAccuracy; /* Ofs: 0x10 Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.VerticalAccuracy */
    float Altitude; /* Ofs: 0x14 Size: 0x4 FloatProperty LocationServicesBPLibrary.LocationServicesData.Altitude */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLocationServicesData = sizeof(FLocationServicesData); // 24
    static_assert(sizeof(FLocationServicesData) == 0x18, "Size of FLocationServicesData is not correct.");
	auto constexpr FLocationServicesData_Timestamp_Offset = offsetof(FLocationServicesData, Timestamp);
	static_assert(FLocationServicesData_Timestamp_Offset == 0x0, "FLocationServicesData::Timestamp offset is not 0");
	auto constexpr FLocationServicesData_Longitude_Offset = offsetof(FLocationServicesData, Longitude);
	static_assert(FLocationServicesData_Longitude_Offset == 0x4, "FLocationServicesData::Longitude offset is not 4");
	auto constexpr FLocationServicesData_Latitude_Offset = offsetof(FLocationServicesData, Latitude);
	static_assert(FLocationServicesData_Latitude_Offset == 0x8, "FLocationServicesData::Latitude offset is not 8");
	auto constexpr FLocationServicesData_HorizontalAccuracy_Offset = offsetof(FLocationServicesData, HorizontalAccuracy);
	static_assert(FLocationServicesData_HorizontalAccuracy_Offset == 0xc, "FLocationServicesData::HorizontalAccuracy offset is not c");
	auto constexpr FLocationServicesData_VerticalAccuracy_Offset = offsetof(FLocationServicesData, VerticalAccuracy);
	static_assert(FLocationServicesData_VerticalAccuracy_Offset == 0x10, "FLocationServicesData::VerticalAccuracy offset is not 10");
	auto constexpr FLocationServicesData_Altitude_Offset = offsetof(FLocationServicesData, Altitude);
	static_assert(FLocationServicesData_Altitude_Offset == 0x14, "FLocationServicesData::Altitude offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
