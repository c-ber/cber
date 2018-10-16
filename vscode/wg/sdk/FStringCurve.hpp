#pragma once
#include "FIndexedCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStringCurve // Size: 0x78
 : public FIndexedCurve // Size: 0x58
{
public:
    FString DefaultValue; /* Ofs: 0x58 Size: 0x10 StrProperty Engine.StringCurve.DefaultValue */
    TArray<struct FStringCurveKey> Keys; /* Ofs: 0x68 Size: 0x10 ArrayProperty Engine.StringCurve.Keys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStringCurve = sizeof(FStringCurve); // 120
    static_assert(sizeof(FStringCurve) == 0x78, "Size of FStringCurve is not correct.");
	auto constexpr FStringCurve_DefaultValue_Offset = offsetof(FStringCurve, DefaultValue);
	static_assert(FStringCurve_DefaultValue_Offset == 0x58, "FStringCurve::DefaultValue offset is not 58");
	auto constexpr FStringCurve_Keys_Offset = offsetof(FStringCurve, Keys);
	static_assert(FStringCurve_Keys_Offset == 0x68, "FStringCurve::Keys offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
