#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionSeparator // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadOptionSeparator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1571); // id32("Class TslGame.TslGamepadOptionSeparator")
		return ptr;
	}
	uint8_t UnknownData300[0x18];
	FUmgWidgetBinder_TextBlock TitleText_Binder; /* Ofs: 0x318 Size: 0x20 - StructProperty TslGame.TslGamepadOptionSeparator.TitleText_Binder */


	inline bool SetTitleText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x318, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionSeparator = sizeof(UTslGamepadOptionSeparator); // 824
    static_assert(sizeof(UTslGamepadOptionSeparator) == 0x338, "Size of UTslGamepadOptionSeparator is not correct.");
	auto constexpr UTslGamepadOptionSeparator_TitleText_Binder_Offset = offsetof(UTslGamepadOptionSeparator, TitleText_Binder);
	static_assert(UTslGamepadOptionSeparator_TitleText_Binder_Offset == 0x318, "UTslGamepadOptionSeparator::TitleText_Binder offset is not 318");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
