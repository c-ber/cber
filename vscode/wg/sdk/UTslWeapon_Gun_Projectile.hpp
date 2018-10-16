#pragma once
#include "UTslWeapon_Gun.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Gun_Projectile // Size: 0xCC0
	: public UTslWeapon_Gun // Size: 0xCB0
{
private:
	typedef UTslWeapon_Gun_Projectile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(38); // id32("Class TslGame.TslWeapon_Gun_Projectile")
		return ptr;
	}
//	ExternalPtr<struct UClass> FlareClass; /* Ofs: 0xCA8 Size: 0x8 - ClassProperty TslGame.TslWeapon_Gun_Projectile.FlareClass */
	float MaxDelta; /* Ofs: 0xCB0 Size: 0x4 - FloatProperty TslGame.TslWeapon_Gun_Projectile.MaxDelta */
	uint8_t UnknownDataCB4[0xC];


//	inline bool SetFlareClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetMaxDelta(t_structHelper inst, float value) { inst.WriteOffset(0xCB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Gun_Projectile = sizeof(UTslWeapon_Gun_Projectile); // 3264
    static_assert(sizeof(UTslWeapon_Gun_Projectile) == 0xCC0, "Size of UTslWeapon_Gun_Projectile is not correct.");
//	auto constexpr UTslWeapon_Gun_Projectile_FlareClass_Offset = offsetof(UTslWeapon_Gun_Projectile, FlareClass);
//	static_assert(UTslWeapon_Gun_Projectile_FlareClass_Offset == 0xca8, "UTslWeapon_Gun_Projectile::FlareClass offset is not ca8");
	auto constexpr UTslWeapon_Gun_Projectile_MaxDelta_Offset = offsetof(UTslWeapon_Gun_Projectile, MaxDelta);
	static_assert(UTslWeapon_Gun_Projectile_MaxDelta_Offset == 0xcb0, "UTslWeapon_Gun_Projectile::MaxDelta offset is not cb0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
