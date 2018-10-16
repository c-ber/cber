#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUazStanceWidget_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UUazStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115016); // id32("WidgetBlueprintGeneratedClass UazStanceWidget.UazStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_4; /* Ofs: 0x248 Size: 0x8 - ObjectProperty UazStanceWidget.UazStanceWidget_C.VehicleTireSeatInfoWidget_4 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_7; /* Ofs: 0x250 Size: 0x8 - ObjectProperty UazStanceWidget.UazStanceWidget_C.VehicleTireSeatInfoWidget_C_7 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_8; /* Ofs: 0x258 Size: 0x8 - ObjectProperty UazStanceWidget.UazStanceWidget_C.VehicleTireSeatInfoWidget_C_8 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_9; /* Ofs: 0x260 Size: 0x8 - ObjectProperty UazStanceWidget.UazStanceWidget_C.VehicleTireSeatInfoWidget_C_9 */


	inline bool SetVehicleTireSeatInfoWidget_4(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x248, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_7(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x250, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_8(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_9(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUazStanceWidget_C = sizeof(UUazStanceWidget_C); // 616
    static_assert(sizeof(UUazStanceWidget_C) == 0x268, "Size of UUazStanceWidget_C is not correct.");
	auto constexpr UUazStanceWidget_C_VehicleTireSeatInfoWidget_4_Offset = offsetof(UUazStanceWidget_C, VehicleTireSeatInfoWidget_4);
	static_assert(UUazStanceWidget_C_VehicleTireSeatInfoWidget_4_Offset == 0x248, "UUazStanceWidget_C::VehicleTireSeatInfoWidget_4 offset is not 248");
	auto constexpr UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_7_Offset = offsetof(UUazStanceWidget_C, VehicleTireSeatInfoWidget_C_7);
	static_assert(UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_7_Offset == 0x250, "UUazStanceWidget_C::VehicleTireSeatInfoWidget_C_7 offset is not 250");
	auto constexpr UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_8_Offset = offsetof(UUazStanceWidget_C, VehicleTireSeatInfoWidget_C_8);
	static_assert(UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_8_Offset == 0x258, "UUazStanceWidget_C::VehicleTireSeatInfoWidget_C_8 offset is not 258");
	auto constexpr UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_9_Offset = offsetof(UUazStanceWidget_C, VehicleTireSeatInfoWidget_C_9);
	static_assert(UUazStanceWidget_C_VehicleTireSeatInfoWidget_C_9_Offset == 0x260, "UUazStanceWidget_C::VehicleTireSeatInfoWidget_C_9 offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
