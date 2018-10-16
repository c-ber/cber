#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UObserverTagManagerBaseWidget // Size: 0x2C0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UObserverTagManagerBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1938); // id32("Class TslGame.ObserverTagManagerBaseWidget")
		return ptr;
	}
	uint8_t UnknownData248[0x70];
	ExternalPtr<struct UClass> WidgetTemplate; /* Ofs: 0x2B8 Size: 0x8 - ClassProperty TslGame.ObserverTagManagerBaseWidget.WidgetTemplate */


	inline bool SetWidgetTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUObserverTagManagerBaseWidget = sizeof(UObserverTagManagerBaseWidget); // 704
    static_assert(sizeof(UObserverTagManagerBaseWidget) == 0x2C0, "Size of UObserverTagManagerBaseWidget is not correct.");
	auto constexpr UObserverTagManagerBaseWidget_WidgetTemplate_Offset = offsetof(UObserverTagManagerBaseWidget, WidgetTemplate);
	static_assert(UObserverTagManagerBaseWidget_WidgetTemplate_Offset == 0x2b8, "UObserverTagManagerBaseWidget::WidgetTemplate offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
