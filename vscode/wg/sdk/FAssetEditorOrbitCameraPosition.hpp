#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAssetEditorOrbitCameraPosition // Size: 0x28
{
public:
    bool bIsSet; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.AssetEditorOrbitCameraPosition.bIsSet */
    uint8_t UnknownData1[0x3];
    FVector CamOrbitPoint; /* Ofs: 0x4 Size: 0xC StructProperty Engine.AssetEditorOrbitCameraPosition.CamOrbitPoint */
    FVector CamOrbitZoom; /* Ofs: 0x10 Size: 0xC StructProperty Engine.AssetEditorOrbitCameraPosition.CamOrbitZoom */
    FRotator CamOrbitRotation; /* Ofs: 0x1C Size: 0xC StructProperty Engine.AssetEditorOrbitCameraPosition.CamOrbitRotation */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAssetEditorOrbitCameraPosition = sizeof(FAssetEditorOrbitCameraPosition); // 40
    static_assert(sizeof(FAssetEditorOrbitCameraPosition) == 0x28, "Size of FAssetEditorOrbitCameraPosition is not correct.");
	auto constexpr FAssetEditorOrbitCameraPosition_CamOrbitPoint_Offset = offsetof(FAssetEditorOrbitCameraPosition, CamOrbitPoint);
	static_assert(FAssetEditorOrbitCameraPosition_CamOrbitPoint_Offset == 0x4, "FAssetEditorOrbitCameraPosition::CamOrbitPoint offset is not 4");
	auto constexpr FAssetEditorOrbitCameraPosition_CamOrbitZoom_Offset = offsetof(FAssetEditorOrbitCameraPosition, CamOrbitZoom);
	static_assert(FAssetEditorOrbitCameraPosition_CamOrbitZoom_Offset == 0x10, "FAssetEditorOrbitCameraPosition::CamOrbitZoom offset is not 10");
	auto constexpr FAssetEditorOrbitCameraPosition_CamOrbitRotation_Offset = offsetof(FAssetEditorOrbitCameraPosition, CamOrbitRotation);
	static_assert(FAssetEditorOrbitCameraPosition_CamOrbitRotation_Offset == 0x1c, "FAssetEditorOrbitCameraPosition::CamOrbitRotation offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
