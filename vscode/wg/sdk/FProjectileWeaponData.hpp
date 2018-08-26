#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProjectileWeaponData // Size: 0x8
{
public:
    ExternalPtr<struct UClass> ProjectileClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.ProjectileWeaponData.ProjectileClass */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProjectileWeaponData = sizeof(FProjectileWeaponData); // 8
    static_assert(sizeof(FProjectileWeaponData) == 0x8, "Size of FProjectileWeaponData is not correct.");
	auto constexpr FProjectileWeaponData_ProjectileClass_Offset = offsetof(FProjectileWeaponData, ProjectileClass);
	static_assert(FProjectileWeaponData_ProjectileClass_Offset == 0x0, "FProjectileWeaponData::ProjectileClass offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
