#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectProjector // Size: 0x30
{
public:
    FVector Position; /* Ofs: 0x0 Size: 0xC StructProperty CustomizableObject.CustomizableObjectProjector.Position */
    FVector Direction; /* Ofs: 0xC Size: 0xC StructProperty CustomizableObject.CustomizableObjectProjector.Direction */
    FVector Up; /* Ofs: 0x18 Size: 0xC StructProperty CustomizableObject.CustomizableObjectProjector.Up */
    FVector Scale; /* Ofs: 0x24 Size: 0xC StructProperty CustomizableObject.CustomizableObjectProjector.Scale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectProjector = sizeof(FCustomizableObjectProjector); // 48
    static_assert(sizeof(FCustomizableObjectProjector) == 0x30, "Size of FCustomizableObjectProjector is not correct.");
	auto constexpr FCustomizableObjectProjector_Position_Offset = offsetof(FCustomizableObjectProjector, Position);
	static_assert(FCustomizableObjectProjector_Position_Offset == 0x0, "FCustomizableObjectProjector::Position offset is not 0");
	auto constexpr FCustomizableObjectProjector_Direction_Offset = offsetof(FCustomizableObjectProjector, Direction);
	static_assert(FCustomizableObjectProjector_Direction_Offset == 0xc, "FCustomizableObjectProjector::Direction offset is not c");
	auto constexpr FCustomizableObjectProjector_Up_Offset = offsetof(FCustomizableObjectProjector, Up);
	static_assert(FCustomizableObjectProjector_Up_Offset == 0x18, "FCustomizableObjectProjector::Up offset is not 18");
	auto constexpr FCustomizableObjectProjector_Scale_Offset = offsetof(FCustomizableObjectProjector, Scale);
	static_assert(FCustomizableObjectProjector_Scale_Offset == 0x24, "FCustomizableObjectProjector::Scale offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
