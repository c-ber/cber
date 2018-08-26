#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvQueryInstanceCache // Size: 0x1D0
{
public:
    ExternalPtr<struct UEnvQuery> Template; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.EnvQueryInstanceCache.Template */
    uint8_t UnknownData8[0x1C8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvQueryInstanceCache = sizeof(FEnvQueryInstanceCache); // 464
    static_assert(sizeof(FEnvQueryInstanceCache) == 0x1D0, "Size of FEnvQueryInstanceCache is not correct.");
	auto constexpr FEnvQueryInstanceCache_Template_Offset = offsetof(FEnvQueryInstanceCache, Template);
	static_assert(FEnvQueryInstanceCache_Template_Offset == 0x0, "FEnvQueryInstanceCache::Template offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
