#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionDescWidget // Size: 0x340
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadOptionDescWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1570); // id32("Class TslGame.TslGamepadOptionDescWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock TitleText_Binder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslGamepadOptionDescWidget.TitleText_Binder */
	FUmgWidgetBinder_TextBlock DescText_Binder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.TslGamepadOptionDescWidget.DescText_Binder */


	inline bool SetTitleText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetDescText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionDescWidget = sizeof(UTslGamepadOptionDescWidget); // 832
    static_assert(sizeof(UTslGamepadOptionDescWidget) == 0x340, "Size of UTslGamepadOptionDescWidget is not correct.");
	auto constexpr UTslGamepadOptionDescWidget_TitleText_Binder_Offset = offsetof(UTslGamepadOptionDescWidget, TitleText_Binder);
	static_assert(UTslGamepadOptionDescWidget_TitleText_Binder_Offset == 0x300, "UTslGamepadOptionDescWidget::TitleText_Binder offset is not 300");
	auto constexpr UTslGamepadOptionDescWidget_DescText_Binder_Offset = offsetof(UTslGamepadOptionDescWidget, DescText_Binder);
	static_assert(UTslGamepadOptionDescWidget_DescText_Binder_Offset == 0x320, "UTslGamepadOptionDescWidget::DescText_Binder offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
