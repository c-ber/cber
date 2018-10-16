#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimLegIKData // Size: 0x70
{
public:
    uint8_t UnknownData0[0x70];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimLegIKData = sizeof(FAnimLegIKData); // 112
    static_assert(sizeof(FAnimLegIKData) == 0x70, "Size of FAnimLegIKData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
