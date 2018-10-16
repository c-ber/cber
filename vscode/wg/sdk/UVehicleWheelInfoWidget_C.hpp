#pragma once
#include "UVehicleWheelInfoBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleWheelInfoWidget_C // Size: 0x378
	: public UVehicleWheelInfoBaseWidget // Size: 0x368
{
private:
	typedef UVehicleWheelInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123716); // id32("WidgetBlueprintGeneratedClass VehicleWheelInfoWidget.VehicleWheelInfoWidget_C")
		return ptr;
	}
	ExternalPtr<struct UInvalidationBox> InvalidationBox_Main; /* Ofs: 0x368 Size: 0x8 - ObjectProperty VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.InvalidationBox_Main */
	ExternalPtr<struct UTslWheeledVehicleMovement> TslWheeledVehicleMovement; /* Ofs: 0x370 Size: 0x8 - ObjectProperty VehicleWheelInfoWidget.VehicleWheelInfoWidget_C.TslWheeledVehicleMovement */


	inline bool SetInvalidationBox_Main(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetTslWheeledVehicleMovement(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0x370, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleWheelInfoWidget_C = sizeof(UVehicleWheelInfoWidget_C); // 888
    static_assert(sizeof(UVehicleWheelInfoWidget_C) == 0x378, "Size of UVehicleWheelInfoWidget_C is not correct.");
	auto constexpr UVehicleWheelInfoWidget_C_InvalidationBox_Main_Offset = offsetof(UVehicleWheelInfoWidget_C, InvalidationBox_Main);
	static_assert(UVehicleWheelInfoWidget_C_InvalidationBox_Main_Offset == 0x368, "UVehicleWheelInfoWidget_C::InvalidationBox_Main offset is not 368");
	auto constexpr UVehicleWheelInfoWidget_C_TslWheeledVehicleMovement_Offset = offsetof(UVehicleWheelInfoWidget_C, TslWheeledVehicleMovement);
	static_assert(UVehicleWheelInfoWidget_C_TslWheeledVehicleMovement_Offset == 0x370, "UVehicleWheelInfoWidget_C::TslWheeledVehicleMovement offset is not 370");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
