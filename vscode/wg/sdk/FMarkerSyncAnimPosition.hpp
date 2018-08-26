#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMarkerSyncAnimPosition // Size: 0x18
{
public:
    FName PreviousMarkerName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.MarkerSyncAnimPosition.PreviousMarkerName */
    FName NextMarkerName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.MarkerSyncAnimPosition.NextMarkerName */
    float PositionBetweenMarkers; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.MarkerSyncAnimPosition.PositionBetweenMarkers */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMarkerSyncAnimPosition = sizeof(FMarkerSyncAnimPosition); // 24
    static_assert(sizeof(FMarkerSyncAnimPosition) == 0x18, "Size of FMarkerSyncAnimPosition is not correct.");
	auto constexpr FMarkerSyncAnimPosition_PreviousMarkerName_Offset = offsetof(FMarkerSyncAnimPosition, PreviousMarkerName);
	static_assert(FMarkerSyncAnimPosition_PreviousMarkerName_Offset == 0x0, "FMarkerSyncAnimPosition::PreviousMarkerName offset is not 0");
	auto constexpr FMarkerSyncAnimPosition_NextMarkerName_Offset = offsetof(FMarkerSyncAnimPosition, NextMarkerName);
	static_assert(FMarkerSyncAnimPosition_NextMarkerName_Offset == 0x8, "FMarkerSyncAnimPosition::NextMarkerName offset is not 8");
	auto constexpr FMarkerSyncAnimPosition_PositionBetweenMarkers_Offset = offsetof(FMarkerSyncAnimPosition, PositionBetweenMarkers);
	static_assert(FMarkerSyncAnimPosition_PositionBetweenMarkers_Offset == 0x10, "FMarkerSyncAnimPosition::PositionBetweenMarkers offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
