#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_UnarmedAttack // Size: 0x48
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_UnarmedAttack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(411); // id32("Class TslGame.AnimNotify_UnarmedAttack")
		return ptr;
	}
	FName NotifyName; /* Ofs: 0x40 Size: 0x8 - NameProperty TslGame.AnimNotify_UnarmedAttack.NotifyName */


	inline bool SetNotifyName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_UnarmedAttack = sizeof(UAnimNotify_UnarmedAttack); // 72
    static_assert(sizeof(UAnimNotify_UnarmedAttack) == 0x48, "Size of UAnimNotify_UnarmedAttack is not correct.");
	auto constexpr UAnimNotify_UnarmedAttack_NotifyName_Offset = offsetof(UAnimNotify_UnarmedAttack, NotifyName);
	static_assert(UAnimNotify_UnarmedAttack_NotifyName_Offset == 0x40, "UAnimNotify_UnarmedAttack::NotifyName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
