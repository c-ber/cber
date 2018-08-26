#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimBlueprintDebugData // Size: 0x1
{
public:
    uint8_t UnknownData0[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimBlueprintDebugData = sizeof(FAnimBlueprintDebugData); // 1
    static_assert(sizeof(FAnimBlueprintDebugData) == 0x1, "Size of FAnimBlueprintDebugData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
