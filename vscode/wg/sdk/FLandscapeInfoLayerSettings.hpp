#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeInfoLayerSettings // Size: 0x10
{
public:
    ExternalPtr<struct ULandscapeLayerInfoObject> LayerInfoObj; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeInfoLayerSettings.LayerInfoObj */
    FName LayerName; /* Ofs: 0x8 Size: 0x8 NameProperty Landscape.LandscapeInfoLayerSettings.LayerName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeInfoLayerSettings = sizeof(FLandscapeInfoLayerSettings); // 16
    static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x10, "Size of FLandscapeInfoLayerSettings is not correct.");
	auto constexpr FLandscapeInfoLayerSettings_LayerInfoObj_Offset = offsetof(FLandscapeInfoLayerSettings, LayerInfoObj);
	static_assert(FLandscapeInfoLayerSettings_LayerInfoObj_Offset == 0x0, "FLandscapeInfoLayerSettings::LayerInfoObj offset is not 0");
	auto constexpr FLandscapeInfoLayerSettings_LayerName_Offset = offsetof(FLandscapeInfoLayerSettings, LayerName);
	static_assert(FLandscapeInfoLayerSettings_LayerName_Offset == 0x8, "FLandscapeInfoLayerSettings::LayerName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
