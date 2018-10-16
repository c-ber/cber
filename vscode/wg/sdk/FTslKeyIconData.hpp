#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslKeyIconData // Size: 0x28
{
public:
    FKey Key; /* Ofs: 0x0 Size: 0x18 StructProperty TslGame.TslKeyIconData.Key */
    ExternalPtr<struct UTexture> KeyIcon; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.TslKeyIconData.KeyIcon */
    float IconRatio; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.TslKeyIconData.IconRatio */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslKeyIconData = sizeof(FTslKeyIconData); // 40
    static_assert(sizeof(FTslKeyIconData) == 0x28, "Size of FTslKeyIconData is not correct.");
	auto constexpr FTslKeyIconData_Key_Offset = offsetof(FTslKeyIconData, Key);
	static_assert(FTslKeyIconData_Key_Offset == 0x0, "FTslKeyIconData::Key offset is not 0");
	auto constexpr FTslKeyIconData_KeyIcon_Offset = offsetof(FTslKeyIconData, KeyIcon);
	static_assert(FTslKeyIconData_KeyIcon_Offset == 0x18, "FTslKeyIconData::KeyIcon offset is not 18");
	auto constexpr FTslKeyIconData_IconRatio_Offset = offsetof(FTslKeyIconData, IconRatio);
	static_assert(FTslKeyIconData_IconRatio_Offset == 0x20, "FTslKeyIconData::IconRatio offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
