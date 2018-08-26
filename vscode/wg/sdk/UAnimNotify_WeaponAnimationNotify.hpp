#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_WeaponAnimationNotify // Size: 0x48
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_WeaponAnimationNotify t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(412); // id32("Class TslGame.AnimNotify_WeaponAnimationNotify")
		return ptr;
	}
	FName NotifyName; /* Ofs: 0x40 Size: 0x8 - NameProperty TslGame.AnimNotify_WeaponAnimationNotify.NotifyName */


	inline bool SetNotifyName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_WeaponAnimationNotify = sizeof(UAnimNotify_WeaponAnimationNotify); // 72
    static_assert(sizeof(UAnimNotify_WeaponAnimationNotify) == 0x48, "Size of UAnimNotify_WeaponAnimationNotify is not correct.");
	auto constexpr UAnimNotify_WeaponAnimationNotify_NotifyName_Offset = offsetof(UAnimNotify_WeaponAnimationNotify, NotifyName);
	static_assert(UAnimNotify_WeaponAnimationNotify_NotifyName_Offset == 0x40, "UAnimNotify_WeaponAnimationNotify::NotifyName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
