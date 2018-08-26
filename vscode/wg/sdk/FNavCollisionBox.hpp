#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavCollisionBox // Size: 0x18
{
public:
    FVector Offset; /* Ofs: 0x0 Size: 0xC StructProperty Engine.NavCollisionBox.Offset */
    FVector Extent; /* Ofs: 0xC Size: 0xC StructProperty Engine.NavCollisionBox.Extent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavCollisionBox = sizeof(FNavCollisionBox); // 24
    static_assert(sizeof(FNavCollisionBox) == 0x18, "Size of FNavCollisionBox is not correct.");
	auto constexpr FNavCollisionBox_Offset_Offset = offsetof(FNavCollisionBox, Offset);
	static_assert(FNavCollisionBox_Offset_Offset == 0x0, "FNavCollisionBox::Offset offset is not 0");
	auto constexpr FNavCollisionBox_Extent_Offset = offsetof(FNavCollisionBox, Extent);
	static_assert(FNavCollisionBox_Extent_Offset == 0xc, "FNavCollisionBox::Extent offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
