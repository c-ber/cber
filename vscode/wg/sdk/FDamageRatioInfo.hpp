#pragma once
#include "EDamageVictimActorType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDamageRatioInfo // Size: 0x8
{
public:
    float DamageRatio; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.DamageRatioInfo.DamageRatio */
    TEnumAsByte<enum EDamageVictimActorType> DamageVictimActorType; /* Ofs: 0x4 Size: 0x1 EnumProperty TslGame.DamageRatioInfo.DamageVictimActorType */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDamageRatioInfo = sizeof(FDamageRatioInfo); // 8
    static_assert(sizeof(FDamageRatioInfo) == 0x8, "Size of FDamageRatioInfo is not correct.");
	auto constexpr FDamageRatioInfo_DamageRatio_Offset = offsetof(FDamageRatioInfo, DamageRatio);
	static_assert(FDamageRatioInfo_DamageRatio_Offset == 0x0, "FDamageRatioInfo::DamageRatio offset is not 0");
	auto constexpr FDamageRatioInfo_DamageVictimActorType_Offset = offsetof(FDamageRatioInfo, DamageVictimActorType);
	static_assert(FDamageRatioInfo_DamageVictimActorType_Offset == 0x4, "FDamageRatioInfo::DamageVictimActorType offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
