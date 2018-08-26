#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStatColorMapping // Size: 0x28
{
public:
    FString StatName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.StatColorMapping.StatName */
    TArray<struct FStatColorMapEntry> ColorMap; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.StatColorMapping.ColorMap */
    bool DisableBlend; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.StatColorMapping.DisableBlend */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStatColorMapping = sizeof(FStatColorMapping); // 40
    static_assert(sizeof(FStatColorMapping) == 0x28, "Size of FStatColorMapping is not correct.");
	auto constexpr FStatColorMapping_StatName_Offset = offsetof(FStatColorMapping, StatName);
	static_assert(FStatColorMapping_StatName_Offset == 0x0, "FStatColorMapping::StatName offset is not 0");
	auto constexpr FStatColorMapping_ColorMap_Offset = offsetof(FStatColorMapping, ColorMap);
	static_assert(FStatColorMapping_ColorMap_Offset == 0x10, "FStatColorMapping::ColorMap offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
