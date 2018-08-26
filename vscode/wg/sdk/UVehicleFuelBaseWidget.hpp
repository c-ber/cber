#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Overlay.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleFuelBaseWidget // Size: 0x3C0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVehicleFuelBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1589); // id32("Class TslGame.VehicleFuelBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image OilGaugeImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.VehicleFuelBaseWidget.OilGaugeImageBinder */
	FUmgWidgetBinder_Image OilGaugeBgImageBinder; /* Ofs: 0x328 Size: 0x28 - StructProperty TslGame.VehicleFuelBaseWidget.OilGaugeBgImageBinder */
	FUmgWidgetBinder_Image OilArrowImageBinder; /* Ofs: 0x350 Size: 0x28 - StructProperty TslGame.VehicleFuelBaseWidget.OilArrowImageBinder */
	FUmgWidgetBinder_Overlay GaugeBodyBinder; /* Ofs: 0x378 Size: 0x20 - StructProperty TslGame.VehicleFuelBaseWidget.GaugeBodyBinder */
	FLinearColor NormalColor; /* Ofs: 0x398 Size: 0x10 - StructProperty TslGame.VehicleFuelBaseWidget.NormalColor */
	FLinearColor FuelEmptyColor; /* Ofs: 0x3A8 Size: 0x10 - StructProperty TslGame.VehicleFuelBaseWidget.FuelEmptyColor */
	FName GaugePramName; /* Ofs: 0x3B8 Size: 0x8 - NameProperty TslGame.VehicleFuelBaseWidget.GaugePramName */


	inline bool SetOilGaugeImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetOilGaugeBgImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x328, value); }
	inline bool SetOilArrowImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x350, value); }
	inline bool SetGaugeBodyBinder(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x378, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x398, value); }
	inline bool SetFuelEmptyColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetGaugePramName(t_structHelper inst, FName value) { inst.WriteOffset(0x3B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleFuelBaseWidget = sizeof(UVehicleFuelBaseWidget); // 960
    static_assert(sizeof(UVehicleFuelBaseWidget) == 0x3C0, "Size of UVehicleFuelBaseWidget is not correct.");
	auto constexpr UVehicleFuelBaseWidget_OilGaugeImageBinder_Offset = offsetof(UVehicleFuelBaseWidget, OilGaugeImageBinder);
	static_assert(UVehicleFuelBaseWidget_OilGaugeImageBinder_Offset == 0x300, "UVehicleFuelBaseWidget::OilGaugeImageBinder offset is not 300");
	auto constexpr UVehicleFuelBaseWidget_OilGaugeBgImageBinder_Offset = offsetof(UVehicleFuelBaseWidget, OilGaugeBgImageBinder);
	static_assert(UVehicleFuelBaseWidget_OilGaugeBgImageBinder_Offset == 0x328, "UVehicleFuelBaseWidget::OilGaugeBgImageBinder offset is not 328");
	auto constexpr UVehicleFuelBaseWidget_OilArrowImageBinder_Offset = offsetof(UVehicleFuelBaseWidget, OilArrowImageBinder);
	static_assert(UVehicleFuelBaseWidget_OilArrowImageBinder_Offset == 0x350, "UVehicleFuelBaseWidget::OilArrowImageBinder offset is not 350");
	auto constexpr UVehicleFuelBaseWidget_GaugeBodyBinder_Offset = offsetof(UVehicleFuelBaseWidget, GaugeBodyBinder);
	static_assert(UVehicleFuelBaseWidget_GaugeBodyBinder_Offset == 0x378, "UVehicleFuelBaseWidget::GaugeBodyBinder offset is not 378");
	auto constexpr UVehicleFuelBaseWidget_NormalColor_Offset = offsetof(UVehicleFuelBaseWidget, NormalColor);
	static_assert(UVehicleFuelBaseWidget_NormalColor_Offset == 0x398, "UVehicleFuelBaseWidget::NormalColor offset is not 398");
	auto constexpr UVehicleFuelBaseWidget_FuelEmptyColor_Offset = offsetof(UVehicleFuelBaseWidget, FuelEmptyColor);
	static_assert(UVehicleFuelBaseWidget_FuelEmptyColor_Offset == 0x3a8, "UVehicleFuelBaseWidget::FuelEmptyColor offset is not 3a8");
	auto constexpr UVehicleFuelBaseWidget_GaugePramName_Offset = offsetof(UVehicleFuelBaseWidget, GaugePramName);
	static_assert(UVehicleFuelBaseWidget_GaugePramName_Offset == 0x3b8, "UVehicleFuelBaseWidget::GaugePramName offset is not 3b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
