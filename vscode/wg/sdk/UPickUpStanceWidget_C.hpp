#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPickUpStanceWidget_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPickUpStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123851); // id32("WidgetBlueprintGeneratedClass PickUpStanceWidget.PickUpStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> PickUpImage; /* Ofs: 0x248 Size: 0x8 - ObjectProperty PickUpStanceWidget.PickUpStanceWidget_C.PickUpImage */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_10; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PickUpStanceWidget.PickUpStanceWidget_C.VehicleTireSeatInfoWidget_C_10 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_11; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PickUpStanceWidget.PickUpStanceWidget_C.VehicleTireSeatInfoWidget_C_11 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_12; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PickUpStanceWidget.PickUpStanceWidget_C.VehicleTireSeatInfoWidget_C_12 */
	ExternalPtr<struct UVehicleWheelInfoWidget_C> VehicleTireSeatInfoWidget_C_13; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PickUpStanceWidget.PickUpStanceWidget_C.VehicleTireSeatInfoWidget_C_13 */


	inline bool SetPickUpImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_10(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x250, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_11(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x258, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_12(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetVehicleTireSeatInfoWidget_C_13(t_structHelper inst, ExternalPtr<struct UVehicleWheelInfoWidget_C> value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPickUpStanceWidget_C = sizeof(UPickUpStanceWidget_C); // 624
    static_assert(sizeof(UPickUpStanceWidget_C) == 0x270, "Size of UPickUpStanceWidget_C is not correct.");
	auto constexpr UPickUpStanceWidget_C_PickUpImage_Offset = offsetof(UPickUpStanceWidget_C, PickUpImage);
	static_assert(UPickUpStanceWidget_C_PickUpImage_Offset == 0x248, "UPickUpStanceWidget_C::PickUpImage offset is not 248");
	auto constexpr UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_10_Offset = offsetof(UPickUpStanceWidget_C, VehicleTireSeatInfoWidget_C_10);
	static_assert(UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_10_Offset == 0x250, "UPickUpStanceWidget_C::VehicleTireSeatInfoWidget_C_10 offset is not 250");
	auto constexpr UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_11_Offset = offsetof(UPickUpStanceWidget_C, VehicleTireSeatInfoWidget_C_11);
	static_assert(UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_11_Offset == 0x258, "UPickUpStanceWidget_C::VehicleTireSeatInfoWidget_C_11 offset is not 258");
	auto constexpr UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_12_Offset = offsetof(UPickUpStanceWidget_C, VehicleTireSeatInfoWidget_C_12);
	static_assert(UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_12_Offset == 0x260, "UPickUpStanceWidget_C::VehicleTireSeatInfoWidget_C_12 offset is not 260");
	auto constexpr UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_13_Offset = offsetof(UPickUpStanceWidget_C, VehicleTireSeatInfoWidget_C_13);
	static_assert(UPickUpStanceWidget_C_VehicleTireSeatInfoWidget_C_13_Offset == 0x268, "UPickUpStanceWidget_C::VehicleTireSeatInfoWidget_C_13 offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
