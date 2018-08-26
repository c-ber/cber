#pragma once
#include "UTslWeapon_Gun.hpp"
#include "FProjectileWeaponData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Projectile // Size: 0xCB0
	: public UTslWeapon_Gun // Size: 0xCB0
{
private:
	typedef UTslWeapon_Projectile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1481); // id32("Class TslGame.TslWeapon_Projectile")
		return ptr;
	}
//	FProjectileWeaponData ProjectileConfig; /* Ofs: 0xCA8 Size: 0x8 - StructProperty TslGame.TslWeapon_Projectile.ProjectileConfig */


//	inline bool SetProjectileConfig(t_structHelper inst, FProjectileWeaponData value) { inst.WriteOffset(0xCA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Projectile = sizeof(UTslWeapon_Projectile); // 3248
    static_assert(sizeof(UTslWeapon_Projectile) == 0xCB0, "Size of UTslWeapon_Projectile is not correct.");
//	auto constexpr UTslWeapon_Projectile_ProjectileConfig_Offset = offsetof(UTslWeapon_Projectile, ProjectileConfig);
//	static_assert(UTslWeapon_Projectile_ProjectileConfig_Offset == 0xca8, "UTslWeapon_Projectile::ProjectileConfig offset is not ca8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
