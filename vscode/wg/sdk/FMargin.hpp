#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMargin // Size: 0x10
{
public:
    float Left; /* Ofs: 0x0 Size: 0x4 FloatProperty SlateCore.Margin.Left */
    float Top; /* Ofs: 0x4 Size: 0x4 FloatProperty SlateCore.Margin.Top */
    float Right; /* Ofs: 0x8 Size: 0x4 FloatProperty SlateCore.Margin.Right */
    float Bottom; /* Ofs: 0xC Size: 0x4 FloatProperty SlateCore.Margin.Bottom */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMargin = sizeof(FMargin); // 16
    static_assert(sizeof(FMargin) == 0x10, "Size of FMargin is not correct.");
	auto constexpr FMargin_Left_Offset = offsetof(FMargin, Left);
	static_assert(FMargin_Left_Offset == 0x0, "FMargin::Left offset is not 0");
	auto constexpr FMargin_Top_Offset = offsetof(FMargin, Top);
	static_assert(FMargin_Top_Offset == 0x4, "FMargin::Top offset is not 4");
	auto constexpr FMargin_Right_Offset = offsetof(FMargin, Right);
	static_assert(FMargin_Right_Offset == 0x8, "FMargin::Right offset is not 8");
	auto constexpr FMargin_Bottom_Offset = offsetof(FMargin, Bottom);
	static_assert(FMargin_Bottom_Offset == 0xc, "FMargin::Bottom offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
