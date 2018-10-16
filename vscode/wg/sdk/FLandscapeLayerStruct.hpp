#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeLayerStruct // Size: 0x8
{
public:
    ExternalPtr<struct ULandscapeLayerInfoObject> LayerInfoObj; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeLayerStruct.LayerInfoObj */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeLayerStruct = sizeof(FLandscapeLayerStruct); // 8
    static_assert(sizeof(FLandscapeLayerStruct) == 0x8, "Size of FLandscapeLayerStruct is not correct.");
	auto constexpr FLandscapeLayerStruct_LayerInfoObj_Offset = offsetof(FLandscapeLayerStruct, LayerInfoObj);
	static_assert(FLandscapeLayerStruct_LayerInfoObj_Offset == 0x0, "FLandscapeLayerStruct::LayerInfoObj offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
