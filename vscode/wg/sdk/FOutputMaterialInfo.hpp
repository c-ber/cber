#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOutputMaterialInfo // Size: 0x58
{
public:
    uint8_t UnknownData0[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOutputMaterialInfo = sizeof(FOutputMaterialInfo); // 88
    static_assert(sizeof(FOutputMaterialInfo) == 0x58, "Size of FOutputMaterialInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
