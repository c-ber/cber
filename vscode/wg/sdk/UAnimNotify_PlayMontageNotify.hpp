#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_PlayMontageNotify // Size: 0x48
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_PlayMontageNotify t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1614); // id32("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify")
		return ptr;
	}
	FName NotifyName; /* Ofs: 0x40 Size: 0x8 - NameProperty AnimGraphRuntime.AnimNotify_PlayMontageNotify.NotifyName */


	inline bool SetNotifyName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_PlayMontageNotify = sizeof(UAnimNotify_PlayMontageNotify); // 72
    static_assert(sizeof(UAnimNotify_PlayMontageNotify) == 0x48, "Size of UAnimNotify_PlayMontageNotify is not correct.");
	auto constexpr UAnimNotify_PlayMontageNotify_NotifyName_Offset = offsetof(UAnimNotify_PlayMontageNotify, NotifyName);
	static_assert(UAnimNotify_PlayMontageNotify_NotifyName_Offset == 0x40, "UAnimNotify_PlayMontageNotify::NotifyName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
