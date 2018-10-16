#pragma once
#include "FAIDataProviderValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderStructValue // Size: 0x30
 : public FAIDataProviderValue // Size: 0x20
{
public:
    uint8_t UnknownData20[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderStructValue = sizeof(FAIDataProviderStructValue); // 48
    static_assert(sizeof(FAIDataProviderStructValue) == 0x30, "Size of FAIDataProviderStructValue is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
