#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayResourceSet // Size: 0x2
{
public:
    uint8_t UnknownData0[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayResourceSet = sizeof(FGameplayResourceSet); // 2
    static_assert(sizeof(FGameplayResourceSet) == 0x2, "Size of FGameplayResourceSet is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
