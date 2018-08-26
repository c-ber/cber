#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedFloat // Size: 0x10
{
public:
    float Value; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.NamedFloat.Value */
    uint8_t UnknownData4[0x4];
    FName Name; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.NamedFloat.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedFloat = sizeof(FNamedFloat); // 16
    static_assert(sizeof(FNamedFloat) == 0x10, "Size of FNamedFloat is not correct.");
	auto constexpr FNamedFloat_Value_Offset = offsetof(FNamedFloat, Value);
	static_assert(FNamedFloat_Value_Offset == 0x0, "FNamedFloat::Value offset is not 0");
	auto constexpr FNamedFloat_Name_Offset = offsetof(FNamedFloat, Name);
	static_assert(FNamedFloat_Name_Offset == 0x8, "FNamedFloat::Name offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
