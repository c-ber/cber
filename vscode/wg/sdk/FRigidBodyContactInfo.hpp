#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRigidBodyContactInfo // Size: 0x30
{
public:
    FVector ContactPosition; /* Ofs: 0x0 Size: 0xC StructProperty Engine.RigidBodyContactInfo.ContactPosition */
    FVector ContactNormal; /* Ofs: 0xC Size: 0xC StructProperty Engine.RigidBodyContactInfo.ContactNormal */
    float ContactPenetration; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.RigidBodyContactInfo.ContactPenetration */
    uint8_t UnknownData1C[0x4];
    ExternalPtr<struct UPhysicalMaterial> PhysMaterial[2]; /* Ofs: 0x20 Size: 0x8 ObjectProperty Engine.RigidBodyContactInfo.PhysMaterial */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRigidBodyContactInfo = sizeof(FRigidBodyContactInfo); // 48
    static_assert(sizeof(FRigidBodyContactInfo) == 0x30, "Size of FRigidBodyContactInfo is not correct.");
	auto constexpr FRigidBodyContactInfo_ContactPosition_Offset = offsetof(FRigidBodyContactInfo, ContactPosition);
	static_assert(FRigidBodyContactInfo_ContactPosition_Offset == 0x0, "FRigidBodyContactInfo::ContactPosition offset is not 0");
	auto constexpr FRigidBodyContactInfo_ContactNormal_Offset = offsetof(FRigidBodyContactInfo, ContactNormal);
	static_assert(FRigidBodyContactInfo_ContactNormal_Offset == 0xc, "FRigidBodyContactInfo::ContactNormal offset is not c");
	auto constexpr FRigidBodyContactInfo_ContactPenetration_Offset = offsetof(FRigidBodyContactInfo, ContactPenetration);
	static_assert(FRigidBodyContactInfo_ContactPenetration_Offset == 0x18, "FRigidBodyContactInfo::ContactPenetration offset is not 18");
	auto constexpr FRigidBodyContactInfo_PhysMaterial_Offset = offsetof(FRigidBodyContactInfo, PhysMaterial);
	static_assert(FRigidBodyContactInfo_PhysMaterial_Offset == 0x20, "FRigidBodyContactInfo::PhysMaterial offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
