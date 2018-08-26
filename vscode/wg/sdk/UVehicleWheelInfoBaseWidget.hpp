#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleWheelInfoBaseWidget // Size: 0x368
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVehicleWheelInfoBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1592); // id32("Class TslGame.VehicleWheelInfoBaseWidget")
		return ptr;
	}
	int32_t WheelIndex; /* Ofs: 0x300 Size: 0x4 - IntProperty TslGame.VehicleWheelInfoBaseWidget.WheelIndex */
	uint8_t UnknownData304[0x4];
	FUmgWidgetBinder_Image WheelImageBinder; /* Ofs: 0x308 Size: 0x28 - StructProperty TslGame.VehicleWheelInfoBaseWidget.WheelImageBinder */
	FUmgWidgetBinder_Image PunctureImageBinder; /* Ofs: 0x330 Size: 0x28 - StructProperty TslGame.VehicleWheelInfoBaseWidget.PunctureImageBinder */
	ExternalPtr<struct UTslWheeledVehicle> CachedVehiclePawn; /* Ofs: 0x358 Size: 0x8 - ObjectProperty TslGame.VehicleWheelInfoBaseWidget.CachedVehiclePawn */
	ExternalPtr<struct UTslWheeledVehicleMovement> CachedVehicleMovement; /* Ofs: 0x360 Size: 0x8 - ObjectProperty TslGame.VehicleWheelInfoBaseWidget.CachedVehicleMovement */


	inline bool SetWheelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetWheelImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x308, value); }
	inline bool SetPunctureImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x330, value); }
	inline bool SetCachedVehiclePawn(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicle> value) { inst.WriteOffset(0x358, value); }
	inline bool SetCachedVehicleMovement(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleWheelInfoBaseWidget = sizeof(UVehicleWheelInfoBaseWidget); // 872
    static_assert(sizeof(UVehicleWheelInfoBaseWidget) == 0x368, "Size of UVehicleWheelInfoBaseWidget is not correct.");
	auto constexpr UVehicleWheelInfoBaseWidget_WheelIndex_Offset = offsetof(UVehicleWheelInfoBaseWidget, WheelIndex);
	static_assert(UVehicleWheelInfoBaseWidget_WheelIndex_Offset == 0x300, "UVehicleWheelInfoBaseWidget::WheelIndex offset is not 300");
	auto constexpr UVehicleWheelInfoBaseWidget_WheelImageBinder_Offset = offsetof(UVehicleWheelInfoBaseWidget, WheelImageBinder);
	static_assert(UVehicleWheelInfoBaseWidget_WheelImageBinder_Offset == 0x308, "UVehicleWheelInfoBaseWidget::WheelImageBinder offset is not 308");
	auto constexpr UVehicleWheelInfoBaseWidget_PunctureImageBinder_Offset = offsetof(UVehicleWheelInfoBaseWidget, PunctureImageBinder);
	static_assert(UVehicleWheelInfoBaseWidget_PunctureImageBinder_Offset == 0x330, "UVehicleWheelInfoBaseWidget::PunctureImageBinder offset is not 330");
	auto constexpr UVehicleWheelInfoBaseWidget_CachedVehiclePawn_Offset = offsetof(UVehicleWheelInfoBaseWidget, CachedVehiclePawn);
	static_assert(UVehicleWheelInfoBaseWidget_CachedVehiclePawn_Offset == 0x358, "UVehicleWheelInfoBaseWidget::CachedVehiclePawn offset is not 358");
	auto constexpr UVehicleWheelInfoBaseWidget_CachedVehicleMovement_Offset = offsetof(UVehicleWheelInfoBaseWidget, CachedVehicleMovement);
	static_assert(UVehicleWheelInfoBaseWidget_CachedVehicleMovement_Offset == 0x360, "UVehicleWheelInfoBaseWidget::CachedVehicleMovement offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
