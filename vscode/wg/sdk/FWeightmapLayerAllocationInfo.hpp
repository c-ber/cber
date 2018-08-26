#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeightmapLayerAllocationInfo // Size: 0x10
{
public:
    ExternalPtr<struct ULandscapeLayerInfoObject> LayerInfo; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.WeightmapLayerAllocationInfo.LayerInfo */
    uint8_t WeightmapTextureIndex; /* Ofs: 0x8 Size: 0x1 ByteProperty Landscape.WeightmapLayerAllocationInfo.WeightmapTextureIndex */
    uint8_t WeightmapTextureChannel; /* Ofs: 0x9 Size: 0x1 ByteProperty Landscape.WeightmapLayerAllocationInfo.WeightmapTextureChannel */
    uint8_t UnknownDataA[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeightmapLayerAllocationInfo = sizeof(FWeightmapLayerAllocationInfo); // 16
    static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x10, "Size of FWeightmapLayerAllocationInfo is not correct.");
	auto constexpr FWeightmapLayerAllocationInfo_LayerInfo_Offset = offsetof(FWeightmapLayerAllocationInfo, LayerInfo);
	static_assert(FWeightmapLayerAllocationInfo_LayerInfo_Offset == 0x0, "FWeightmapLayerAllocationInfo::LayerInfo offset is not 0");
	auto constexpr FWeightmapLayerAllocationInfo_WeightmapTextureIndex_Offset = offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureIndex);
	static_assert(FWeightmapLayerAllocationInfo_WeightmapTextureIndex_Offset == 0x8, "FWeightmapLayerAllocationInfo::WeightmapTextureIndex offset is not 8");
	auto constexpr FWeightmapLayerAllocationInfo_WeightmapTextureChannel_Offset = offsetof(FWeightmapLayerAllocationInfo, WeightmapTextureChannel);
	static_assert(FWeightmapLayerAllocationInfo_WeightmapTextureChannel_Offset == 0x9, "FWeightmapLayerAllocationInfo::WeightmapTextureChannel offset is not 9");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
