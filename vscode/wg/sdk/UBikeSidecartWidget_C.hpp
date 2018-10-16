#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBikeSidecartWidget_C // Size: 0x280
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBikeSidecartWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120246); // id32("WidgetBlueprintGeneratedClass BikeSidecartWidget.BikeSidecartWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BikesidecartDriver_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.BikesidecartDriver_1 */
	ExternalPtr<struct UImage> BikesidecartImage; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.BikesidecartImage */
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BikesidecartRider_2; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.BikesidecartRider_2 */
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BikesidecartRider_3; /* Ofs: 0x260 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.BikesidecartRider_3 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeat_1; /* Ofs: 0x268 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.VehicleTireSeat_1 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeat_2; /* Ofs: 0x270 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.VehicleTireSeat_2 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeat_3; /* Ofs: 0x278 Size: 0x8 - ObjectProperty BikeSidecartWidget.BikeSidecartWidget_C.VehicleTireSeat_3 */


	inline bool SetBikesidecartDriver_1(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x248, value); }
	inline bool SetBikesidecartImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBikesidecartRider_2(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBikesidecartRider_3(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetVehicleTireSeat_1(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetVehicleTireSeat_2(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x270, value); }
	inline bool SetVehicleTireSeat_3(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBikeSidecartWidget_C = sizeof(UBikeSidecartWidget_C); // 640
    static_assert(sizeof(UBikeSidecartWidget_C) == 0x280, "Size of UBikeSidecartWidget_C is not correct.");
	auto constexpr UBikeSidecartWidget_C_BikesidecartDriver_1_Offset = offsetof(UBikeSidecartWidget_C, BikesidecartDriver_1);
	static_assert(UBikeSidecartWidget_C_BikesidecartDriver_1_Offset == 0x248, "UBikeSidecartWidget_C::BikesidecartDriver_1 offset is not 248");
	auto constexpr UBikeSidecartWidget_C_BikesidecartImage_Offset = offsetof(UBikeSidecartWidget_C, BikesidecartImage);
	static_assert(UBikeSidecartWidget_C_BikesidecartImage_Offset == 0x250, "UBikeSidecartWidget_C::BikesidecartImage offset is not 250");
	auto constexpr UBikeSidecartWidget_C_BikesidecartRider_2_Offset = offsetof(UBikeSidecartWidget_C, BikesidecartRider_2);
	static_assert(UBikeSidecartWidget_C_BikesidecartRider_2_Offset == 0x258, "UBikeSidecartWidget_C::BikesidecartRider_2 offset is not 258");
	auto constexpr UBikeSidecartWidget_C_BikesidecartRider_3_Offset = offsetof(UBikeSidecartWidget_C, BikesidecartRider_3);
	static_assert(UBikeSidecartWidget_C_BikesidecartRider_3_Offset == 0x260, "UBikeSidecartWidget_C::BikesidecartRider_3 offset is not 260");
	auto constexpr UBikeSidecartWidget_C_VehicleTireSeat_1_Offset = offsetof(UBikeSidecartWidget_C, VehicleTireSeat_1);
	static_assert(UBikeSidecartWidget_C_VehicleTireSeat_1_Offset == 0x268, "UBikeSidecartWidget_C::VehicleTireSeat_1 offset is not 268");
	auto constexpr UBikeSidecartWidget_C_VehicleTireSeat_2_Offset = offsetof(UBikeSidecartWidget_C, VehicleTireSeat_2);
	static_assert(UBikeSidecartWidget_C_VehicleTireSeat_2_Offset == 0x270, "UBikeSidecartWidget_C::VehicleTireSeat_2 offset is not 270");
	auto constexpr UBikeSidecartWidget_C_VehicleTireSeat_3_Offset = offsetof(UBikeSidecartWidget_C, VehicleTireSeat_3);
	static_assert(UBikeSidecartWidget_C_VehicleTireSeat_3_Offset == 0x278, "UBikeSidecartWidget_C::VehicleTireSeat_3 offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
