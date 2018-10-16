#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHardwareCursorReference // Size: 0x10
{
public:
    FName CursorPath; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.HardwareCursorReference.CursorPath */
    FVector2D HotSpot; /* Ofs: 0x8 Size: 0x8 StructProperty Engine.HardwareCursorReference.HotSpot */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHardwareCursorReference = sizeof(FHardwareCursorReference); // 16
    static_assert(sizeof(FHardwareCursorReference) == 0x10, "Size of FHardwareCursorReference is not correct.");
	auto constexpr FHardwareCursorReference_CursorPath_Offset = offsetof(FHardwareCursorReference, CursorPath);
	static_assert(FHardwareCursorReference_CursorPath_Offset == 0x0, "FHardwareCursorReference::CursorPath offset is not 0");
	auto constexpr FHardwareCursorReference_HotSpot_Offset = offsetof(FHardwareCursorReference, HotSpot);
	static_assert(FHardwareCursorReference_HotSpot_Offset == 0x8, "FHardwareCursorReference::HotSpot offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
