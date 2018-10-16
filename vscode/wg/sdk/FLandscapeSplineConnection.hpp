#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeSplineConnection // Size: 0x10
{
public:
    ExternalPtr<struct ULandscapeSplineSegment> Segment; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeSplineConnection.Segment */
    bool End; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Landscape.LandscapeSplineConnection.End */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeSplineConnection = sizeof(FLandscapeSplineConnection); // 16
    static_assert(sizeof(FLandscapeSplineConnection) == 0x10, "Size of FLandscapeSplineConnection is not correct.");
	auto constexpr FLandscapeSplineConnection_Segment_Offset = offsetof(FLandscapeSplineConnection, Segment);
	static_assert(FLandscapeSplineConnection_Segment_Offset == 0x0, "FLandscapeSplineConnection::Segment offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
