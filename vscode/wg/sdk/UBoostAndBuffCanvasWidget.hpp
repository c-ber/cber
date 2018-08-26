#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoostAndBuffCanvasWidget // Size: 0x380
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UBoostAndBuffCanvasWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1518); // id32("Class TslGame.BoostAndBuffCanvasWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget BoostGaugeWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.BoostAndBuffCanvasWidget.BoostGaugeWidgetBinder */
	FUmgWidgetBinder_RetainerBox BoostGaugeRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.BoostAndBuffCanvasWidget.BoostGaugeRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget BuffIconListWidgetBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.BoostAndBuffCanvasWidget.BuffIconListWidgetBinder */
	FUmgWidgetBinder_RetainerBox BuffIconRetainerBoxBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.BoostAndBuffCanvasWidget.BuffIconRetainerBoxBinder */


	inline bool SetBoostGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetBoostGaugeRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
	inline bool SetBuffIconListWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetBuffIconRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoostAndBuffCanvasWidget = sizeof(UBoostAndBuffCanvasWidget); // 896
    static_assert(sizeof(UBoostAndBuffCanvasWidget) == 0x380, "Size of UBoostAndBuffCanvasWidget is not correct.");
	auto constexpr UBoostAndBuffCanvasWidget_BoostGaugeWidgetBinder_Offset = offsetof(UBoostAndBuffCanvasWidget, BoostGaugeWidgetBinder);
	static_assert(UBoostAndBuffCanvasWidget_BoostGaugeWidgetBinder_Offset == 0x300, "UBoostAndBuffCanvasWidget::BoostGaugeWidgetBinder offset is not 300");
	auto constexpr UBoostAndBuffCanvasWidget_BoostGaugeRetainerBoxBinder_Offset = offsetof(UBoostAndBuffCanvasWidget, BoostGaugeRetainerBoxBinder);
	static_assert(UBoostAndBuffCanvasWidget_BoostGaugeRetainerBoxBinder_Offset == 0x320, "UBoostAndBuffCanvasWidget::BoostGaugeRetainerBoxBinder offset is not 320");
	auto constexpr UBoostAndBuffCanvasWidget_BuffIconListWidgetBinder_Offset = offsetof(UBoostAndBuffCanvasWidget, BuffIconListWidgetBinder);
	static_assert(UBoostAndBuffCanvasWidget_BuffIconListWidgetBinder_Offset == 0x340, "UBoostAndBuffCanvasWidget::BuffIconListWidgetBinder offset is not 340");
	auto constexpr UBoostAndBuffCanvasWidget_BuffIconRetainerBoxBinder_Offset = offsetof(UBoostAndBuffCanvasWidget, BuffIconRetainerBoxBinder);
	static_assert(UBoostAndBuffCanvasWidget_BuffIconRetainerBoxBinder_Offset == 0x360, "UBoostAndBuffCanvasWidget::BuffIconRetainerBoxBinder offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
