#pragma once
#include "ETslParticleGroupPriority.hpp"
#include "ETslParticleCullType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslParticleGroupInfo // Size: 0x30
{
public:
    FName GroupName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.TslParticleGroupInfo.GroupName */
    TEnumAsByte<enum ETslParticleGroupPriority> GroupPriority; /* Ofs: 0x8 Size: 0x1 EnumProperty TslGame.TslParticleGroupInfo.GroupPriority */
    uint8_t UnknownData9[0x3];
    int32_t MaxObjectCount; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.TslParticleGroupInfo.MaxObjectCount */
    TEnumAsByte<enum ETslParticleCullType> CullType; /* Ofs: 0x10 Size: 0x1 EnumProperty TslGame.TslParticleGroupInfo.CullType */
    uint8_t UnknownData11[0x3];
    float MaxDistance; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.TslParticleGroupInfo.MaxDistance */
    float MaxRenderDuration; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.TslParticleGroupInfo.MaxRenderDuration */
    uint8_t UnknownData1C[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslParticleGroupInfo = sizeof(FTslParticleGroupInfo); // 48
    static_assert(sizeof(FTslParticleGroupInfo) == 0x30, "Size of FTslParticleGroupInfo is not correct.");
	auto constexpr FTslParticleGroupInfo_GroupName_Offset = offsetof(FTslParticleGroupInfo, GroupName);
	static_assert(FTslParticleGroupInfo_GroupName_Offset == 0x0, "FTslParticleGroupInfo::GroupName offset is not 0");
	auto constexpr FTslParticleGroupInfo_GroupPriority_Offset = offsetof(FTslParticleGroupInfo, GroupPriority);
	static_assert(FTslParticleGroupInfo_GroupPriority_Offset == 0x8, "FTslParticleGroupInfo::GroupPriority offset is not 8");
	auto constexpr FTslParticleGroupInfo_MaxObjectCount_Offset = offsetof(FTslParticleGroupInfo, MaxObjectCount);
	static_assert(FTslParticleGroupInfo_MaxObjectCount_Offset == 0xc, "FTslParticleGroupInfo::MaxObjectCount offset is not c");
	auto constexpr FTslParticleGroupInfo_CullType_Offset = offsetof(FTslParticleGroupInfo, CullType);
	static_assert(FTslParticleGroupInfo_CullType_Offset == 0x10, "FTslParticleGroupInfo::CullType offset is not 10");
	auto constexpr FTslParticleGroupInfo_MaxDistance_Offset = offsetof(FTslParticleGroupInfo, MaxDistance);
	static_assert(FTslParticleGroupInfo_MaxDistance_Offset == 0x14, "FTslParticleGroupInfo::MaxDistance offset is not 14");
	auto constexpr FTslParticleGroupInfo_MaxRenderDuration_Offset = offsetof(FTslParticleGroupInfo, MaxRenderDuration);
	static_assert(FTslParticleGroupInfo_MaxRenderDuration_Offset == 0x18, "FTslParticleGroupInfo::MaxRenderDuration offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
