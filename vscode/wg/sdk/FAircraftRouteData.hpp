#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAircraftRouteData // Size: 0x40
{
public:
    ExternalPtr<struct UTslAircraftVehicle> Aircraft; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.AircraftRouteData.Aircraft */
    ExternalPtr<struct UImage> AircraftIcon; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.AircraftRouteData.AircraftIcon */
    ExternalPtr<struct UImage> ArrowHead; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.AircraftRouteData.ArrowHead */
    ExternalPtr<struct UImage> ArrowBody; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.AircraftRouteData.ArrowBody */
    ExternalPtr<struct UImage> ArrowTail; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.AircraftRouteData.ArrowTail */
    uint8_t UnknownData28[0x18];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAircraftRouteData = sizeof(FAircraftRouteData); // 64
    static_assert(sizeof(FAircraftRouteData) == 0x40, "Size of FAircraftRouteData is not correct.");
	auto constexpr FAircraftRouteData_Aircraft_Offset = offsetof(FAircraftRouteData, Aircraft);
	static_assert(FAircraftRouteData_Aircraft_Offset == 0x0, "FAircraftRouteData::Aircraft offset is not 0");
	auto constexpr FAircraftRouteData_AircraftIcon_Offset = offsetof(FAircraftRouteData, AircraftIcon);
	static_assert(FAircraftRouteData_AircraftIcon_Offset == 0x8, "FAircraftRouteData::AircraftIcon offset is not 8");
	auto constexpr FAircraftRouteData_ArrowHead_Offset = offsetof(FAircraftRouteData, ArrowHead);
	static_assert(FAircraftRouteData_ArrowHead_Offset == 0x10, "FAircraftRouteData::ArrowHead offset is not 10");
	auto constexpr FAircraftRouteData_ArrowBody_Offset = offsetof(FAircraftRouteData, ArrowBody);
	static_assert(FAircraftRouteData_ArrowBody_Offset == 0x18, "FAircraftRouteData::ArrowBody offset is not 18");
	auto constexpr FAircraftRouteData_ArrowTail_Offset = offsetof(FAircraftRouteData, ArrowTail);
	static_assert(FAircraftRouteData_ArrowTail_Offset == 0x20, "FAircraftRouteData::ArrowTail offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
