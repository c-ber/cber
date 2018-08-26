#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCullDistanceSizePair // Size: 0x8
{
public:
    float Size; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.CullDistanceSizePair.Size */
    float CullDistance; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.CullDistanceSizePair.CullDistance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCullDistanceSizePair = sizeof(FCullDistanceSizePair); // 8
    static_assert(sizeof(FCullDistanceSizePair) == 0x8, "Size of FCullDistanceSizePair is not correct.");
	auto constexpr FCullDistanceSizePair_Size_Offset = offsetof(FCullDistanceSizePair, Size);
	static_assert(FCullDistanceSizePair_Size_Offset == 0x0, "FCullDistanceSizePair::Size offset is not 0");
	auto constexpr FCullDistanceSizePair_CullDistance_Offset = offsetof(FCullDistanceSizePair, CullDistance);
	static_assert(FCullDistanceSizePair_CullDistance_Offset == 0x4, "FCullDistanceSizePair::CullDistance offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
