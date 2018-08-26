#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputAxisKeyMapping // Size: 0x28
{
public:
    FName AxisName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.InputAxisKeyMapping.AxisName */
    FKey Key; /* Ofs: 0x8 Size: 0x18 StructProperty Engine.InputAxisKeyMapping.Key */
    float Scale; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.InputAxisKeyMapping.Scale */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputAxisKeyMapping = sizeof(FInputAxisKeyMapping); // 40
    static_assert(sizeof(FInputAxisKeyMapping) == 0x28, "Size of FInputAxisKeyMapping is not correct.");
	auto constexpr FInputAxisKeyMapping_AxisName_Offset = offsetof(FInputAxisKeyMapping, AxisName);
	static_assert(FInputAxisKeyMapping_AxisName_Offset == 0x0, "FInputAxisKeyMapping::AxisName offset is not 0");
	auto constexpr FInputAxisKeyMapping_Key_Offset = offsetof(FInputAxisKeyMapping, Key);
	static_assert(FInputAxisKeyMapping_Key_Offset == 0x8, "FInputAxisKeyMapping::Key offset is not 8");
	auto constexpr FInputAxisKeyMapping_Scale_Offset = offsetof(FInputAxisKeyMapping, Scale);
	static_assert(FInputAxisKeyMapping_Scale_Offset == 0x20, "FInputAxisKeyMapping::Scale offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
