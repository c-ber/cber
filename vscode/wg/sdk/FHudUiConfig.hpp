#pragma once
#include "FTslWidgetConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHudUiConfig // Size: 0x30
{
public:
    FString WidgetName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.HudUiConfig.WidgetName */
    FTslWidgetConfig WidgetConfig; /* Ofs: 0x10 Size: 0x20 StructProperty TslGame.HudUiConfig.WidgetConfig */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHudUiConfig = sizeof(FHudUiConfig); // 48
    static_assert(sizeof(FHudUiConfig) == 0x30, "Size of FHudUiConfig is not correct.");
	auto constexpr FHudUiConfig_WidgetName_Offset = offsetof(FHudUiConfig, WidgetName);
	static_assert(FHudUiConfig_WidgetName_Offset == 0x0, "FHudUiConfig::WidgetName offset is not 0");
	auto constexpr FHudUiConfig_WidgetConfig_Offset = offsetof(FHudUiConfig, WidgetConfig);
	static_assert(FHudUiConfig_WidgetConfig_Offset == 0x10, "FHudUiConfig::WidgetConfig offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
