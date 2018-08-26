#pragma once
#include "FPrimaryAssetId.hpp"
#include "FPrimaryAssetRules.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimaryAssetRulesOverride // Size: 0x20
{
public:
    FPrimaryAssetId PrimaryAssetId; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.PrimaryAssetRulesOverride.PrimaryAssetId */
    FPrimaryAssetRules Rules; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.PrimaryAssetRulesOverride.Rules */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimaryAssetRulesOverride = sizeof(FPrimaryAssetRulesOverride); // 32
    static_assert(sizeof(FPrimaryAssetRulesOverride) == 0x20, "Size of FPrimaryAssetRulesOverride is not correct.");
	auto constexpr FPrimaryAssetRulesOverride_PrimaryAssetId_Offset = offsetof(FPrimaryAssetRulesOverride, PrimaryAssetId);
	static_assert(FPrimaryAssetRulesOverride_PrimaryAssetId_Offset == 0x0, "FPrimaryAssetRulesOverride::PrimaryAssetId offset is not 0");
	auto constexpr FPrimaryAssetRulesOverride_Rules_Offset = offsetof(FPrimaryAssetRulesOverride, Rules);
	static_assert(FPrimaryAssetRulesOverride_Rules_Offset == 0x10, "FPrimaryAssetRulesOverride::Rules offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
