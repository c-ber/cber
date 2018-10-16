#pragma once
#include "UDataAsset.hpp"
#include "FWeaponPPSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReticlePostprocessData // Size: 0xC8
	: public UDataAsset // Size: 0x38
{
private:
	typedef UReticlePostprocessData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1871); // id32("Class TslGame.ReticlePostprocessData")
		return ptr;
	}
	FWeaponPPSettings WeaponGunPostprocessSettings; /* Ofs: 0x38 Size: 0x90 - StructProperty TslGame.ReticlePostprocessData.WeaponGunPostprocessSettings */


	inline bool SetWeaponGunPostprocessSettings(t_structHelper inst, FWeaponPPSettings value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReticlePostprocessData = sizeof(UReticlePostprocessData); // 200
    static_assert(sizeof(UReticlePostprocessData) == 0xC8, "Size of UReticlePostprocessData is not correct.");
	auto constexpr UReticlePostprocessData_WeaponGunPostprocessSettings_Offset = offsetof(UReticlePostprocessData, WeaponGunPostprocessSettings);
	static_assert(UReticlePostprocessData_WeaponGunPostprocessSettings_Offset == 0x38, "UReticlePostprocessData::WeaponGunPostprocessSettings offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
