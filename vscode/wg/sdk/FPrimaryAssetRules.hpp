#pragma once
#include "EPrimaryAssetCookRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimaryAssetRules // Size: 0x10
{
public:
    int32_t Priority; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.PrimaryAssetRules.Priority */
    bool bApplyRecursively; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.PrimaryAssetRules.bApplyRecursively */
    uint8_t UnknownData5[0x3];
    int32_t ChunkId; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.PrimaryAssetRules.ChunkId */
    TEnumAsByte<enum EPrimaryAssetCookRule> CookRule; /* Ofs: 0xC Size: 0x1 EnumProperty Engine.PrimaryAssetRules.CookRule */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimaryAssetRules = sizeof(FPrimaryAssetRules); // 16
    static_assert(sizeof(FPrimaryAssetRules) == 0x10, "Size of FPrimaryAssetRules is not correct.");
	auto constexpr FPrimaryAssetRules_Priority_Offset = offsetof(FPrimaryAssetRules, Priority);
	static_assert(FPrimaryAssetRules_Priority_Offset == 0x0, "FPrimaryAssetRules::Priority offset is not 0");
	auto constexpr FPrimaryAssetRules_ChunkId_Offset = offsetof(FPrimaryAssetRules, ChunkId);
	static_assert(FPrimaryAssetRules_ChunkId_Offset == 0x8, "FPrimaryAssetRules::ChunkId offset is not 8");
	auto constexpr FPrimaryAssetRules_CookRule_Offset = offsetof(FPrimaryAssetRules, CookRule);
	static_assert(FPrimaryAssetRules_CookRule_Offset == 0xc, "FPrimaryAssetRules::CookRule offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
