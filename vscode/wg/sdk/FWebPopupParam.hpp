#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWebPopupParam // Size: 0x38
{
public:
    FString PopupId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WebPopupParam.PopupId */
    FString Uri; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WebPopupParam.Uri */
    float X; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.WebPopupParam.X */
    float Y; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.WebPopupParam.Y */
    float Width; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.WebPopupParam.Width */
    float Height; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.WebPopupParam.Height */
    FColor BackgroundColor; /* Ofs: 0x30 Size: 0x4 StructProperty TslGame.WebPopupParam.BackgroundColor */
    bool UseBackgroundColor; /* Ofs: 0x34 Size: 0x1 BitMask: 01 BoolProperty TslGame.WebPopupParam.UseBackgroundColor */
    uint8_t UnknownData35[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWebPopupParam = sizeof(FWebPopupParam); // 56
    static_assert(sizeof(FWebPopupParam) == 0x38, "Size of FWebPopupParam is not correct.");
	auto constexpr FWebPopupParam_PopupId_Offset = offsetof(FWebPopupParam, PopupId);
	static_assert(FWebPopupParam_PopupId_Offset == 0x0, "FWebPopupParam::PopupId offset is not 0");
	auto constexpr FWebPopupParam_Uri_Offset = offsetof(FWebPopupParam, Uri);
	static_assert(FWebPopupParam_Uri_Offset == 0x10, "FWebPopupParam::Uri offset is not 10");
	auto constexpr FWebPopupParam_X_Offset = offsetof(FWebPopupParam, X);
	static_assert(FWebPopupParam_X_Offset == 0x20, "FWebPopupParam::X offset is not 20");
	auto constexpr FWebPopupParam_Y_Offset = offsetof(FWebPopupParam, Y);
	static_assert(FWebPopupParam_Y_Offset == 0x24, "FWebPopupParam::Y offset is not 24");
	auto constexpr FWebPopupParam_Width_Offset = offsetof(FWebPopupParam, Width);
	static_assert(FWebPopupParam_Width_Offset == 0x28, "FWebPopupParam::Width offset is not 28");
	auto constexpr FWebPopupParam_Height_Offset = offsetof(FWebPopupParam, Height);
	static_assert(FWebPopupParam_Height_Offset == 0x2c, "FWebPopupParam::Height offset is not 2c");
	auto constexpr FWebPopupParam_BackgroundColor_Offset = offsetof(FWebPopupParam, BackgroundColor);
	static_assert(FWebPopupParam_BackgroundColor_Offset == 0x30, "FWebPopupParam::BackgroundColor offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
