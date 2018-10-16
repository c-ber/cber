#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMediaPlayerOverlay // Size: 0x28
{
public:
    bool HasPosition; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MediaAssets.MediaPlayerOverlay.HasPosition */
    uint8_t UnknownData1[0x3];
    FVector2D Position; /* Ofs: 0x4 Size: 0x8 StructProperty MediaAssets.MediaPlayerOverlay.Position */
    uint8_t UnknownDataC[0x4];
    FText Text; /* Ofs: 0x10 Size: 0x18 TextProperty MediaAssets.MediaPlayerOverlay.Text */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMediaPlayerOverlay = sizeof(FMediaPlayerOverlay); // 40
    static_assert(sizeof(FMediaPlayerOverlay) == 0x28, "Size of FMediaPlayerOverlay is not correct.");
	auto constexpr FMediaPlayerOverlay_Position_Offset = offsetof(FMediaPlayerOverlay, Position);
	static_assert(FMediaPlayerOverlay_Position_Offset == 0x4, "FMediaPlayerOverlay::Position offset is not 4");
	auto constexpr FMediaPlayerOverlay_Text_Offset = offsetof(FMediaPlayerOverlay, Text);
	static_assert(FMediaPlayerOverlay_Text_Offset == 0x10, "FMediaPlayerOverlay::Text offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
