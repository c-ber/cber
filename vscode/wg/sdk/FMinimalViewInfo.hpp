#pragma once
#include "FRotator.hpp"
#include "ECameraProjectionMode.hpp"
#include "FPostProcessSettings.hpp"
#include "FVector2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMinimalViewInfo // Size: 0x580
{
public:
    FRotator Rotation; /* Ofs: 0x0 Size: 0xC StructProperty Engine.MinimalViewInfo.Rotation */
    float OrthoFarClipPlane; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.MinimalViewInfo.OrthoFarClipPlane */
    float FOV; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.MinimalViewInfo.FOV */
    bool bConstrainAspectRatio : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.MinimalViewInfo.bConstrainAspectRatio */
    bool bUseFieldOfViewForLOD : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 02 BoolProperty Engine.MinimalViewInfo.bUseFieldOfViewForLOD */
    uint8_t UnknownData15[0x3];
    float AspectRatio; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.MinimalViewInfo.AspectRatio */
    float OrthoNearClipPlane; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.MinimalViewInfo.OrthoNearClipPlane */
    TEnumAsByte<enum ECameraProjectionMode> ProjectionMode; /* Ofs: 0x20 Size: 0x1 ByteProperty Engine.MinimalViewInfo.ProjectionMode */
    uint8_t UnknownData21[0x3];
    float PostProcessBlendWeight; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.MinimalViewInfo.PostProcessBlendWeight */
    uint8_t UnknownData28[0x8];
    FPostProcessSettings PostProcessSettings; /* Ofs: 0x30 Size: 0x530 StructProperty Engine.MinimalViewInfo.PostProcessSettings */
    FVector2D OffCenterProjectionOffset; /* Ofs: 0x560 Size: 0x8 StructProperty Engine.MinimalViewInfo.OffCenterProjectionOffset */
    FVector Location; /* Ofs: 0x568 Size: 0xC StructProperty Engine.MinimalViewInfo.Location */
    float OrthoWidth; /* Ofs: 0x574 Size: 0x4 FloatProperty Engine.MinimalViewInfo.OrthoWidth */
    uint8_t UnknownData578[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMinimalViewInfo = sizeof(FMinimalViewInfo); // 1408
    static_assert(sizeof(FMinimalViewInfo) == 0x580, "Size of FMinimalViewInfo is not correct.");
	auto constexpr FMinimalViewInfo_Rotation_Offset = offsetof(FMinimalViewInfo, Rotation);
	static_assert(FMinimalViewInfo_Rotation_Offset == 0x0, "FMinimalViewInfo::Rotation offset is not 0");
	auto constexpr FMinimalViewInfo_OrthoFarClipPlane_Offset = offsetof(FMinimalViewInfo, OrthoFarClipPlane);
	static_assert(FMinimalViewInfo_OrthoFarClipPlane_Offset == 0xc, "FMinimalViewInfo::OrthoFarClipPlane offset is not c");
	auto constexpr FMinimalViewInfo_FOV_Offset = offsetof(FMinimalViewInfo, FOV);
	static_assert(FMinimalViewInfo_FOV_Offset == 0x10, "FMinimalViewInfo::FOV offset is not 10");
	auto constexpr FMinimalViewInfo_AspectRatio_Offset = offsetof(FMinimalViewInfo, AspectRatio);
	static_assert(FMinimalViewInfo_AspectRatio_Offset == 0x18, "FMinimalViewInfo::AspectRatio offset is not 18");
	auto constexpr FMinimalViewInfo_OrthoNearClipPlane_Offset = offsetof(FMinimalViewInfo, OrthoNearClipPlane);
	static_assert(FMinimalViewInfo_OrthoNearClipPlane_Offset == 0x1c, "FMinimalViewInfo::OrthoNearClipPlane offset is not 1c");
	auto constexpr FMinimalViewInfo_ProjectionMode_Offset = offsetof(FMinimalViewInfo, ProjectionMode);
	static_assert(FMinimalViewInfo_ProjectionMode_Offset == 0x20, "FMinimalViewInfo::ProjectionMode offset is not 20");
	auto constexpr FMinimalViewInfo_PostProcessBlendWeight_Offset = offsetof(FMinimalViewInfo, PostProcessBlendWeight);
	static_assert(FMinimalViewInfo_PostProcessBlendWeight_Offset == 0x24, "FMinimalViewInfo::PostProcessBlendWeight offset is not 24");
	auto constexpr FMinimalViewInfo_PostProcessSettings_Offset = offsetof(FMinimalViewInfo, PostProcessSettings);
	static_assert(FMinimalViewInfo_PostProcessSettings_Offset == 0x30, "FMinimalViewInfo::PostProcessSettings offset is not 30");
	auto constexpr FMinimalViewInfo_OffCenterProjectionOffset_Offset = offsetof(FMinimalViewInfo, OffCenterProjectionOffset);
	static_assert(FMinimalViewInfo_OffCenterProjectionOffset_Offset == 0x560, "FMinimalViewInfo::OffCenterProjectionOffset offset is not 560");
	auto constexpr FMinimalViewInfo_Location_Offset = offsetof(FMinimalViewInfo, Location);
	static_assert(FMinimalViewInfo_Location_Offset == 0x568, "FMinimalViewInfo::Location offset is not 568");
	auto constexpr FMinimalViewInfo_OrthoWidth_Offset = offsetof(FMinimalViewInfo, OrthoWidth);
	static_assert(FMinimalViewInfo_OrthoWidth_Offset == 0x574, "FMinimalViewInfo::OrthoWidth offset is not 574");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
