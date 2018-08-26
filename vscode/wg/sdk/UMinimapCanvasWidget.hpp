#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMinimapCanvasWidget // Size: 0x400
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMinimapCanvasWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1540); // id32("Class TslGame.MinimapCanvasWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget BluezoneGpsWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.BluezoneGpsWidgetBinder */
	FUmgWidgetBinder_RetainerBox BluezoneGpsRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.BluezoneGpsRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget BluezoneTimeWidgetBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.BluezoneTimeWidgetBinder */
	FUmgWidgetBinder_RetainerBox BluezoneTimeRetainerBoxBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.BluezoneTimeRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget CompassWidgetBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.CompassWidgetBinder */
	FUmgWidgetBinder_RetainerBox CompassRetainerBoxBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.CompassRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget MinimapWidgetBinder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.MinimapWidgetBinder */
	FUmgWidgetBinder_RetainerBox MinimapRetainerBoxBinder; /* Ofs: 0x3E0 Size: 0x20 - StructProperty TslGame.MinimapCanvasWidget.MinimapRetainerBoxBinder */


	inline bool SetBluezoneGpsWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetBluezoneGpsRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
	inline bool SetBluezoneTimeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetBluezoneTimeRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x360, value); }
	inline bool SetCompassWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x380, value); }
	inline bool SetCompassRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetMinimapWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetMinimapRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMinimapCanvasWidget = sizeof(UMinimapCanvasWidget); // 1024
    static_assert(sizeof(UMinimapCanvasWidget) == 0x400, "Size of UMinimapCanvasWidget is not correct.");
	auto constexpr UMinimapCanvasWidget_BluezoneGpsWidgetBinder_Offset = offsetof(UMinimapCanvasWidget, BluezoneGpsWidgetBinder);
	static_assert(UMinimapCanvasWidget_BluezoneGpsWidgetBinder_Offset == 0x300, "UMinimapCanvasWidget::BluezoneGpsWidgetBinder offset is not 300");
	auto constexpr UMinimapCanvasWidget_BluezoneGpsRetainerBoxBinder_Offset = offsetof(UMinimapCanvasWidget, BluezoneGpsRetainerBoxBinder);
	static_assert(UMinimapCanvasWidget_BluezoneGpsRetainerBoxBinder_Offset == 0x320, "UMinimapCanvasWidget::BluezoneGpsRetainerBoxBinder offset is not 320");
	auto constexpr UMinimapCanvasWidget_BluezoneTimeWidgetBinder_Offset = offsetof(UMinimapCanvasWidget, BluezoneTimeWidgetBinder);
	static_assert(UMinimapCanvasWidget_BluezoneTimeWidgetBinder_Offset == 0x340, "UMinimapCanvasWidget::BluezoneTimeWidgetBinder offset is not 340");
	auto constexpr UMinimapCanvasWidget_BluezoneTimeRetainerBoxBinder_Offset = offsetof(UMinimapCanvasWidget, BluezoneTimeRetainerBoxBinder);
	static_assert(UMinimapCanvasWidget_BluezoneTimeRetainerBoxBinder_Offset == 0x360, "UMinimapCanvasWidget::BluezoneTimeRetainerBoxBinder offset is not 360");
	auto constexpr UMinimapCanvasWidget_CompassWidgetBinder_Offset = offsetof(UMinimapCanvasWidget, CompassWidgetBinder);
	static_assert(UMinimapCanvasWidget_CompassWidgetBinder_Offset == 0x380, "UMinimapCanvasWidget::CompassWidgetBinder offset is not 380");
	auto constexpr UMinimapCanvasWidget_CompassRetainerBoxBinder_Offset = offsetof(UMinimapCanvasWidget, CompassRetainerBoxBinder);
	static_assert(UMinimapCanvasWidget_CompassRetainerBoxBinder_Offset == 0x3a0, "UMinimapCanvasWidget::CompassRetainerBoxBinder offset is not 3a0");
	auto constexpr UMinimapCanvasWidget_MinimapWidgetBinder_Offset = offsetof(UMinimapCanvasWidget, MinimapWidgetBinder);
	static_assert(UMinimapCanvasWidget_MinimapWidgetBinder_Offset == 0x3c0, "UMinimapCanvasWidget::MinimapWidgetBinder offset is not 3c0");
	auto constexpr UMinimapCanvasWidget_MinimapRetainerBoxBinder_Offset = offsetof(UMinimapCanvasWidget, MinimapRetainerBoxBinder);
	static_assert(UMinimapCanvasWidget_MinimapRetainerBoxBinder_Offset == 0x3e0, "UMinimapCanvasWidget::MinimapRetainerBoxBinder offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
