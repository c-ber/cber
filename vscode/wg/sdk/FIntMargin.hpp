#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntMargin // Size: 0x10
{
public:
    int32_t Left; /* Ofs: 0x0 Size: 0x4 IntProperty Paper2D.IntMargin.Left */
    int32_t Top; /* Ofs: 0x4 Size: 0x4 IntProperty Paper2D.IntMargin.Top */
    int32_t Right; /* Ofs: 0x8 Size: 0x4 IntProperty Paper2D.IntMargin.Right */
    int32_t Bottom; /* Ofs: 0xC Size: 0x4 IntProperty Paper2D.IntMargin.Bottom */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntMargin = sizeof(FIntMargin); // 16
    static_assert(sizeof(FIntMargin) == 0x10, "Size of FIntMargin is not correct.");
	auto constexpr FIntMargin_Left_Offset = offsetof(FIntMargin, Left);
	static_assert(FIntMargin_Left_Offset == 0x0, "FIntMargin::Left offset is not 0");
	auto constexpr FIntMargin_Top_Offset = offsetof(FIntMargin, Top);
	static_assert(FIntMargin_Top_Offset == 0x4, "FIntMargin::Top offset is not 4");
	auto constexpr FIntMargin_Right_Offset = offsetof(FIntMargin, Right);
	static_assert(FIntMargin_Right_Offset == 0x8, "FIntMargin::Right offset is not 8");
	auto constexpr FIntMargin_Bottom_Offset = offsetof(FIntMargin, Bottom);
	static_assert(FIntMargin_Bottom_Offset == 0xc, "FIntMargin::Bottom offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
