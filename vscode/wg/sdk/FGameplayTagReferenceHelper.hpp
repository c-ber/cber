#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagReferenceHelper // Size: 0x40
{
public:
    uint8_t UnknownData0[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagReferenceHelper = sizeof(FGameplayTagReferenceHelper); // 64
    static_assert(sizeof(FGameplayTagReferenceHelper) == 0x40, "Size of FGameplayTagReferenceHelper is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
