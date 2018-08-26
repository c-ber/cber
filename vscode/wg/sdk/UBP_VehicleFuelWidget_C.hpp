#pragma once
#include "UVehicleFuelBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_VehicleFuelWidget_C // Size: 0x3E0
	: public UVehicleFuelBaseWidget // Size: 0x3C0
{
private:
	typedef UBP_VehicleFuelWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187679); // id32("WidgetBlueprintGeneratedClass BP_VehicleFuelWidget.BP_VehicleFuelWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> FuelIconAnimation; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_VehicleFuelWidget.BP_VehicleFuelWidget_C.FuelIconAnimation */
	ExternalPtr<struct UWidgetAnimation> OilGaugeAnimation; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_VehicleFuelWidget.BP_VehicleFuelWidget_C.OilGaugeAnimation */
	ExternalPtr<struct UImage> fuelicon; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_VehicleFuelWidget.BP_VehicleFuelWidget_C.fuelicon */
	float GaugeWhidth; /* Ofs: 0x3D8 Size: 0x4 - FloatProperty BP_VehicleFuelWidget.BP_VehicleFuelWidget_C.GaugeWhidth */
	float GaugePosition; /* Ofs: 0x3DC Size: 0x4 - FloatProperty BP_VehicleFuelWidget.BP_VehicleFuelWidget_C.GaugePosition */


	inline bool SetFuelIconAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetOilGaugeAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C8, value); }
	inline bool Setfuelicon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetGaugeWhidth(t_structHelper inst, float value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetGaugePosition(t_structHelper inst, float value) { inst.WriteOffset(0x3DC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_VehicleFuelWidget_C = sizeof(UBP_VehicleFuelWidget_C); // 992
    static_assert(sizeof(UBP_VehicleFuelWidget_C) == 0x3E0, "Size of UBP_VehicleFuelWidget_C is not correct.");
	auto constexpr UBP_VehicleFuelWidget_C_FuelIconAnimation_Offset = offsetof(UBP_VehicleFuelWidget_C, FuelIconAnimation);
	static_assert(UBP_VehicleFuelWidget_C_FuelIconAnimation_Offset == 0x3c0, "UBP_VehicleFuelWidget_C::FuelIconAnimation offset is not 3c0");
	auto constexpr UBP_VehicleFuelWidget_C_OilGaugeAnimation_Offset = offsetof(UBP_VehicleFuelWidget_C, OilGaugeAnimation);
	static_assert(UBP_VehicleFuelWidget_C_OilGaugeAnimation_Offset == 0x3c8, "UBP_VehicleFuelWidget_C::OilGaugeAnimation offset is not 3c8");
	auto constexpr UBP_VehicleFuelWidget_C_fuelicon_Offset = offsetof(UBP_VehicleFuelWidget_C, fuelicon);
	static_assert(UBP_VehicleFuelWidget_C_fuelicon_Offset == 0x3d0, "UBP_VehicleFuelWidget_C::fuelicon offset is not 3d0");
	auto constexpr UBP_VehicleFuelWidget_C_GaugeWhidth_Offset = offsetof(UBP_VehicleFuelWidget_C, GaugeWhidth);
	static_assert(UBP_VehicleFuelWidget_C_GaugeWhidth_Offset == 0x3d8, "UBP_VehicleFuelWidget_C::GaugeWhidth offset is not 3d8");
	auto constexpr UBP_VehicleFuelWidget_C_GaugePosition_Offset = offsetof(UBP_VehicleFuelWidget_C, GaugePosition);
	static_assert(UBP_VehicleFuelWidget_C_GaugePosition_Offset == 0x3dc, "UBP_VehicleFuelWidget_C::GaugePosition offset is not 3dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
