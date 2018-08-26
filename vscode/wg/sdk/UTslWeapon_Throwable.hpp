#pragma once
#include "UTslWeapon.hpp"
#include "FThrowableWeaponData.hpp"
#include "EThrowableState.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Throwable // Size: 0x980
	: public UTslWeapon // Size: 0x8A0
{
private:
	typedef UTslWeapon_Throwable t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1482); // id32("Class TslGame.TslWeapon_Throwable")
		return ptr;
	}
//	FThrowableWeaponData ThrowableConfig; /* Ofs: 0x898 Size: 0xA0 - StructProperty TslGame.TslWeapon_Throwable.ThrowableConfig */
	uint8_t UnknownData8A0[0xB0];
	TEnumAsByte<enum EThrowableState> ThrowableState; /* Ofs: 0x950 Size: 0x1 - EnumProperty TslGame.TslWeapon_Throwable.ThrowableState */
	uint8_t UnknownData951[0x7];
	FName ThrowWeaponSocketName; /* Ofs: 0x958 Size: 0x8 - NameProperty TslGame.TslWeapon_Throwable.ThrowWeaponSocketName */
	FVector PawnMotionContributionMultiplier; /* Ofs: 0x960 Size: 0xC - StructProperty TslGame.TslWeapon_Throwable.PawnMotionContributionMultiplier */
	uint8_t UnknownData96C[0x4];
	ExternalPtr<struct UTslParticle> CookingEffect; /* Ofs: 0x970 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Throwable.CookingEffect */
	ExternalPtr<struct UActor> RingAttachment; /* Ofs: 0x978 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Throwable.RingAttachment */


//	inline bool SetThrowableConfig(t_structHelper inst, FThrowableWeaponData value) { inst.WriteOffset(0x898, value); }
	inline bool SetThrowableState(t_structHelper inst, TEnumAsByte<enum EThrowableState> value) { inst.WriteOffset(0x950, value); }
	inline bool SetThrowWeaponSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x958, value); }
	inline bool SetPawnMotionContributionMultiplier(t_structHelper inst, FVector value) { inst.WriteOffset(0x960, value); }
	inline bool SetCookingEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x970, value); }
	inline bool SetRingAttachment(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x978, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Throwable = sizeof(UTslWeapon_Throwable); // 2432
    static_assert(sizeof(UTslWeapon_Throwable) == 0x980, "Size of UTslWeapon_Throwable is not correct.");
//	auto constexpr UTslWeapon_Throwable_ThrowableConfig_Offset = offsetof(UTslWeapon_Throwable, ThrowableConfig);
//	static_assert(UTslWeapon_Throwable_ThrowableConfig_Offset == 0x898, "UTslWeapon_Throwable::ThrowableConfig offset is not 898");
	auto constexpr UTslWeapon_Throwable_ThrowableState_Offset = offsetof(UTslWeapon_Throwable, ThrowableState);
	static_assert(UTslWeapon_Throwable_ThrowableState_Offset == 0x950, "UTslWeapon_Throwable::ThrowableState offset is not 950");
	auto constexpr UTslWeapon_Throwable_ThrowWeaponSocketName_Offset = offsetof(UTslWeapon_Throwable, ThrowWeaponSocketName);
	static_assert(UTslWeapon_Throwable_ThrowWeaponSocketName_Offset == 0x958, "UTslWeapon_Throwable::ThrowWeaponSocketName offset is not 958");
	auto constexpr UTslWeapon_Throwable_PawnMotionContributionMultiplier_Offset = offsetof(UTslWeapon_Throwable, PawnMotionContributionMultiplier);
	static_assert(UTslWeapon_Throwable_PawnMotionContributionMultiplier_Offset == 0x960, "UTslWeapon_Throwable::PawnMotionContributionMultiplier offset is not 960");
	auto constexpr UTslWeapon_Throwable_CookingEffect_Offset = offsetof(UTslWeapon_Throwable, CookingEffect);
	static_assert(UTslWeapon_Throwable_CookingEffect_Offset == 0x970, "UTslWeapon_Throwable::CookingEffect offset is not 970");
	auto constexpr UTslWeapon_Throwable_RingAttachment_Offset = offsetof(UTslWeapon_Throwable, RingAttachment);
	static_assert(UTslWeapon_Throwable_RingAttachment_Offset == 0x978, "UTslWeapon_Throwable::RingAttachment offset is not 978");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
