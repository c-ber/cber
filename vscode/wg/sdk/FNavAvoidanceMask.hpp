#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavAvoidanceMask // Size: 0x4
{
public:
    bool bGroup0 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAvoidanceMask.bGroup0 */
    bool bGroup1 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAvoidanceMask.bGroup1 */
    bool bGroup2 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAvoidanceMask.bGroup2 */
    bool bGroup3 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAvoidanceMask.bGroup3 */
    bool bGroup4 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAvoidanceMask.bGroup4 */
    bool bGroup5 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAvoidanceMask.bGroup5 */
    bool bGroup6 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAvoidanceMask.bGroup6 */
    bool bGroup7 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAvoidanceMask.bGroup7 */
    bool bGroup8 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAvoidanceMask.bGroup8 */
    bool bGroup9 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAvoidanceMask.bGroup9 */
    bool bGroup10 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAvoidanceMask.bGroup10 */
    bool bGroup11 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAvoidanceMask.bGroup11 */
    bool bGroup12 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAvoidanceMask.bGroup12 */
    bool bGroup13 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAvoidanceMask.bGroup13 */
    bool bGroup14 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAvoidanceMask.bGroup14 */
    bool bGroup15 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAvoidanceMask.bGroup15 */
    bool bGroup16 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAvoidanceMask.bGroup16 */
    bool bGroup17 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAvoidanceMask.bGroup17 */
    bool bGroup18 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAvoidanceMask.bGroup18 */
    bool bGroup19 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAvoidanceMask.bGroup19 */
    bool bGroup20 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAvoidanceMask.bGroup20 */
    bool bGroup21 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAvoidanceMask.bGroup21 */
    bool bGroup22 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAvoidanceMask.bGroup22 */
    bool bGroup23 : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAvoidanceMask.bGroup23 */
    bool bGroup24 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAvoidanceMask.bGroup24 */
    bool bGroup25 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAvoidanceMask.bGroup25 */
    bool bGroup26 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAvoidanceMask.bGroup26 */
    bool bGroup27 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAvoidanceMask.bGroup27 */
    bool bGroup28 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAvoidanceMask.bGroup28 */
    bool bGroup29 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAvoidanceMask.bGroup29 */
    bool bGroup30 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAvoidanceMask.bGroup30 */
    bool bGroup31 : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAvoidanceMask.bGroup31 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavAvoidanceMask = sizeof(FNavAvoidanceMask); // 4
    static_assert(sizeof(FNavAvoidanceMask) == 0x4, "Size of FNavAvoidanceMask is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
