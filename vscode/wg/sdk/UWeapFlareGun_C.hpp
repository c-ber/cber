#pragma once
#include "UTslWeapon_Gun_Projectile.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapFlareGun_C // Size: 0xCC8
	: public UTslWeapon_Gun_Projectile // Size: 0xCC0
{
private:
	typedef UWeapFlareGun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130661); // id32("BlueprintGeneratedClass WeapFlareGun.WeapFlareGun_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xCC0 Size: 0x8 - StructProperty WeapFlareGun.WeapFlareGun_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xCC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapFlareGun_C = sizeof(UWeapFlareGun_C); // 3272
    static_assert(sizeof(UWeapFlareGun_C) == 0xCC8, "Size of UWeapFlareGun_C is not correct.");
	auto constexpr UWeapFlareGun_C_UberGraphFrame_Offset = offsetof(UWeapFlareGun_C, UberGraphFrame);
	static_assert(UWeapFlareGun_C_UberGraphFrame_Offset == 0xcc0, "UWeapFlareGun_C::UberGraphFrame offset is not cc0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
