#pragma once
#include "UVehicleStanceBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_VehicleStanceWidget_C // Size: 0x3B8
	: public UVehicleStanceBaseWidget // Size: 0x3B0
{
private:
	typedef UBP_VehicleStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187656); // id32("WidgetBlueprintGeneratedClass BP_VehicleStanceWidget.BP_VehicleStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UInvalidationBox> InvalidationBox_SpeedText; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_VehicleStanceWidget.BP_VehicleStanceWidget_C.InvalidationBox_SpeedText */


	inline bool SetInvalidationBox_SpeedText(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x3B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_VehicleStanceWidget_C = sizeof(UBP_VehicleStanceWidget_C); // 952
    static_assert(sizeof(UBP_VehicleStanceWidget_C) == 0x3B8, "Size of UBP_VehicleStanceWidget_C is not correct.");
	auto constexpr UBP_VehicleStanceWidget_C_InvalidationBox_SpeedText_Offset = offsetof(UBP_VehicleStanceWidget_C, InvalidationBox_SpeedText);
	static_assert(UBP_VehicleStanceWidget_C_InvalidationBox_SpeedText_Offset == 0x3b0, "UBP_VehicleStanceWidget_C::InvalidationBox_SpeedText offset is not 3b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
