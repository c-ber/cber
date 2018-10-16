#pragma once
#include "FPhysicalAnimationData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysicalAnimationProfile // Size: 0x30
{
public:
    FName ProfileName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.PhysicalAnimationProfile.ProfileName */
    FPhysicalAnimationData PhysicalAnimationData; /* Ofs: 0x8 Size: 0x28 StructProperty Engine.PhysicalAnimationProfile.PhysicalAnimationData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysicalAnimationProfile = sizeof(FPhysicalAnimationProfile); // 48
    static_assert(sizeof(FPhysicalAnimationProfile) == 0x30, "Size of FPhysicalAnimationProfile is not correct.");
	auto constexpr FPhysicalAnimationProfile_ProfileName_Offset = offsetof(FPhysicalAnimationProfile, ProfileName);
	static_assert(FPhysicalAnimationProfile_ProfileName_Offset == 0x0, "FPhysicalAnimationProfile::ProfileName offset is not 0");
	auto constexpr FPhysicalAnimationProfile_PhysicalAnimationData_Offset = offsetof(FPhysicalAnimationProfile, PhysicalAnimationData);
	static_assert(FPhysicalAnimationProfile_PhysicalAnimationData_Offset == 0x8, "FPhysicalAnimationProfile::PhysicalAnimationData offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
