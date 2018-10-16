#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInstancedStaticMeshMappingInfo // Size: 0x8
{
public:
    uint8_t UnknownData0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInstancedStaticMeshMappingInfo = sizeof(FInstancedStaticMeshMappingInfo); // 8
    static_assert(sizeof(FInstancedStaticMeshMappingInfo) == 0x8, "Size of FInstancedStaticMeshMappingInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
