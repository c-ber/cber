#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationFilterFlags // Size: 0x4
{
public:
    bool bNavFlag0 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationFilterFlags.bNavFlag0 */
    bool bNavFlag1 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationFilterFlags.bNavFlag1 */
    bool bNavFlag2 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationFilterFlags.bNavFlag2 */
    bool bNavFlag3 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.NavigationFilterFlags.bNavFlag3 */
    bool bNavFlag4 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.NavigationFilterFlags.bNavFlag4 */
    bool bNavFlag5 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty Engine.NavigationFilterFlags.bNavFlag5 */
    bool bNavFlag6 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty Engine.NavigationFilterFlags.bNavFlag6 */
    bool bNavFlag7 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty Engine.NavigationFilterFlags.bNavFlag7 */
    bool bNavFlag8 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationFilterFlags.bNavFlag8 */
    bool bNavFlag9 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationFilterFlags.bNavFlag9 */
    bool bNavFlag10 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationFilterFlags.bNavFlag10 */
    bool bNavFlag11 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 08 BoolProperty Engine.NavigationFilterFlags.bNavFlag11 */
    bool bNavFlag12 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 10 BoolProperty Engine.NavigationFilterFlags.bNavFlag12 */
    bool bNavFlag13 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 20 BoolProperty Engine.NavigationFilterFlags.bNavFlag13 */
    bool bNavFlag14 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 40 BoolProperty Engine.NavigationFilterFlags.bNavFlag14 */
    bool bNavFlag15 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 80 BoolProperty Engine.NavigationFilterFlags.bNavFlag15 */
    uint8_t UnknownData2[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationFilterFlags = sizeof(FNavigationFilterFlags); // 4
    static_assert(sizeof(FNavigationFilterFlags) == 0x4, "Size of FNavigationFilterFlags is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
