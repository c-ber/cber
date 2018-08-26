#pragma once
#include "UAnimNotifyState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_PlayMontageNotifyWindow // Size: 0x40
	: public UAnimNotifyState // Size: 0x38
{
private:
	typedef UAnimNotify_PlayMontageNotifyWindow t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1615); // id32("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow")
		return ptr;
	}
	FName NotifyName; /* Ofs: 0x38 Size: 0x8 - NameProperty AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow.NotifyName */


	inline bool SetNotifyName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_PlayMontageNotifyWindow = sizeof(UAnimNotify_PlayMontageNotifyWindow); // 64
    static_assert(sizeof(UAnimNotify_PlayMontageNotifyWindow) == 0x40, "Size of UAnimNotify_PlayMontageNotifyWindow is not correct.");
	auto constexpr UAnimNotify_PlayMontageNotifyWindow_NotifyName_Offset = offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName);
	static_assert(UAnimNotify_PlayMontageNotifyWindow_NotifyName_Offset == 0x38, "UAnimNotify_PlayMontageNotifyWindow::NotifyName offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
