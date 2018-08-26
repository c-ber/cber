#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_VerticalBox.hpp"
#include "FUmgWidgetBinder_CanvasPanel.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleStanceBaseWidget // Size: 0x3B0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVehicleStanceBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1591); // id32("Class TslGame.VehicleStanceBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_VerticalBox VehicleIconAreaBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.VehicleStanceBaseWidget.VehicleIconAreaBinder */
	FUmgWidgetBinder_CanvasPanel VehicleDetailInfoBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.VehicleStanceBaseWidget.VehicleDetailInfoBinder */
	FUmgWidgetBinder_TextBlock SpeedTextBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.VehicleStanceBaseWidget.SpeedTextBinder */
	FUmgWidgetBinder_UserWidget LifeGaugeWidgetBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.VehicleStanceBaseWidget.LifeGaugeWidgetBinder */
	FUmgWidgetBinder_UserWidget FuelGaugeWidgetBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.VehicleStanceBaseWidget.FuelGaugeWidgetBinder */
	ExternalPtr<struct UPawn> CachedVehiclePawn; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty TslGame.VehicleStanceBaseWidget.CachedVehiclePawn */
	ExternalPtr<struct UUserWidget> CachedVehicleIconWidget; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty TslGame.VehicleStanceBaseWidget.CachedVehicleIconWidget */


	inline bool SetVehicleIconAreaBinder(t_structHelper inst, FUmgWidgetBinder_VerticalBox value) { inst.WriteOffset(0x300, value); }
	inline bool SetVehicleDetailInfoBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x320, value); }
	inline bool SetSpeedTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x340, value); }
	inline bool SetLifeGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x360, value); }
	inline bool SetFuelGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x380, value); }
	inline bool SetCachedVehiclePawn(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetCachedVehicleIconWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x3A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleStanceBaseWidget = sizeof(UVehicleStanceBaseWidget); // 944
    static_assert(sizeof(UVehicleStanceBaseWidget) == 0x3B0, "Size of UVehicleStanceBaseWidget is not correct.");
	auto constexpr UVehicleStanceBaseWidget_VehicleIconAreaBinder_Offset = offsetof(UVehicleStanceBaseWidget, VehicleIconAreaBinder);
	static_assert(UVehicleStanceBaseWidget_VehicleIconAreaBinder_Offset == 0x300, "UVehicleStanceBaseWidget::VehicleIconAreaBinder offset is not 300");
	auto constexpr UVehicleStanceBaseWidget_VehicleDetailInfoBinder_Offset = offsetof(UVehicleStanceBaseWidget, VehicleDetailInfoBinder);
	static_assert(UVehicleStanceBaseWidget_VehicleDetailInfoBinder_Offset == 0x320, "UVehicleStanceBaseWidget::VehicleDetailInfoBinder offset is not 320");
	auto constexpr UVehicleStanceBaseWidget_SpeedTextBinder_Offset = offsetof(UVehicleStanceBaseWidget, SpeedTextBinder);
	static_assert(UVehicleStanceBaseWidget_SpeedTextBinder_Offset == 0x340, "UVehicleStanceBaseWidget::SpeedTextBinder offset is not 340");
	auto constexpr UVehicleStanceBaseWidget_LifeGaugeWidgetBinder_Offset = offsetof(UVehicleStanceBaseWidget, LifeGaugeWidgetBinder);
	static_assert(UVehicleStanceBaseWidget_LifeGaugeWidgetBinder_Offset == 0x360, "UVehicleStanceBaseWidget::LifeGaugeWidgetBinder offset is not 360");
	auto constexpr UVehicleStanceBaseWidget_FuelGaugeWidgetBinder_Offset = offsetof(UVehicleStanceBaseWidget, FuelGaugeWidgetBinder);
	static_assert(UVehicleStanceBaseWidget_FuelGaugeWidgetBinder_Offset == 0x380, "UVehicleStanceBaseWidget::FuelGaugeWidgetBinder offset is not 380");
	auto constexpr UVehicleStanceBaseWidget_CachedVehiclePawn_Offset = offsetof(UVehicleStanceBaseWidget, CachedVehiclePawn);
	static_assert(UVehicleStanceBaseWidget_CachedVehiclePawn_Offset == 0x3a0, "UVehicleStanceBaseWidget::CachedVehiclePawn offset is not 3a0");
	auto constexpr UVehicleStanceBaseWidget_CachedVehicleIconWidget_Offset = offsetof(UVehicleStanceBaseWidget, CachedVehicleIconWidget);
	static_assert(UVehicleStanceBaseWidget_CachedVehicleIconWidget_Offset == 0x3a8, "UVehicleStanceBaseWidget::CachedVehicleIconWidget offset is not 3a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
