#pragma once
#include "FLightmassLightSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassPointLightSettings // Size: 0xC
 : public FLightmassLightSettings // Size: 0xC
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassPointLightSettings = sizeof(FLightmassPointLightSettings); // 12
    static_assert(sizeof(FLightmassPointLightSettings) == 0xC, "Size of FLightmassPointLightSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
