#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollisionImpactData // Size: 0x28
{
public:
    TArray<struct FRigidBodyContactInfo> ContactInfos; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.CollisionImpactData.ContactInfos */
    FVector TotalNormalImpulse; /* Ofs: 0x10 Size: 0xC StructProperty Engine.CollisionImpactData.TotalNormalImpulse */
    FVector TotalFrictionImpulse; /* Ofs: 0x1C Size: 0xC StructProperty Engine.CollisionImpactData.TotalFrictionImpulse */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollisionImpactData = sizeof(FCollisionImpactData); // 40
    static_assert(sizeof(FCollisionImpactData) == 0x28, "Size of FCollisionImpactData is not correct.");
	auto constexpr FCollisionImpactData_ContactInfos_Offset = offsetof(FCollisionImpactData, ContactInfos);
	static_assert(FCollisionImpactData_ContactInfos_Offset == 0x0, "FCollisionImpactData::ContactInfos offset is not 0");
	auto constexpr FCollisionImpactData_TotalNormalImpulse_Offset = offsetof(FCollisionImpactData, TotalNormalImpulse);
	static_assert(FCollisionImpactData_TotalNormalImpulse_Offset == 0x10, "FCollisionImpactData::TotalNormalImpulse offset is not 10");
	auto constexpr FCollisionImpactData_TotalFrictionImpulse_Offset = offsetof(FCollisionImpactData, TotalFrictionImpulse);
	static_assert(FCollisionImpactData_TotalFrictionImpulse_Offset == 0x1c, "FCollisionImpactData::TotalFrictionImpulse offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
