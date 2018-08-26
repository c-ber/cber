#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeSplineSegmentConnection // Size: 0x18
{
public:
    ExternalPtr<struct ULandscapeSplineControlPoint> ControlPoint; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeSplineSegmentConnection.ControlPoint */
    float TangentLen; /* Ofs: 0x8 Size: 0x4 FloatProperty Landscape.LandscapeSplineSegmentConnection.TangentLen */
    uint8_t UnknownDataC[0x4];
    FName SocketName; /* Ofs: 0x10 Size: 0x8 NameProperty Landscape.LandscapeSplineSegmentConnection.SocketName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeSplineSegmentConnection = sizeof(FLandscapeSplineSegmentConnection); // 24
    static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x18, "Size of FLandscapeSplineSegmentConnection is not correct.");
	auto constexpr FLandscapeSplineSegmentConnection_ControlPoint_Offset = offsetof(FLandscapeSplineSegmentConnection, ControlPoint);
	static_assert(FLandscapeSplineSegmentConnection_ControlPoint_Offset == 0x0, "FLandscapeSplineSegmentConnection::ControlPoint offset is not 0");
	auto constexpr FLandscapeSplineSegmentConnection_TangentLen_Offset = offsetof(FLandscapeSplineSegmentConnection, TangentLen);
	static_assert(FLandscapeSplineSegmentConnection_TangentLen_Offset == 0x8, "FLandscapeSplineSegmentConnection::TangentLen offset is not 8");
	auto constexpr FLandscapeSplineSegmentConnection_SocketName_Offset = offsetof(FLandscapeSplineSegmentConnection, SocketName);
	static_assert(FLandscapeSplineSegmentConnection_SocketName_Offset == 0x10, "FLandscapeSplineSegmentConnection::SocketName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
