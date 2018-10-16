#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintMacroCosmeticInfo // Size: 0x1
{
public:
    uint8_t UnknownData0[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintMacroCosmeticInfo = sizeof(FBlueprintMacroCosmeticInfo); // 1
    static_assert(sizeof(FBlueprintMacroCosmeticInfo) == 0x1, "Size of FBlueprintMacroCosmeticInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
