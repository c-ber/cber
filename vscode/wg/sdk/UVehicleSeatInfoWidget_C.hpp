#pragma once
#include "UVehicleSeatInfoBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatInfoWidget_C // Size: 0x350
	: public UVehicleSeatInfoBaseWidget // Size: 0x348
{
private:
	typedef UVehicleSeatInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123729); // id32("WidgetBlueprintGeneratedClass VehicleSeatInfoWidget.VehicleSeatInfoWidget_C")
		return ptr;
	}
	ExternalPtr<struct UInvalidationBox> InvalidationBox_Main; /* Ofs: 0x348 Size: 0x8 - ObjectProperty VehicleSeatInfoWidget.VehicleSeatInfoWidget_C.InvalidationBox_Main */


	inline bool SetInvalidationBox_Main(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x348, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatInfoWidget_C = sizeof(UVehicleSeatInfoWidget_C); // 848
    static_assert(sizeof(UVehicleSeatInfoWidget_C) == 0x350, "Size of UVehicleSeatInfoWidget_C is not correct.");
	auto constexpr UVehicleSeatInfoWidget_C_InvalidationBox_Main_Offset = offsetof(UVehicleSeatInfoWidget_C, InvalidationBox_Main);
	static_assert(UVehicleSeatInfoWidget_C_InvalidationBox_Main_Offset == 0x348, "UVehicleSeatInfoWidget_C::InvalidationBox_Main offset is not 348");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
