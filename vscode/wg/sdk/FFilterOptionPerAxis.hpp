#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFilterOptionPerAxis // Size: 0x3
{
public:
    bool bX; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.FilterOptionPerAxis.bX */
    bool bY; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.FilterOptionPerAxis.bY */
    bool bZ; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.FilterOptionPerAxis.bZ */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFilterOptionPerAxis = sizeof(FFilterOptionPerAxis); // 3
    static_assert(sizeof(FFilterOptionPerAxis) == 0x3, "Size of FFilterOptionPerAxis is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
