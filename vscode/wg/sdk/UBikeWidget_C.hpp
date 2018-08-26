#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBikeWidget_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBikeWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117379); // id32("WidgetBlueprintGeneratedClass BikeWidget.BikeWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BikesidecartDriver_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BikeWidget.BikeWidget_C.BikesidecartDriver_1 */
	ExternalPtr<struct UImage> BikesidecartImage; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BikeWidget.BikeWidget_C.BikesidecartImage */
	ExternalPtr<struct UVehicleSeatInfoWidget_C> BikesidecartRider_2; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BikeWidget.BikeWidget_C.BikesidecartRider_2 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeat_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty BikeWidget.BikeWidget_C.VehicleTireSeat_1 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeat_2; /* Ofs: 0x268 Size: 0x8 - ObjectProperty BikeWidget.BikeWidget_C.VehicleTireSeat_2 */


	inline bool SetBikesidecartDriver_1(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x248, value); }
	inline bool SetBikesidecartImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBikesidecartRider_2(t_structHelper inst, ExternalPtr<struct UVehicleSeatInfoWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVehicleTireSeat_1(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetVehicleTireSeat_2(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBikeWidget_C = sizeof(UBikeWidget_C); // 624
    static_assert(sizeof(UBikeWidget_C) == 0x270, "Size of UBikeWidget_C is not correct.");
	auto constexpr UBikeWidget_C_BikesidecartDriver_1_Offset = offsetof(UBikeWidget_C, BikesidecartDriver_1);
	static_assert(UBikeWidget_C_BikesidecartDriver_1_Offset == 0x248, "UBikeWidget_C::BikesidecartDriver_1 offset is not 248");
	auto constexpr UBikeWidget_C_BikesidecartImage_Offset = offsetof(UBikeWidget_C, BikesidecartImage);
	static_assert(UBikeWidget_C_BikesidecartImage_Offset == 0x250, "UBikeWidget_C::BikesidecartImage offset is not 250");
	auto constexpr UBikeWidget_C_BikesidecartRider_2_Offset = offsetof(UBikeWidget_C, BikesidecartRider_2);
	static_assert(UBikeWidget_C_BikesidecartRider_2_Offset == 0x258, "UBikeWidget_C::BikesidecartRider_2 offset is not 258");
	auto constexpr UBikeWidget_C_VehicleTireSeat_1_Offset = offsetof(UBikeWidget_C, VehicleTireSeat_1);
	static_assert(UBikeWidget_C_VehicleTireSeat_1_Offset == 0x260, "UBikeWidget_C::VehicleTireSeat_1 offset is not 260");
	auto constexpr UBikeWidget_C_VehicleTireSeat_2_Offset = offsetof(UBikeWidget_C, VehicleTireSeat_2);
	static_assert(UBikeWidget_C_VehicleTireSeat_2_Offset == 0x268, "UBikeWidget_C::VehicleTireSeat_2 offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
