#pragma once
#include "FSkeletalMeshOptimizationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletalMeshLODGroupSettings // Size: 0x178
{
public:
    float ScreenSize; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SkeletalMeshLODGroupSettings.ScreenSize */
    uint8_t UnknownData4[0x4];
    FSkeletalMeshOptimizationSettings OptimizationSettings; /* Ofs: 0x8 Size: 0x170 StructProperty Engine.SkeletalMeshLODGroupSettings.OptimizationSettings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletalMeshLODGroupSettings = sizeof(FSkeletalMeshLODGroupSettings); // 376
    static_assert(sizeof(FSkeletalMeshLODGroupSettings) == 0x178, "Size of FSkeletalMeshLODGroupSettings is not correct.");
	auto constexpr FSkeletalMeshLODGroupSettings_ScreenSize_Offset = offsetof(FSkeletalMeshLODGroupSettings, ScreenSize);
	static_assert(FSkeletalMeshLODGroupSettings_ScreenSize_Offset == 0x0, "FSkeletalMeshLODGroupSettings::ScreenSize offset is not 0");
	auto constexpr FSkeletalMeshLODGroupSettings_OptimizationSettings_Offset = offsetof(FSkeletalMeshLODGroupSettings, OptimizationSettings);
	static_assert(FSkeletalMeshLODGroupSettings_OptimizationSettings_Offset == 0x8, "FSkeletalMeshLODGroupSettings::OptimizationSettings offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
