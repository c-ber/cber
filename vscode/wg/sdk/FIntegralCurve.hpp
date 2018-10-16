#pragma once
#include "FIndexedCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntegralCurve // Size: 0x70
 : public FIndexedCurve // Size: 0x58
{
public:
    TArray<struct FIntegralKey> Keys; /* Ofs: 0x58 Size: 0x10 ArrayProperty Engine.IntegralCurve.Keys */
    int32_t DefaultValue; /* Ofs: 0x68 Size: 0x4 IntProperty Engine.IntegralCurve.DefaultValue */
    bool bUseDefaultValueBeforeFirstKey; /* Ofs: 0x6C Size: 0x1 BitMask: 01 BoolProperty Engine.IntegralCurve.bUseDefaultValueBeforeFirstKey */
    uint8_t UnknownData6D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntegralCurve = sizeof(FIntegralCurve); // 112
    static_assert(sizeof(FIntegralCurve) == 0x70, "Size of FIntegralCurve is not correct.");
	auto constexpr FIntegralCurve_Keys_Offset = offsetof(FIntegralCurve, Keys);
	static_assert(FIntegralCurve_Keys_Offset == 0x58, "FIntegralCurve::Keys offset is not 58");
	auto constexpr FIntegralCurve_DefaultValue_Offset = offsetof(FIntegralCurve, DefaultValue);
	static_assert(FIntegralCurve_DefaultValue_Offset == 0x68, "FIntegralCurve::DefaultValue offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
