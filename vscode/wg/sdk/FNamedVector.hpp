#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedVector // Size: 0x18
{
public:
    FVector Value; /* Ofs: 0x0 Size: 0xC StructProperty Engine.NamedVector.Value */
    uint8_t UnknownDataC[0x4];
    FName Name; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.NamedVector.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedVector = sizeof(FNamedVector); // 24
    static_assert(sizeof(FNamedVector) == 0x18, "Size of FNamedVector is not correct.");
	auto constexpr FNamedVector_Value_Offset = offsetof(FNamedVector, Value);
	static_assert(FNamedVector_Value_Offset == 0x0, "FNamedVector::Value offset is not 0");
	auto constexpr FNamedVector_Name_Offset = offsetof(FNamedVector, Name);
	static_assert(FNamedVector_Name_Offset == 0x10, "FNamedVector::Name offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
