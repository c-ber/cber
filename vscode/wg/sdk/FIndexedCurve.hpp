#pragma once
#include "FKeyHandleMap.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIndexedCurve // Size: 0x58
{
public:
    uint8_t UnknownData0[0x8];
    FKeyHandleMap KeyHandlesToIndices; /* Ofs: 0x8 Size: 0x50 StructProperty Engine.IndexedCurve.KeyHandlesToIndices */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIndexedCurve = sizeof(FIndexedCurve); // 88
    static_assert(sizeof(FIndexedCurve) == 0x58, "Size of FIndexedCurve is not correct.");
	auto constexpr FIndexedCurve_KeyHandlesToIndices_Offset = offsetof(FIndexedCurve, KeyHandlesToIndices);
	static_assert(FIndexedCurve_KeyHandlesToIndices_Offset == 0x8, "FIndexedCurve::KeyHandlesToIndices offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
