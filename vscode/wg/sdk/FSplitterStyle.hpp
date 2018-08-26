#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplitterStyle // Size: 0x128
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush HandleNormalBrush; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.SplitterStyle.HandleNormalBrush */
    FSlateBrush HandleHighlightBrush; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.SplitterStyle.HandleHighlightBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplitterStyle = sizeof(FSplitterStyle); // 296
    static_assert(sizeof(FSplitterStyle) == 0x128, "Size of FSplitterStyle is not correct.");
	auto constexpr FSplitterStyle_HandleNormalBrush_Offset = offsetof(FSplitterStyle, HandleNormalBrush);
	static_assert(FSplitterStyle_HandleNormalBrush_Offset == 0x8, "FSplitterStyle::HandleNormalBrush offset is not 8");
	auto constexpr FSplitterStyle_HandleHighlightBrush_Offset = offsetof(FSplitterStyle, HandleHighlightBrush);
	static_assert(FSplitterStyle_HandleHighlightBrush_Offset == 0x98, "FSplitterStyle::HandleHighlightBrush offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
