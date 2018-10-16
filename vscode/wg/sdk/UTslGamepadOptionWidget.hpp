#pragma once
#include "UBlockInputUserWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadOptionWidget // Size: 0x350
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UTslGamepadOptionWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1513); // id32("Class TslGame.TslGamepadOptionWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget DescWidget_Binder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.TslGamepadOptionWidget.DescWidget_Binder */


	inline bool SetDescWidget_Binder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadOptionWidget = sizeof(UTslGamepadOptionWidget); // 848
    static_assert(sizeof(UTslGamepadOptionWidget) == 0x350, "Size of UTslGamepadOptionWidget is not correct.");
	auto constexpr UTslGamepadOptionWidget_DescWidget_Binder_Offset = offsetof(UTslGamepadOptionWidget, DescWidget_Binder);
	static_assert(UTslGamepadOptionWidget_DescWidget_Binder_Offset == 0x330, "UTslGamepadOptionWidget::DescWidget_Binder offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
