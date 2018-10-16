#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslWidgetConfig // Size: 0x20
{
public:
    FStringAssetReference WidgetClassReference; /* Ofs: 0x0 Size: 0x10 StructProperty TslGame.TslWidgetConfig.WidgetClassReference */
    bool bDefaultShow; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bDefaultShow */
    bool bUseMouse; /* Ofs: 0x11 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bUseMouse */
    bool bCloseByEscape; /* Ofs: 0x12 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bCloseByEscape */
    uint8_t UnknownData13[0x1];
    int32_t ZOrder; /* Ofs: 0x14 Size: 0x4 IntProperty TslGame.TslWidgetConfig.ZOrder */
    bool bUsePcOnly; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bUsePcOnly */
    bool bCharacterHudUi; /* Ofs: 0x19 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bCharacterHudUi */
    bool bSpectatorHudUi; /* Ofs: 0x1A Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bSpectatorHudUi */
    bool bObserverHudUi; /* Ofs: 0x1B Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bObserverHudUi */
    bool bReplayHudUi; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty TslGame.TslWidgetConfig.bReplayHudUi */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslWidgetConfig = sizeof(FTslWidgetConfig); // 32
    static_assert(sizeof(FTslWidgetConfig) == 0x20, "Size of FTslWidgetConfig is not correct.");
	auto constexpr FTslWidgetConfig_WidgetClassReference_Offset = offsetof(FTslWidgetConfig, WidgetClassReference);
	static_assert(FTslWidgetConfig_WidgetClassReference_Offset == 0x0, "FTslWidgetConfig::WidgetClassReference offset is not 0");
	auto constexpr FTslWidgetConfig_ZOrder_Offset = offsetof(FTslWidgetConfig, ZOrder);
	static_assert(FTslWidgetConfig_ZOrder_Offset == 0x14, "FTslWidgetConfig::ZOrder offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
