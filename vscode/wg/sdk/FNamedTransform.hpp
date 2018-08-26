#pragma once
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedTransform // Size: 0x40
{
public:
    FTransform Value; /* Ofs: 0x0 Size: 0x30 StructProperty Engine.NamedTransform.Value */
    FName Name; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.NamedTransform.Name */
    uint8_t UnknownData38[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedTransform = sizeof(FNamedTransform); // 64
    static_assert(sizeof(FNamedTransform) == 0x40, "Size of FNamedTransform is not correct.");
	auto constexpr FNamedTransform_Value_Offset = offsetof(FNamedTransform, Value);
	static_assert(FNamedTransform_Value_Offset == 0x0, "FNamedTransform::Value offset is not 0");
	auto constexpr FNamedTransform_Name_Offset = offsetof(FNamedTransform, Name);
	static_assert(FNamedTransform_Name_Offset == 0x30, "FNamedTransform::Name offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
