#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelViewportInfo // Size: 0x20
{
public:
    FVector CamPosition; /* Ofs: 0x0 Size: 0xC StructProperty Engine.LevelViewportInfo.CamPosition */
    FRotator CamRotation; /* Ofs: 0xC Size: 0xC StructProperty Engine.LevelViewportInfo.CamRotation */
    float CamOrthoZoom; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.LevelViewportInfo.CamOrthoZoom */
    bool CamUpdated; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.LevelViewportInfo.CamUpdated */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelViewportInfo = sizeof(FLevelViewportInfo); // 32
    static_assert(sizeof(FLevelViewportInfo) == 0x20, "Size of FLevelViewportInfo is not correct.");
	auto constexpr FLevelViewportInfo_CamPosition_Offset = offsetof(FLevelViewportInfo, CamPosition);
	static_assert(FLevelViewportInfo_CamPosition_Offset == 0x0, "FLevelViewportInfo::CamPosition offset is not 0");
	auto constexpr FLevelViewportInfo_CamRotation_Offset = offsetof(FLevelViewportInfo, CamRotation);
	static_assert(FLevelViewportInfo_CamRotation_Offset == 0xc, "FLevelViewportInfo::CamRotation offset is not c");
	auto constexpr FLevelViewportInfo_CamOrthoZoom_Offset = offsetof(FLevelViewportInfo, CamOrthoZoom);
	static_assert(FLevelViewportInfo_CamOrthoZoom_Offset == 0x18, "FLevelViewportInfo::CamOrthoZoom offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
