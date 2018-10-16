#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeSplineInterpPoint // Size: 0x40
{
public:
    FVector Center; /* Ofs: 0x0 Size: 0xC StructProperty Landscape.LandscapeSplineInterpPoint.Center */
    FVector Left; /* Ofs: 0xC Size: 0xC StructProperty Landscape.LandscapeSplineInterpPoint.Left */
    FVector Right; /* Ofs: 0x18 Size: 0xC StructProperty Landscape.LandscapeSplineInterpPoint.Right */
    FVector FalloffLeft; /* Ofs: 0x24 Size: 0xC StructProperty Landscape.LandscapeSplineInterpPoint.FalloffLeft */
    FVector FalloffRight; /* Ofs: 0x30 Size: 0xC StructProperty Landscape.LandscapeSplineInterpPoint.FalloffRight */
    float StartEndFalloff; /* Ofs: 0x3C Size: 0x4 FloatProperty Landscape.LandscapeSplineInterpPoint.StartEndFalloff */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeSplineInterpPoint = sizeof(FLandscapeSplineInterpPoint); // 64
    static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x40, "Size of FLandscapeSplineInterpPoint is not correct.");
	auto constexpr FLandscapeSplineInterpPoint_Center_Offset = offsetof(FLandscapeSplineInterpPoint, Center);
	static_assert(FLandscapeSplineInterpPoint_Center_Offset == 0x0, "FLandscapeSplineInterpPoint::Center offset is not 0");
	auto constexpr FLandscapeSplineInterpPoint_Left_Offset = offsetof(FLandscapeSplineInterpPoint, Left);
	static_assert(FLandscapeSplineInterpPoint_Left_Offset == 0xc, "FLandscapeSplineInterpPoint::Left offset is not c");
	auto constexpr FLandscapeSplineInterpPoint_Right_Offset = offsetof(FLandscapeSplineInterpPoint, Right);
	static_assert(FLandscapeSplineInterpPoint_Right_Offset == 0x18, "FLandscapeSplineInterpPoint::Right offset is not 18");
	auto constexpr FLandscapeSplineInterpPoint_FalloffLeft_Offset = offsetof(FLandscapeSplineInterpPoint, FalloffLeft);
	static_assert(FLandscapeSplineInterpPoint_FalloffLeft_Offset == 0x24, "FLandscapeSplineInterpPoint::FalloffLeft offset is not 24");
	auto constexpr FLandscapeSplineInterpPoint_FalloffRight_Offset = offsetof(FLandscapeSplineInterpPoint, FalloffRight);
	static_assert(FLandscapeSplineInterpPoint_FalloffRight_Offset == 0x30, "FLandscapeSplineInterpPoint::FalloffRight offset is not 30");
	auto constexpr FLandscapeSplineInterpPoint_StartEndFalloff_Offset = offsetof(FLandscapeSplineInterpPoint, StartEndFalloff);
	static_assert(FLandscapeSplineInterpPoint_StartEndFalloff_Offset == 0x3c, "FLandscapeSplineInterpPoint::StartEndFalloff offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
