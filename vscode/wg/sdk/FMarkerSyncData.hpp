#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMarkerSyncData // Size: 0x20
{
public:
    TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.MarkerSyncData.AuthoredSyncMarkers */
    uint8_t UnknownData10[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMarkerSyncData = sizeof(FMarkerSyncData); // 32
    static_assert(sizeof(FMarkerSyncData) == 0x20, "Size of FMarkerSyncData is not correct.");
	auto constexpr FMarkerSyncData_AuthoredSyncMarkers_Offset = offsetof(FMarkerSyncData, AuthoredSyncMarkers);
	static_assert(FMarkerSyncData_AuthoredSyncMarkers_Offset == 0x0, "FMarkerSyncData::AuthoredSyncMarkers offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
