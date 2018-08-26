#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMiniBusStanceWidget_C // Size: 0x280
	: public UUserWidget // Size: 0x248
{
private:
	typedef UMiniBusStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117100); // id32("WidgetBlueprintGeneratedClass MiniBusStanceWidget.MiniBusStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> BusImage; /* Ofs: 0x248 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.BusImage */
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BusRider_5; /* Ofs: 0x250 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.BusRider_5 */
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BusRider_6; /* Ofs: 0x258 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.BusRider_6 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_10; /* Ofs: 0x260 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.VehicleTireSeatInfoWidget_C_10 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_11; /* Ofs: 0x268 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.VehicleTireSeatInfoWidget_C_11 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_12; /* Ofs: 0x270 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.VehicleTireSeatInfoWidget_C_12 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_13; /* Ofs: 0x278 Size: 0x8 - ObjectProperty MiniBusStanceWidget.MiniBusStanceWidget_C.VehicleTireSeatInfoWidget_C_13 */


	inline bool SetBusImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetBusRider_5(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBusRider_6(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_10(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_11(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_12(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x270, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_13(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMiniBusStanceWidget_C = sizeof(UMiniBusStanceWidget_C); // 640
    static_assert(sizeof(UMiniBusStanceWidget_C) == 0x280, "Size of UMiniBusStanceWidget_C is not correct.");
	auto constexpr UMiniBusStanceWidget_C_BusImage_Offset = offsetof(UMiniBusStanceWidget_C, BusImage);
	static_assert(UMiniBusStanceWidget_C_BusImage_Offset == 0x248, "UMiniBusStanceWidget_C::BusImage offset is not 248");
	auto constexpr UMiniBusStanceWidget_C_BusRider_5_Offset = offsetof(UMiniBusStanceWidget_C, BusRider_5);
	static_assert(UMiniBusStanceWidget_C_BusRider_5_Offset == 0x250, "UMiniBusStanceWidget_C::BusRider_5 offset is not 250");
	auto constexpr UMiniBusStanceWidget_C_BusRider_6_Offset = offsetof(UMiniBusStanceWidget_C, BusRider_6);
	static_assert(UMiniBusStanceWidget_C_BusRider_6_Offset == 0x258, "UMiniBusStanceWidget_C::BusRider_6 offset is not 258");
	auto constexpr UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_10_Offset = offsetof(UMiniBusStanceWidget_C, VehicleTireSeatInfoWidget_C_10);
	static_assert(UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_10_Offset == 0x260, "UMiniBusStanceWidget_C::VehicleTireSeatInfoWidget_C_10 offset is not 260");
	auto constexpr UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_11_Offset = offsetof(UMiniBusStanceWidget_C, VehicleTireSeatInfoWidget_C_11);
	static_assert(UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_11_Offset == 0x268, "UMiniBusStanceWidget_C::VehicleTireSeatInfoWidget_C_11 offset is not 268");
	auto constexpr UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_12_Offset = offsetof(UMiniBusStanceWidget_C, VehicleTireSeatInfoWidget_C_12);
	static_assert(UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_12_Offset == 0x270, "UMiniBusStanceWidget_C::VehicleTireSeatInfoWidget_C_12 offset is not 270");
	auto constexpr UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_13_Offset = offsetof(UMiniBusStanceWidget_C, VehicleTireSeatInfoWidget_C_13);
	static_assert(UMiniBusStanceWidget_C_VehicleTireSeatInfoWidget_C_13_Offset == 0x278, "UMiniBusStanceWidget_C::VehicleTireSeatInfoWidget_C_13 offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
