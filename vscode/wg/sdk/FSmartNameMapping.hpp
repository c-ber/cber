#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSmartNameMapping // Size: 0xF8
{
public:
    uint8_t UnknownData0[0xF8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSmartNameMapping = sizeof(FSmartNameMapping); // 248
    static_assert(sizeof(FSmartNameMapping) == 0xF8, "Size of FSmartNameMapping is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
