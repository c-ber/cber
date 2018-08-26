#pragma once
#include "FIndexedCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNameCurve // Size: 0x68
 : public FIndexedCurve // Size: 0x58
{
public:
    TArray<struct FNameCurveKey> Keys; /* Ofs: 0x58 Size: 0x10 ArrayProperty Engine.NameCurve.Keys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNameCurve = sizeof(FNameCurve); // 104
    static_assert(sizeof(FNameCurve) == 0x68, "Size of FNameCurve is not correct.");
	auto constexpr FNameCurve_Keys_Offset = offsetof(FNameCurve, Keys);
	static_assert(FNameCurve_Keys_Offset == 0x58, "FNameCurve::Keys offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
